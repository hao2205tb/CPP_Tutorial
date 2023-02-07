#include <iostream>
#include <cstring>
using namespace std;
int main(){
    
    string base = "Good School";

    base.replace(0, base.length(), "Bad boy");
    cout <<  base << endl;
    

    return 0;
}
