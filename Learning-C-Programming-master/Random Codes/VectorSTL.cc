// Understanding the vector container
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int x[10] = {1, 9, 20, 3, -1, 8, 0, 11, 2, 6}; // an array of integers
  string y[3] = {"Chakresh", "Amit", "Zafar"};   // an array of strings

  int sizeofarray = sizeof(x) / sizeof(*x);
  vector<int> v; // a sequence containers
  // Populating the vector...
  for (int i = 0; i < sizeofarray; i++) {
    // Append the number val to the sequence stored inside the vector
    v.push_back(x[i]);
  }
  // Printing the vector...
  cout << "\nPrinting the vector... " << endl;
  for (size_t i = 0; i < v.size(); i++)
    cout << v[i] << " ";
  cout << endl;

  // Algorithm to sort sequence of numbers...
  sort(v.begin(), v.end());

  // Printing the sorted vector...
  cout << "\nPrinting the sorted array... " << endl;
  for (auto i = v.begin(); i != v.end(); ++i)
    cout << *i << ' ';
  cout << endl;
  vector<string> z;

  for (int i = 0; i < 3; i++) {
    // Append the number val to the sequence stored inside the vector
    z.push_back(y[i]);
  }
  sort(z.begin(), z.end());
  cout << "\nPrinting the sorted array... " << endl;
  for (auto i = z.begin(); i != z.end(); ++i)
    cout << *i << endl;
  cout << endl;
  return 0;
}