/* #pragma GCC optimize("O3")
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define endl '\n'
#define ll  long long
#define pb push_back
using namespace std;


int gcd (int a , int b){
  if (b == 0) return a;
  return gcd(b,a%b);
}

int main(){

  int a,b,c; cin >> a >> b >> c;

  if(c%gcd(a,b)==0){
    cout << "YES" ;
  }else{
    cout << "YES" ;
  }
   

 return 0;
} */


#include<bits/stdc++.h>
using namespace std;




int main()
{
	int a,b,c;
	cin>>a>>b>>c;

	for(int i=1;i<=b;i++)
		if((a*i)%b==c)
		{
			cout<<"YES"<<endl;
			return 0;
		}
	cout<<"NO"<<endl;

	return 0;
}
