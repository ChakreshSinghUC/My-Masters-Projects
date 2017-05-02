//http://www.practice.geeksforgeeks.org/problem-page.php?pid=1250
/**
Given an array of integers that might contain duplicates, return all possible subsets.
Note Output:

        Elements in a subset must be in non-descending order.
        The solution set must not contain duplicate subsets.
        The subsets must be sorted lexicographically.
*/

#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
using namespace std;
vector<vector<int> > getAllSubsets(vector<int> set) {
  vector<vector<int> > subset;
  vector<int> empty;
  subset.push_back(empty);

  for (int i = 0; i < set.size(); i++) {
    vector<vector<int> > subsetTemp = subset;

    for (int j = 0; j < subsetTemp.size(); j++)
      subsetTemp[j].push_back(set[i]);

    for (int j = 0; j < subsetTemp.size(); j++)
      subset.push_back(subsetTemp[j]);
  }
  return subset;
}
int main() {
  int t;
  int n;
  int a;
  cin >> t;
  while (t--) {
    cin >> n;

    vector<int> set;
    for (int i = 0; i < n; i++) {
      cin >> a;
      set.push_back(a);
    }
    vector<vector<int> > s;
    s = getAllSubsets(set);
    vector<vector<int> >::iterator row;
    vector<int>::iterator col;

    for (row = s.begin(); row != s.end(); row++) {
      for (col = row->begin(); col != row->end(); col++) {
        sort(row->begin(), row->end());
      }
    }
    sort(s.begin(), s.end());

    s.erase(unique(s.begin(), s.end()), s.end());

    for (row = s.begin(); row != s.end(); row++) {
      cout << "(";
      for (col = row->begin(); col != row->end(); col++) {
        if (col == row->begin())
          cout << *col;
        else
          cout << " " << *col;
      }
      cout << ")";
    }
    cout << endl;
  }
  return -1;
}