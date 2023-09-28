#include <iostream>
#include <vector>
#include <algorithm>

using namespace std ;
int main() {
    vector<int> vec = {1, 3, 5,5,5,5,5,5,5, 7, 9, 11};
    //                 T T   T T T T T T T  F F F 
    int target = 5;

    //l = min - 1 ; r = max+1 ;

    int l = -1 , r = vec.size();

    while( r - l > 1){
        int mid = (l+r)/2;
        if(vec[mid] < target)
            l = mid;
        else
            r= mid;
    }
    cout << " TRUTH   " << l << endl;
    cout << "  False   " << r << endl;

    return 0;
}

