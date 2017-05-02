//Learniing STL
#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <array>
#include <algorithm>
#include <set>
using namespace std;
int main(int argc, char const *argv[])
{
	//Vector
	vector <int> vec;
	vec.push_back(4);
	vec.push_back(5);
	vec.push_back(1);
	vec.push_back(-1);
	//Container
	vector<int>::iterator itr1 = vec.begin();
	vector<int>::iterator itr2 = vec.end();
	
	//Iterator
	cout<<"Before sorting"<<endl;
	for (vector<int>::iterator itr = itr1; itr!=itr2; ++itr)
		cout<<*itr <<" ";
	cout<<endl;
	//Algorithm
	sort(itr1, itr2);
	cout<<"After sorting"<<endl;
	for (vector<int>::iterator itr = itr1; itr!=itr2; ++itr)
		cout<<*itr <<" ";
	cout<<endl;
	cout<<"Size: "<<vec.size()<<endl;
	cout<<"Vec(0): "<<vec[0]<<endl; //has no size test
	cout<<"Vec.at(1): "<<vec.at(1)<<endl; //tests for size
	cout<<"Min(4,5): "<<min(4,5)<<endl;
	cout<<"Max(4.5,5.4): "<<max(4.5,5.4)<<endl;
	cout<<"Min('a','z'): " << std::min('a','z') << '\n';

	//Deque
	deque<int> dq = {3,6,5};
	dq.push_front(2);
	dq.push_back(3);
	cout<<"\nDeque: ";
	for(int i = 0; i<dq.size();i++)
	cout<<dq[i]<<" ";
	cout<<endl;
	
	//List
	list<int> myList = {5,2,3};
	myList.push_back(8);
	myList.push_front(11);
	//list<int>::iterator itrlist = find(myList.begin(), myList.end(),2);
	cout<<"\nList: ";
	for (list<int>::iterator itr = myList.begin(); itr!= myList.end() ; ++itr)
	cout<<*itr <<" ";
	cout<<endl;
	
	//Array
	array<int, 4> ar = {5,2,5, 7};
	cout<<"\nArray: ";
	for(array<int, 4>::iterator itr = ar.begin(); itr!= ar.end();++itr)
		cout<<*itr<<" ";
	cout<<endl;
	sort(ar.begin(),ar.end());
	cout<<"\nSorted Array: ";
	for(array<int, 4>::iterator itr = ar.begin(); itr!= ar.end();++itr)
		cout<<*itr<<" ";
	cout<<endl;
	//Set
	set<int> mySet;
	mySet.insert(3);
	mySet.insert(2);
	mySet.insert(7);
	set<int>::iterator itr;
	cout<<"\nSet: ";
	for(set<int>::iterator itr = mySet.begin(); itr!= mySet.end();++itr)
		cout<<*itr<<" ";
	cout<<endl;
	pair<set<int>::iterator, bool> ret;
	ret = mySet.insert(33);
	if(ret.second == false)
		cout<<"\nError in insertion. Duplication item..";
	else 
		cout<<"\nSuccessful insertion..";
	cout<<endl;
	return 0;
}