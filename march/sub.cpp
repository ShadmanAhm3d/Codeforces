// Competitive Programming Setup
#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

int main() {

  int arr[4] = {1, 2, 3, 4};
  int n = 4;
  int k=3;

  int ans =0 ;
  for (int i = 0; i < n; i++) { //n time
    int currsum  =0;
    for(int j=i ; j<n;j++){ // n-i time
      currsum+=arr[j];
      if(currsum == k){
        ans++;
        cout<< "[" ;
        for(int k=i;k<=j;k++){ // n-j-k times
          cout << arr[k] << " ";
        }
        cout << "]"; // 0(n*n-i*n-j-k)  --> 0(n3);
      }
    }

  }

  return 0;
}
