# CatsDBAssignment
As a part of final exam for Cloud Computing
I was trying to use Nodejs with mySQL. But was facing trouble with defining schema. SO I have used python here.
All the files are uploaded here. 

A mySQL database is created on my server.
Database name: cats
The database is populated using the following command:
/home/cat.txt

LOAD DATA LOCAL INFILE '/home/ec2-user/LastAssignment/CatsDBAssignment/catstext.txt' INTO TABLE cats;

URL (example):
http://52.42.96.27:3000/work/OL15846624W
{"Timestamp": "2012-01-25T18:24:29.877598", "Author Name": "Ruth Langland Holberg", "details": {"title": "The Catnip Man", "created": {"type": "/type/datetime", "value": "2011-07-09T21:16:02.723875"}, "covers": [6912594], "last_modified": {"type": "/type/datetime", "value": "2012-01-25T18:24:29.877598"}, "latest_revision": 3, "key": "/works/OL15846624W", "authors": [{"type": {"key": "/type/author_role"}, "author": {"key": "/authors/OL2104426A"}}], "type": {"key": "/type/work"}, "subjects": ["Juvenile fiction", "Cats", "Protected DAISY", "In library"], "revision": 3}}

Second Service:

http://52.42.96.27:3000/search/Homeless
{"works": ["http://52.42.96.27/work/OL509209W", "http://52.42.96.27/work/OL4134102W", "http://52.42.96.27/work/OL1633998W", "http://52.42.96.27/work/OL4966066W", "http://52.42.96.27/work/OL17311133W", "http://52.42.96.27/work/OL15440006W", "http://52.42.96.27/work/OL509195W"]}
