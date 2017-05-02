// setSTL.cc
#include <algorithm>
#include <iostream>
#include <set>

using namespace std;

bool IsEven(int values) {
  return (values % 2 == 0);
  //	return true;
  // else
  // return false;
}

int main(int argc, char const *argv[]) {
  set<int> myset; // unordered container with no duplicity
  // Insert into the set...
  myset.insert(140);
  myset.insert(2);
  myset.insert(10);
  // Check if 140 is in the set or not...
  if (myset.count(140))
    cout << "Yes... 140 is present in the Set.. ";
  else
    cout << "No... Yes... 140 is NOT present in the Set.. ";

  myset.erase(140);
  cout << "\nErased 140 from the Set";
  // Check if 140 is in the set or not...
  if (myset.count(140))
    cout << "\nYes... 140 is present in the Set.. " << endl;
  else
    cout << "\nNo...  140 is NOT present in the Set.. " << endl;

  myset.erase(140);
  myset.insert(140);
  myset.insert(2);
  myset.insert(10);
  myset.insert(40);
  myset.insert(12);
  myset.insert(110);

  cout << "Size of the set: " << myset.size() << endl;
  // Print the set using an iterator
  for (set<int>::iterator itr = myset.begin(); itr != myset.end(); ++itr)
    cout << *itr << "\t";

  cout << "\n140 comes.. : " << count(myset.begin(), myset.end(), 140)
       << " number of times";
  cout << "\nEven comes.. : " << count_if(myset.begin(), myset.end(), IsEven)
       << " number of times";
  cout << endl;
  // Learning to use multiset
  multiset<int> mymultiset;
  mymultiset.insert(10);
  mymultiset.insert(10);
  mymultiset.insert(100);
  cout << "\nEnteries in the multi-set: ... \n";
  for (multiset<int>::iterator itr = mymultiset.begin();
       itr != mymultiset.end(); ++itr)
    cout << *itr << "\t";
  cout << "\n10 comes.. : " << count(mymultiset.begin(), mymultiset.end(), 10)
       << " number of times";
  cout << "\nSize of the Multiset is: .." << mymultiset.size();
  return 0;
}