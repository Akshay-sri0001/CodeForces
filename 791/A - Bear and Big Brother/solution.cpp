#include <iostream>
using namespace std;
 
int countYears(int a, int b) {
    if (a > b) return 0;
    
    return 1 + countYears(a * 3, b * 2);
}
 
int main() {
    int x, y;
    cin >> x >> y;
    
    countYears(x, y);
    cout << countYears(x, y);
}