#include <initializer_list>
#include <iostream>
#include <queue>
using namespace std;

template <typename T> void print_queue(T &q) {
  while (!q.empty()) {
    std::cout << q.top() << " ";
    q.pop();
  }
  std::cout << '\n';
}
int main() {
  priority_queue<int> pq;

  for (int n : {1, 2, 3, 4, 5, 6, 7, 7, 8, 0})
    pq.push(n);

  print_queue(pq);

  priority_queue<int, vector<int>, greater<int>> q2;

  for (int n : {1, 8, 5, 6, 3, 4, 0, 9, 7, 2})
    q2.push(n);
  print_queue(q2);

  auto cmp = [](int left, int right) { return (left ^ 1) < (right ^ 1); };
  priority_queue<int, vector<int>, decltype(cmp)> q3(cmp);

  for (int n : {1, 8, 5, 6, 3, 4, 0, 9, 7, 2})
    q3.push(n);

  print_queue(q3);

  return -1;
}