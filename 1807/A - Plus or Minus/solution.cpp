#include <iostream>
using namespace std;
 
void solve(int a, int b, int c, char *ans) {
    
    if (a + b == c) {
        *ans = '+';
    }
    else if (a - b == c) {
        *ans = '-';
    }
}
 
int main() {
    
    int t;
    cin >> t;
    
    int a, b, c;
    
    for (int i = 0; i < t; i++) {
        cin >> a >> b >> c;
        
        char ans;
        solve(a, b, c, &ans);
        
        cout << ans << '
';
    }
}