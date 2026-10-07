#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t; 
    cin >> t;
    while (t--) {
        int x, y, R;
        cin >> x >> y >> R;
        cout << x << " " << y + R << "\n";
    }
    return 0;
}
