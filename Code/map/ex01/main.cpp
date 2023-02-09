#include <iostream>
#include <map>
using namespace std;

//Tạo hàm xuất map
void dump(map<char,int>& mp)
{
    for (auto x: mp) {
        cout << x.first << ":" << x.second << " ";
    }
    cout << endl;
}
 
int main() {
    map<char,int> mp;
    mp.insert(make_pair('a', 1));
    mp.insert(make_pair('b', 2));
    mp.insert(make_pair('c', 3));  
    mp.insert(make_pair('d', 1));
    mp.insert(make_pair('e', 2));

    dump(mp);
    
    //Tìm phần tử có khóa bằng 'c' trong map
    auto ret = mp.equal_range('c');
    
    cout << "lower bound points to: ";
    cout << ret.first->first << " => " << ret.first->second << '\n';

    cout << "upper bound points to: ";
    cout << ret.second->first << " => " << ret.second->second << '\n';
 
    return 0;
}
