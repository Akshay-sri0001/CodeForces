#include <iostream>
using namespace std;
 
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int x, y = 0 ;
    cin >> x ;
 
    int a, b, c;
 
    for (int i = 0; i<x; i++){
        cin >> a >> b >> c;
 
        if ((a + b + c) >= 2) {
            y++;
        } 
    }
 
    cout << y;
 
}