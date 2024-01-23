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

  char runagain = 'Y';
  while(runagain =='Y' || runagain =='y'){
    
  cout << "ENTER THE CHARACTER  : " << endl ;
  char ch;
  cin >> ch;
  ch += 1;

  int j = 0;

  

  if (int(ch) > 64 && int(ch) < 91) {
    for (int i = ch; i <= 90; i++) {
      cout << char(ch + j);
      j++;
    }
  }else if (int(ch) > 96 && int(ch) < 122) {
      for (int i = ch; i <= 122; i++) {
        cout << char(ch + j);
        j++;
      }
    }



    cout <<endl <<  "RUN AGAIN ('Y' or 'y') : " << endl;
    cin >> runagain;
  }
  

  return 0;
}
