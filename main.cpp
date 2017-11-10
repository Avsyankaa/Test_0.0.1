#include <iostream>
#include <string>
#include <limits>
using namespace std;
int main() {
string length;
string array;
string integer_str;
int length_int;
int counter=0;
int k=0;
int z=0;
int array1 [100];
cin>> length;
cin.ignore(numeric_limits<streamsize>::max(), '\n');
getline(cin, array);
length_int= atoi( length.c_str());
for (int i=0; i<array.length(); i++)
{
if (array[i]==' ') counter++;
}
if (length_int!= (counter+1)) cout<<" An error has occurred while reading"<< endl;
else {
  while (true) {
    for (int i = k; i < array.length(); i++) {
      if (array[i] == ' ') {
        k++;
        break;
      }
      integer_str = integer_str + array[i];
      k++;
    }
    if (integer_str == "") break;
    array1[z]= atoi (integer_str.c_str());
    z++;
    integer_str="";
}
for (int i=0; i<(length_int/2); i++)
{
        swap (array1[i], array1[length_int-i-1]);
}
for (int i=0; i<length_int; i++)
{
        cout<< array1[i]<<" ";
}
}
}
