// Competitive Programming Setup
 #include <iostream>
 #include <unordered_map>
 #include <unordered_set>
 #include <vector>
 #include <algorithm>

using namespace std;

int main() {
 
    int n ; cin>> n ;
    int arr[n] ;
    for( int i= 0 ;  i< n ; i++)
        cin >> arr[i];
    
    int newarr[n];

    newarr[0] = arr[0];
    for(int i=1 ; i < n ; i++){
        newarr[i] = newarr[i-1] + arr[i];
    }
  

    for(int i : newarr){
        cout << i << " ";
    }

    cout << endl;
    int q ; cin >> q ;
    while(q--){
        int l ,r ;
        cin >> l  >> r ;
/* int ans =0 ; 
        for(int i=l ; i<=r ; i++){

            ans+=arr[i];
        }
        cout << "ANS :  " << ans ; */

  // because there is a edge case , if l is given zero , the l-1   =  0-1 = -1 (which result in bad answer or the answer does not exist);
        if(l!=0){
        int ans = newarr[r] - newarr[l-1];
        cout << "ANS :  " << ans ;
        }else{
            cout << newarr[r]  ; 
        }


        
    }
 return 0;
}
