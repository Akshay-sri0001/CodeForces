#include <iostream>
using namespace std;
 
struct Gift {
    int giver;
    int receiver;
};
 
int main(){
    int n;
    cin >> n;
    
    int x;
    
    Gift gifts[n + 1];
    
    int answer[n + 1];
    
    for (int i = 1; i <= n; i++){
        cin >> x;
        gifts[i].giver = i;
        gifts[i].receiver = x;
    }
    
    for (int i = 1; i <= n; i++) {
        answer[gifts[i].receiver] = gifts[i].giver;
    }
 
    
    
    for (int i = 1; i <= n; i++)
    cout << answer[i] << " ";
    
    return 0;
    
}