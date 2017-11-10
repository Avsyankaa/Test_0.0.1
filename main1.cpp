#include <iostream>
#include <string>
#include <limits>
using namespace std;
int main() {
  string length;
  string array;
  string result;
  string count;
  string part1;
  string part2;
  string integer_str;
  int length_int;
  int counter = 0;
  int k = 0;
  int length1 = 0;
  int length2 = 0;
  int z = 0;
  cin >> length;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  getline(cin, array);
  cin >> count;
  length_int = atoi(length.c_str());
  for (int i = 0; i < array.length(); i++) {
    if (array[i] == ' ') counter++;
  }
  if ((length_int != (counter + 1)) || (count == " "))
    cout << " An error has occurred while reading" << endl;
  else {
    length1 = atoi(count.c_str()) * 2 - 1;
    length2 = array.length() - length1;
    for (int i = 0; i < length1; i++) {
      part1 = part1 + array[i];
    }
    for (int i = part1.length(); i < array.length(); i++) {
      part2 = part2 + array[i];
    }
    for (int i = 0; i < (length1 / 2); i++) {
      swap(part1[i], part1[length1 - i - 1]);
    }
    for (int i = 0; i < (length2 / 2); i++) {
      swap(part2[i], part2[length2 - i - 1]);
    }
    array = part2 + part1;
    while (true) {
      for (int i = z; i < array.length(); i++) {
        if (array[i] == ' ') {
          z++;
          break;
        }
        integer_str = integer_str + array[i];
        z++;
      }
      if (integer_str == "") break;
      cout << integer_str << endl;
      for (int j = 0; j < ((integer_str.length()) / 2); j++) {
        swap(integer_str[j], integer_str[integer_str.length() - j - 1]);
      }
      result = result + integer_str + " ";
      integer_str = "";
    }
    cout << result << endl;
  }
}
