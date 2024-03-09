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

  int tc ; cin >> tc;
  while(tc--){
     int n ,m;cin>>n>>m;
     int arr[n][m];
     for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
	cin>>arr[i][j];
      }
    }

    int overallmax = 0;
    for(int i=0 ; i< n ;i++){
      for(int j=0;j<m;j++){
	int currsum =0 ;
	int iteri = i ; int iterj=j;
	while(iteri >=0 && iteri < n && iterj>=0 && iterj<m){
	  currsum+=arr[iteri][iterj];
	  iteri--;
	  iterj--;
	}
	iteri = i ; iterj=j;

	while(iteri >=0 && iteri < n && iterj>=0 && iterj<m){
	  currsum+=arr[iteri][iterj];
	  iteri++;
	  iterj++;
	}
	iteri = i ; iterj=j;

	while(iteri >=0 && iteri < n && iterj>=0 && iterj<m){
	  currsum+=arr[iteri][iterj];
	  iteri--;
	  iterj++;
	}
	iteri = i ; iterj=j;

	while(iteri >=0 && iteri < n && iterj>=0 && iterj<m){
          //	 leftdown 
	  currsum+=arr[iteri][iterj];
	  iteri++;
	  iterj--;
	}
	iteri = i ; iterj=j;

	currsum-=arr[i][j]*3;
	overallmax = max(overallmax,currsum);
      }
    }
      cout << overallmax << endl;
    
  }

 return 0;
}
