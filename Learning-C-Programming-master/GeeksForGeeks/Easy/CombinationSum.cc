/**Partically Correct..__needs rewriting

@Author: Chakresh Singh
@Date: 1-Jan-2017
*/
#include <algorithm>
#include <iostream>
#include <set>
#include <vector>

using namespace std;
void CombinationSumFunct(vector<vector<int>> sv, int sum) {
  int count = 0;
  vector<vector<int>>::iterator row;
  vector<int>::iterator col;
  int m;
  int tempsum;
  int tempsum2;
  vector<vector<int>>::iterator row1;
  row = sv.begin();

  for (row = sv.begin(); row != sv.end(); row++) {
    if (*row->begin() < sum) {
      tempsum = *row->begin();
      if (sum % tempsum == 0) {
        count++;
        cout << "(";
        for (int i = 0; i < sum / tempsum; i++) {
          if (i < ((sum / tempsum) - 1))
            cout << tempsum << " ";
          else
            cout << tempsum << ")";
        }
      } else {
        for (row1 = row; row1 != sv.end(); row1++) {
          for (col = row1->begin(); col != row1->end(); col++) {
            tempsum2 = *col;
            m = (*col) / (*row1->begin());

            if ((tempsum + tempsum2 == sum)) {
              count++;
              cout << "(" << tempsum;
              for (int k = 0; k < m; k++)
                cout << " " << tempsum2 / m;
              cout << ")";
            }
          }
        }
      }
    } else if (*row->begin() == sum) {
      count++;
      cout << "(" << *row->begin() << ")";
    }
  }

  for (row = sv.begin(); row != sv.end(); row++) {
    tempsum = *row->begin();
    for (row1 = ++row; row1 != sv.end(); row1++) {
      tempsum2 = *row1->begin();
      if ((tempsum + tempsum2 < sum) && ((sum - tempsum2) % tempsum == 0)) {
        count++;
        cout << "(";
        for (int i = 0; i < ((sum - tempsum2) / tempsum); i++)
          cout << tempsum << " ";
        cout << tempsum2 << ")";
      }
    }
  }
  if (count == 0)
    cout << "Empty" << endl;
}

int main() {
  int t;
  cin >> t;
  int a;
  int n; // size
  int sum;
  int j;

  while (t--) {
    cin >> n;

    vector<int> tempv; // temporary vector to take input
    for (int i = 0; i < n; i++) {
      cin >> a;
      tempv.push_back(a);
    }
    sort(tempv.begin(), tempv.end());
    // remove duplicate entries..
    tempv.erase(unique(tempv.begin(), tempv.end()), tempv.end());
    cin >> sum;
    for (vector<int>::iterator itr = tempv.begin(); itr != tempv.end();
         itr++) { // delete all inputs greater than the sum
      if (*itr > sum)
        tempv.erase(remove(tempv.begin(), tempv.end(), *itr), tempv.end());
    }
    // remove duplicate entries..
    tempv.erase(unique(tempv.begin(), tempv.end()), tempv.end());
    vector<vector<int>> sv;
    vector<int> v;
    for (vector<int>::iterator itr = tempv.begin(); itr != tempv.end(); itr++) {
      j = 2;
      vector<int> v;
      v.push_back(*itr);
      // make a vector of all the multiples(which are less than sum) of an entry
      // and add to a vector
      while (*itr * j <= sum) {
        v.push_back(*itr * j);
        j++;
      }
      // push vector to vector of vectors
      sv.push_back(v);
    }
    //  sort(sv.begin(), sv.end());
    // remove duplicate entries..
    // sv.erase(unique(sv.begin(), sv.end()), sv.end());

    CombinationSumFunct(sv, sum);
    cout << endl;
  }
  return -1;
}