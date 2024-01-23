#include <vector>
#include <bits/stdc++.h>
using namespace std; 

class Solution {
public:
   int funcname(vector<int>& a) {
    /* int ans = 1;
 
        int n = a.size();

    for (int i = 0; i < n; i++) {
        int cnt = 1;
        for (int j = i + 1; j < n; j++) {
            if ((a[j - 1] % 2 == 0 && a[j] % 2 != 0)
                || (a[j - 1] % 2 != 0 && a[j] % 2 == 0))
                cnt++;
            else
                break;
        }
        // store max count
        ans = max(ans, cnt);
    }
    if (ans == 1)
        return 0;
    return ans; */
    


   
   }
};

int main() {
   // Example usage
   vector<int> arr = {1,2,3,4,5,6,6,6,6};
   Solution solution;


   int smthng = solution.funcname(arr);
   cout << "ans : " << smthng << endl;

   return 0;
}
