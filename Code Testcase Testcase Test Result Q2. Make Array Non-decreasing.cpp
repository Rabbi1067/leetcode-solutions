class Solution {
public:
    int maximumPossibleSize(vector<int>& nums) {
        vector<int> stk;

        for (int x : nums) {
            
            while (!stk.empty() && stk.back() > x) {
                int val = stk.back();
                stk.pop_back();
                x = max(x, val);
            }
            stk.push_back(x);
        }

        return stk.size();
    }
};
©leetcode
