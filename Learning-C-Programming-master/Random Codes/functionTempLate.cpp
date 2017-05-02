#include<iostream>
using namespace std;

template <typename T>
T square (T x)
{
	return x*x;
}

int main(int argc, char const *argv[])
{

	cout<<square(5)<<endl;
	cout<<square(5.5)<<endl;

//	cout<<square("a")<<endl;

	return 0;
}