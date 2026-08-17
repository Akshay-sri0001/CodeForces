#include <iostream>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n, x;
    cin >> n >> x;
 
    int z = 0;
 
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
 
        if (a > x) {
            z += 2;
        } else {
            z++;
        }
    }
 
    cout << z;
 
    return 0;
}