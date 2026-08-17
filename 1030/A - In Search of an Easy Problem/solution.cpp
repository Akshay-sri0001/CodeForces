#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    long long totalSum = 0;
    
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }
    
    if (totalSum == 0){
        cout << "EASY";
    } else {
        cout << "HARD";
    }
    
}