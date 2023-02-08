#include <iostream>
using namespace std;
int main(){
    int a[] ={1,2,3,4,5};

    int length = sizeof a / sizeof(int);
    cout <<length;  
}
//5
