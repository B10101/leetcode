#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        if (n == 0) return 0;
        if (n == 1) return cost[0];

        vector<int> min_cost(n);
        min_cost[0] = cost[0];
        min_cost[1] = cost[1];

        for(int i = 2; i <n; i++){
            min_cost[i] = cost[i] + min(min_cost[i-1], min_cost[i-2]);

        }
        return min(min_cost[n-1], min_cost[n-2]);
    }
};

int main(){
    Solution mincost;
    vector <int> nums = {1,2,3,4,5,6,7,8};
    cout << mincost.minCostClimbingStairs(nums);
    return 0;
}