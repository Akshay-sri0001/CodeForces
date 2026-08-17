#include <iostream>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    long long x1, x2, x3, x4;
    cin >> x1 >> x2 >> x3 >> x4;
 
    long long mx = max(max(x1, x2), max(x3, x4));
 
    long long a, b, c;
 
    if (x1 == mx) {
        a = mx - x2;
        b = mx - x3;
        c = mx - x4;
    }
    else if (x2 == mx) {
        a = mx - x1;
        b = mx - x3;
        c = mx - x4;
    }
    else if (x3 == mx) {
        a = mx - x1;
        b = mx - x2;
        c = mx - x4;
    }
    else {
        a = mx - x1;
        b = mx - x2;
        c = mx - x3;
    }
 
    cout << a << " " << b << " " << c << endl;
 
    return 0;
}