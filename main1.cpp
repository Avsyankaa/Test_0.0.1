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
  int length1 = 0;
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
    cin >> count;
    if (atoi(count.c_str()) == 0) {
      cout << " An error has occurred while reading" << endl;
    } else {
      length1 = (length_int - atoi(count.c_str())) * 2;
      for (int i = 0; i < length1; i++) {
        part2 = part2 + array[i];
      }
      for (int i = length1; i < array.length(); i++) {
        part1 = part1 + array[i];
      }
      result = part1 + ' ' + part2;
      cout << result << endl;
    }
  }
}
