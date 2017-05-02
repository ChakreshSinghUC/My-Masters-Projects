#include <iostream>
#define MAX(a, b) ((a>b)? (a):(b)); 
#define PRINTOUT(n) cout << #n << " has value" << (n) << endl;
using namespace std;

inline int addnums (int a, int b)
{

	return a + b;
}
int main(int argc, char const *argv[])
{
cout<<endl<<"Line number: "<<__LINE__<<endl;
	int a, b;
cout<<"Date: "<<__DATE__<<endl<<"Time: "<<__TIME__<<endl<<"File name: "<<__FILE__<<endl;
	cout<<"Enter two numbers to be added.. \n";
	cin>>a>>b;
	cout<<a<<"+"<<b<<"= "<<addnums(a,b)<<endl;
cout<<endl<<"Line number: "<<__LINE__<<endl;
cout<<"Date: "<<__DATE__<<endl<<"Time: "<<__TIME__<<endl;
int x = MAX(a, b);
cout<<endl<<"MAX("<<a<<", "<<b<<") = "<<x<<endl;
PRINTOUT(x * 7);
	return 0;
}