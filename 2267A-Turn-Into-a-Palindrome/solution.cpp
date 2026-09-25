#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while (t--){
        short int n; cin >> n;
        char c; cin >> c;
        
        string str=""; for (short int i = 0; i < n; i++){
            char ch; cin >> ch;
            str += ch;
        }

        short int pt1 = 0, pt2 = n-1, spent=0;
        while (pt1 < str.length()-1){
            if (str[pt1] == str[pt2]){
                pt1++; pt2--; continue; 
            } if (str[pt2] == c){
                str[pt1] = c; 
            } else if (str[pt1] == c){
                str[pt2] = c; 
            } else{
                str[pt1] = c;
                str[pt2] = c;
                spent++;
            } spent++; pt1++; pt2--;
        } cout << spent << '\n';
    }
}
