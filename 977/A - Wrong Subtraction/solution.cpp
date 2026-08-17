#include <iostream>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    long long n, x;
    cin >> n >> x;
    
    while (x > 0) {
        if (n%10 > 0) {
            n = n-1;
        } else {
            n = n/10;
        }
        x--;
    }
    
    cout << n;
    
}