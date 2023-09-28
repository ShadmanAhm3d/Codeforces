// Competitive Programming Setup
 #include <iomanip>
#include <iostream>
 #include <unordered_map>
 #include <unordered_set>
 #include <vector>
 #include <algorithm>


using namespace std;

//this is called epsilon , the nigga basically acts a precision holder .
double eps = 1e-7;


double multiply ( double mid, int n){
    double ans = 1;
    for(int i=0 ; i < n ; i++){

        ans*=mid;
    }
    return ans;
}
int main() {

  double x ; cin >> x;
    double l , h , m ;

    //the root
    int n ; cin >> n;

    l = 1 ; h = x;

    
    while( h - l > eps){
        double m  = (l + h)/2;
        if( multiply(m,n) > x){
            h = m;
        }else{
            l = m ;
        }

    }

    cout << "L--> "  <<  l << endl ;
    cout << "R--> "  <<  h << endl ;
 
  


 return 0;
}
