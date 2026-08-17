#include <iostream>
using namespace std;
 
bool canFit(int p, int q) {
    if (q - p >=2){
        return true;
    } else{
        return false;
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    int p, q;
    
    int count = 0;
 
    for (int i = 0; i < n; i++) {
        cin >> p >> q;
 
        if (canFit(p, q)) {
            count++;
        }
    }
 
    cout << count;
 
    return 0;
 
}