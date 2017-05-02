#include <iostream>
using namespace std;

void reverseOwithX(char mat[6][6], bool &utilMat[6][6], int n, int m) {
  int k = 0;
  bool flag = false;
  // horizontal checks 
  for (int i = 0; i < m; i++) {
}
}

int main() {
  char mat[6][6] = {
      {'X', 'O', 'X', 'X', 'X', 'X'}, {'X', 'O', 'X', 'X', 'O', 'X'},
      {'X', 'X', 'X', 'O', 'O', 'X'}, {'O', 'X', 'X', 'X', 'X', 'X'},
      {'X', 'X', 'X', 'O', 'X', 'O'}, {'O', 'O', 'X', 'O', 'O', 'O'},
  };

  bool utilMat[6][6];
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 6; j++) {
      if (mat[i][j] == 'O')
        utilMat[i][j] = true;
      else
        utilMat[i][j] = false;
    }
  }

  reverseOwithX(mat, &utilMat, 6, 6);
  return -1;
}