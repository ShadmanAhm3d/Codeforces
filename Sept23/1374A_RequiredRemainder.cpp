#include <iostream>
using namespace std;

#define mod %
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y, n;
        cin >> x >> y >> n;

        if( n - (n % x) + y <=n){
            cout << n - ( n mod x )+ y << endl;
        }else{
            cout << n - ( n mod x ) - (x -y) << endl;
        }
    }

    return 0;
}

