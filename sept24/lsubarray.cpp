class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        // 0 1 1 1 0 1 1 0 1
        //
        // TODO : find the longest substring with only one zero and return its
        // window lenght

        unordered_set<int> st;

        int start = 0;
        int end = 0;
        int maximal = 0;

        for (end = 0; end < nums.size(); end++) {
            // logic

            int x = nums[end];
            if (x == 0) {
                if (st.find(x) != st.end()) {
                    if (nums[start] == 0) {
                        while (nums[start] == 0)
                            start++;
                    } else {
                        while (nums[start] == 1)
                            start++;
                    }

                    st.erase(x);
                }
            }

            maximal = max(end - start + 1, maximal);
            st.insert(nums[end]);
        }
        return maximal - 1;
    }
};
