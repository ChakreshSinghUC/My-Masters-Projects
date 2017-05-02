#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
bool myComparison(pair<int, double> &a, pair<int, double> &b) {
  return a.second < b.second;
}
void knapsac(int val[], int wt[], int size, int W) {

  vector<pair<int, double>> r;

  for (int i = 0; i < size; i++) {
    r[i].first = i;
    r[i].second = val[i] / wt[i];
  }

  sort(r.begin(), r.end(), myComparison);

  for (int i = 0; i < r.size(); i++)
    cout << r[i].first << "\t" << r[i].second << endl;
}
int main() {
  int val[] = {10, 40, 50, 70};
  int wt[] = {1, 3, 4, 5};
  int size = sizeof(val) / sizeof(wt);
  int W = 100;
  knapsac(val, wt, size, W);
  return -1;
}