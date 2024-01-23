/* #include <vector>
#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define endl '\n'
#define ll  long long
#define pb push_back
using namespace std;

int lcm(int a, int b){
    return (a/__gcd(a,b))*b;
}

int findLCM(const vector<int>& n) {
    int result = 1;

    for (int i = 0; i < n.size(); ++i) {
        result = lcm((result)%mod, n[i]);
    }
    return (result % mod);
}


int main(){

    int n;
    cin >> n;
    vector<int>s(n);

    for(int i=0 ;i<n;i++){
        cin >> s[i];
    }

    int res = findLCM(s);
    int holder= res-1;
    cout << "THe Mod operator " << holder << endl;

    int finaleResult = 0;
    for(int i=0 ; i < n; i++){
        finaleResult += (holder % s[i]);
    }

    cout << finaleResult;


 return 0;
} */



/*

#include <vector>
#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define endl '\n'
#define ll  long long
#define pb push_back
using namespace std;




int main(){

    int n ;cin >> n;
    vector<int>s(n);
    for(int i=0; i< n; i++) cin>>s[i];

    //find an number that evenly divides them all ;
    // and result in a zero answer ;

    int holder= 0;
    for(int i=2 ; ; i++){
        int res =0;
        for(int k=0 ; k < s.size() ; k++){ // i mod s[k] res += (i % s[k]);
        }
        if(res == 0){
            holder = i-1;
            break;
        }
    }
    cout <<  holder ;

    int finaleResult = 0;
    for(int i=0 ; i < n; i++){
        finaleResult += (holder % s[i]);
    }

    cout <<endl << finaleResult;

 return 0;
} */





#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define endl '\n'
#define ll  long long
#define pb push_back
using namespace std;




int main(){

    int n ;cin >> n;
    int ans =0;
    for(int i=0 ; i< n ;i++){
        int a ; cin >> a;
        ans+= (a-1);
    }
    cout << ans;

 return 0;
}
