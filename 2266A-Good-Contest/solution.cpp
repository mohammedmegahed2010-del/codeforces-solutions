#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while (t--){
        short int n, weak=SHRT_MAX; cin >> n;
        for (short int i = 0; i < 3; i++){
            short int s; cin >> s;
            if (s < weak) weak = s;
        } cout << n-weak << '\n';
    }
}