#include <iostream>
using namespace std;
int main(){
    char a[] = "abcdef";
    int length = sizeof a / sizeof(char);
    cout <<length;   
}
//7
