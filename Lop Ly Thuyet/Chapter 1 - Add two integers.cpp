//C++
#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long a, b, a1, b1, a2, b2;
    cin >> a >> b;
    a1 = a/10; //bỏ đi chữ số cuối
    b1 = b/10;
    a2 = a%10; b2 = b % 10; // lấy chữ số cuối
    unsigned long long c1 = a1 + b1 + (a2 + b2) /10; // tổng của phần nguyên + phần thạp phân
    unsigned long long c2 = (a2 + b2) % 10; // chữ số cuối của tổng
    if( c1 > 0) cout << c1 << c2; //tổng có phần nguyên -> in lien tiếp thành 1 số
    else cout << c2;
    return 0;
}
