#include <vector>
#include <bits/stdc++.h>
using namespace std; 

class Solution {
public:
   int funcname(int x) {


   
    int l = 0 ; int r = x;
    while(r-l>1){
      int m = (l+r)/2;

      if(m*m <=x){
        l = m ;
      }else{
        r=m;
      }
    }


   return l;
   
   }
};

int main() {
   // Example usage
   Solution solution;


   int smthng = solution.funcname(8);
 cout << smthng << endl;

   return 0;
}
