
#include <cstdlib>
#include <ctime>
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

   srand(time(0));
   int n ; cin>>n;
   vector<int>sizechecker(n);
   vector<int>sizechecker2(n);

   for(int i=0; i<n;i++){

      sizechecker[i]= rand()%100;
   }
   for(int i=0; i<n;i++){
      sizechecker2[i]= rand()%100;
   }

   for(int i=0; i<n;i++){
      cout << sizechecker[i]<< " " ;

   }
   cout << endl;
   for(int i=0; i<n;i++){
      cout << sizechecker2[i]<< " ";
   }
   cout << endl;


   cout << "ARray 1 : "  <<sizechecker.size()-1 <<endl;

   cout << "ARray 2 : "  <<sizechecker2.size()-1 << endl;
 return 0;
}
