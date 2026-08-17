#include <iostream>
using namespace std;
 
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    
    cin >> n;
    
    int r;
    
    r = n / 5;
    
    if(n%5 != 0){
        r++;
    }
    
    cout << r;
}