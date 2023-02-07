#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string str ("Hello world");
  str.push_back('a');
  cout << str;
  return 0;
}
//> Hello worlda
