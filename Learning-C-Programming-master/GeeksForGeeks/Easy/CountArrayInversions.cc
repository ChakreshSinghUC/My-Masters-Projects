// NOT FINISHED
/**
   http://www.geeksforgeeks.org/counting-inversions/
    CountArrayInversions.cpp
 Two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j
    Purpose: Counting inversions of an array
    @author: Chakresh Singh
    @version 1.0 12/23/16
*/
#include <iostream>
using namespace std;

int countArrayInversions(int A[], int ArrSize){
    // order of n^2 algorithm is easy to write here
    // but we intend to write something on the lines of merge sort.
};
int main() {
  int Arr[] = {2, 4, 1, 3, 5};
  int ArrSize = sizeof(Arr) / sizeof(Arr[0]);
  int count = countArrayInversions(Arr, ArrSize);
  cout << "\nCount = " << count;
  return -1;
}
//DO NOT RUN