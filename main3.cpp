#include <iostream>
#include <string>
#include <limits>
using namespace std;
int main() {
  string str;
  string stolb;
  string cinn;
  int znach = 1;
  int k = 0;
  getline(cin, cinn);
  while (cinn[k] != ',') {
    str = str + cinn[k];
    k++;
  }
  k++;
  for (int i = k; i < cinn.length(); i++) {
    stolb = stolb + cinn[i];
  }
  if (stolb == "") {
    cout << "An error while reading" << endl;
  } else {
    int stolb_int, str_int;
    stolb_int = atoi(stolb.c_str());
    str_int = atoi(str.c_str());
    int array[100][100];
    int kvadr = 0;
    if ((str_int % 2) == 0) {
      kvadr = str_int / 2;
    } else
      kvadr = (str_int / 2) + 1;
    int curr_kvadr = 1;
    while (curr_kvadr != (kvadr + 1)) {
      for (int i = (curr_kvadr - 1); i < (stolb_int - curr_kvadr + 1); i++) {
        array[curr_kvadr - 1][i] = znach;
        znach++;
      }
      for (int i = curr_kvadr; i < (str_int - curr_kvadr + 1); i++) {
        array[i][stolb_int - curr_kvadr] = znach;
        znach++;
      }
      for (int i = (stolb_int - curr_kvadr - 1); i > (curr_kvadr - 2); i--) {
        array[str_int - curr_kvadr][i] = znach;
        znach++;
      }
      for (int i = (str_int - curr_kvadr - 1); i > (curr_kvadr - 1); i--) {
        array[i][curr_kvadr - 1] = znach;
        znach++;
      }
      curr_kvadr++;
    }
    for (int i = 0; i < str_int; i++) {
      for (int j = 0; j < stolb_int; j++) {
        cout << array[i][j] << " ";
      }
      cout << endl;
    }
  }
}
