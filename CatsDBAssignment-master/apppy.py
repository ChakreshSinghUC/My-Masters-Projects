# -*- coding: utf-8 -*-

from flask import Flask
from flask_restful import Resource, Api
from flask import Response
import json
import urllib
from flask import request
from flask_restful import reqparse
from flask.ext.mysql import MySQL

app = Flask(__name__)
api = Api(app)

mysql = MySQL()


# MySQL configurations
app.config['MYSQL_DATABASE_USER'] = 'root'
app.config['MYSQL_DATABASE_PASSWORD'] = 'password'
app.config['MYSQL_DATABASE_DB'] = 'catsdb'
app.config['MYSQL_DATABASE_HOST'] = 'localhost'
mysql.init_app(app)
conn = mysql.connect()
cursor = conn.cursor()
class CatsClass(Resource):
    def get(self):
        return {'Cats': 'DB'}
        
class getJobInformation(Resource):
    def get(self, id):
        try:
            cursor.execute("select details, timestamp from cats where objID  = '/works/"+id+"' ")
            conn.commit()
	    st = ""
	    timestamp = ""
	    for record in cursor :
		st = record[0]
		timestamp = record[1]
	    js = json.loads(st)
	    authorLink = js["authors"][0]["author"]["key"]
	    url = "https://openlibrary.org"+authorLink+".json"
	    f = urllib.urlopen(url)
	    resp = json.loads(f.read())
    	    authorName = resp["name"]
            return {'Author Name': authorName , "details" : js, "Timestamp" : timestamp}

        except Exception as e:
            return {'error': str(e)}
class getSearchInfo(Resource):
    def get(self,word):
        try:
            cursor.execute("select objID  from cats where details like '%"+word+"%'")
	    r = ""
	    ans = []
            for record in cursor :
		ans.append("http://52.42.96.27"+record[0].replace('works','work'))
#	    data = cursor.fetchall()

            return {'works': ans}

        except Exception as e:
            return {'error': str(e)}



#api.add_resource(HelloWorld, '/')
api.add_resource(getJobInformation, '/work/<string:id>')
api.add_resource(getSearchInfo, '/search/<string:word>')


if __name__ == '__main__':
	app.run(host='0.0.0.0',port=3000)
