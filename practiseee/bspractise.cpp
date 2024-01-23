#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to perform binary search
int main() {

     int nums[] = {5,10,15,20,25,30,35,40,45,50};

    // Sort the vector because binary search requires a sorted sequence
    sort(nums, nums+10);

    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    int x= upper_bound(nums,nums+10,30)-nums;

    cout << x; 

    return 0;
}


//lowerbound - agar target present hai array mein to uski index de dega , lekin 
// target present nahi hai to uski correct position bata dega , ya phir keh sakte ho 
// ki uska agla greater element ki index dedega


//upperbound -  agar target present hai array mein to uski AGLA HI INDEX de dega .
//Agar present nahi hai to uski correct index dega jaha ho skta hai wo element
// ya phir keh sakte ho ki uska agla greater element dhund ke dega


