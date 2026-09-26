#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    short int t; cin >> t;
    while (t--){
        short int n; cin >> n;
        for (short int i = 1; i <= n; i++) cout << i << ' ';
        cout << '\n';
    }
    return 0;
}