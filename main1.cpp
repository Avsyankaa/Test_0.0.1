#include <iostream>
#include <string>
#include <limits>
using namespace std;
int main() {
  string length;
  string array;
  string result;
  string count;
  string part1, part2;
  int length_int;
  int counter = 0;
  int k = 0;
  int z = 0;
  cin >> length;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  getline(cin, array);
  length_int = atoi(length.c_str());
  for (int i = 0; i < array.length(); i++) {
    if (array[i] == ' ') counter++;
  }
  if (length_int != (counter + 1))
    cout << " An error has occurred while reading" << endl;
  else {
    getline(cin, count);
    if (count == "") {
      cout << " An error has occurred while reading" << endl;
    } else {
      while (k != (length_int - atoi(count.c_str()))) {
        part2 = part2 + array[z];
        if (array[z] == ' ') k++;
        z++;
      }
      for (int i = part2.length(); i < array.length(); i++) {
        part1 = part1 + array[i];
      }

      result = part1 + ' ' + part2;
      cout << result << endl;
    }
  }
}
