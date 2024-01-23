#include <cctype>
#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define endl '\n'
#define ll long long
#define pb push_back
using namespace std;

int main() {

  /* string s;
  cin >> s;
  bool ok = true;

  bool smol = false;
    bool captical =false;
  if (s[0] >= 97) {
   for (int i = 1; i < s.size(); i++) {
     if (s[i] < 91 && s[i] > 64) {
       smol = true;
     } else {
       smol = false;
       break;
     }
   }
 }else if(s[0] <=90){
        for(int i=1 ; i < s.size() ;i++){
            if(s[i]>=65 && s[i]<=90){
                //keep some kinf of flag on
                captical = true;
            }else{
                //turn the flag of ;
                captical = false;
                break;
            }

        }
    }

  if (smol == true) {
    s[0] = toupper(s[0]);
    for (int i = 1; i < s.size(); i++) {
      s[i] = tolower(s[i]);
    }
  }

  if (captical == true) {
    s[0] = toupper(s[0]);
    for (int i = 1; i < s.size(); i++) {
      s[i] = tolower(s[i]);
    }
  }
// lets say hte captical flag is on then we convert all uppercase to lowercase from i=1 to n;else if the flag is false then just print the normal stirng

  for (int i = 0; i < s.size(); i++) {
    cout << s[i];
  }

  return 0; */


    string s ; cin >> s;
    bool ok = true;
    

    //change tab hi karo jab
    // Agar sare captial ho
    // ya phir s[0] ko chor kar sare captical ho
    // answer mein string ka ulta kardo;

   for(int i=1; i< s.size() ;i++){
        if(s[i]>=97){
            ok=false; 
            break;
        }
    }

    if(ok){
        for(int i=0; i<s.size();i++){
            if(s[i]>=97){
                s[i]=s[i]-32;
            }else{
                s[i]=s[i]+32;
            }
        }
        cout << s;
    }else{
        cout << s;
    }



    return 0;
}
