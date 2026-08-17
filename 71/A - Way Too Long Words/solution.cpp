#include <iostream>
#include <string>
using namespace std;
 
int main() {
    
    int n;
    string a;
 
    cin >> n;
 
    for (int i = 0; i < n ; i++) {
        cin >> a; 
        if (a.length() <= 10) {
            cout << a << endl;
        } else {
            cout << a.front() << a.length() - 2 << a.back() << endl;
        }
    }
}