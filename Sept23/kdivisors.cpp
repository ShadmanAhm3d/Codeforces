// Competitive Programming Setup
 #include <iostream>
 #include <unordered_map>
 #include <unordered_set>
 #include <vector>
 #include <algorithm>

using namespace std;

int main() {
 
  
  int n ; cin >> n;

  for( int i = 1 ; i*i <= n ; i++ ){
    if( n % i == 0){
      cout << i << endl;
    }
  }

 return 0;
}

