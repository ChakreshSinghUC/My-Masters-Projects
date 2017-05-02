/*Given an array and a number k where k is smaller than size of array, the task is to find the k’th smallest element in the given array. It is given that all array elements are distinct.
*/
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int t;
  int k;
  int size;
  
  cin >> t;
  while (t--) {
      vector<int> v;//impotant to declare the vector within the while loop
    cin >> size;
    int a;
    for (int i = 0; i < size; i++) {
      cin >> a;
      v.push_back(a);
    }
    cin >> k;
    sort(v.begin(), v.end());
    cout << v.at(k - 1) << endl;
    
  }
  return -1;
}