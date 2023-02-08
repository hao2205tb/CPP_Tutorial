#include <iostream>
using namespace std;
int main(){
    /*Khai báo mảng số*/
    int int_arr[4];
    
    /*Truy cập và gán giá trị vào phần tử trong mảng*/
    int_arr[0]=2;
    int_arr[1]=0;
    int_arr[2]=2;
    int_arr[3]=1;


    /*In từng phần tử và kiểm tra kết quả */ 
    for(int i = 0; i < 4; i++) {
      cout << int_arr[i] <<' ';
    }

}
//> 2 0 2 1
