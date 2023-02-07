#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string str ("abcd");
  str += "e"; //Thêm ký tự a vào cuối string
  cout << str <<endl;

  str += "gkh";//Thêm chuỗi gkh vào cuối string
  cout << str;
  return 0;
}
