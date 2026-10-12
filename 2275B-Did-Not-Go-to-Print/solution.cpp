#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while (t--){
        stack<int> D;
        int n; cin >> n;
        vector<bool> not_printed(n + 1, true);
        string not_pr = ""; int no_p=n;
        for (int i = 1; i <= n; i++){
            char ch; cin >> ch;
            if (ch == '1'){
                D.push(i);
            } else if (ch == '2'){
                if (!D.empty()){
                    not_printed[D.top()] = false;
                    no_p--;
                    D.pop();
                } else {
                    not_printed[i] = false;
                    no_p--;
                }
            } else if (ch == '3'){
                not_printed[i] = false;
                no_p--;
            } 
        } cout << no_p << '\n';
        for (int i = 1; i <= n; i++){
            if (not_printed[i]){
                cout << i << ' ';
            }
        } cout << '\n';
    }
    return 0;
}