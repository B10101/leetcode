#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        if (n==1) return nums.at(0);

        vector<int> dp(n,0);
        dp[0] = nums[0];
        dp[1] = max(nums[1],nums[0]);

        for (int i = 2; i < n; i++)
        {
            dp[i] = max(dp[i-1], nums[i] + dp[i-2] );

        }
        return dp[n-1];
                
    }

};

int main(){
    Solution rob;
    vector <int> nums = {1,2,3,4,5,6,7,8};
    cout << rob.rob(nums) << endl;
}