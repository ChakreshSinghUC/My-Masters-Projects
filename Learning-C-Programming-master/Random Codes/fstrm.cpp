//fstrm.cpp
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
	char ch[100];
	char a[100] = "laklask";
	ifstream mystream("temptext.txt");
	
	ofstream ostream("temptext.txt");
	mystream>>ch;
	ostream<<a;

	
	
	return 0;
}