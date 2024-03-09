// Competitive Programming Setup
 #include <iostream>
 #include <unordered_map>
 #include <unordered_set>
 #include <vector>
 #include <algorithm>

using namespace std;

int main() {
 
	int a,b ;
	cin >>a>>b;
	//4,2 

	int total=a;
	while(a>=b){
		total += (a/b);
		a = (a/b) + (a % b);

	}

	cout << total;

 return 0;
}
