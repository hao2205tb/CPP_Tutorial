#include <iostream>
using namespace std;

int main () {
    char first, last;

    cout << "Nhập tên họ cách nhau bởi dấu cách:\n";

    first = cin.get();         //Dùng hàm get để lấy ký tự đầu tiên
    cin.ignore(256,' ');  //Bỏ qua cho tới khi tìm thấy dấu cách

    last = cin.get();      //Dùng hàm get để lấy ký tự tiếp theo

    cout << "Tên viết tắt của bạn: " << first << last << '\n';

    return 0;
}
