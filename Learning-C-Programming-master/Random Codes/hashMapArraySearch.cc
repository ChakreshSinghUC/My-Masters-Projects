#include <iostream>
#include <map>
using namespace std;

int main() {
  // array input
  int arr[] = {4, 3, 7, 8, 1, 9, 10};
  // find two elements in array whose sum is 10.
  int sum = 10;
  int size = sizeof(arr) / sizeof(arr[0]);

map<int, int> m;
  // store the array in a hashmap..
  for (int i = 0; i < size; i++) {
    m.insert(make_pair(arr[i], i));
  }
  // print the Hash Map
  for (auto it = m.begin(); it != m.end(); ++it) {
    {
      int key = it->first;
      int &value = it->second;
      cout << key << "\t" << value << endl;
    }
  }

  int a, b;
  for (int i = 0; i < size; i++) {
  if (arr[i]< sum)
  {
      a = arr[i];
      b = sum -a;
      if(m.find(b) != m.end()&& m.find(b)->second!= i)
      {
         //remove b from the hash map to avoid duplicity in the output..
          cout<<"("<<a<<", "<<b<<")"<<endl;
      }
  }
  
  }

  return -1;
}