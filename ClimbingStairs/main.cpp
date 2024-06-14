#include <iostream>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
       if (n == 1) return 1;
       if (n ==2 ) return 2;

       int a = 1, b = 2;
       for (int i = 3; i <= n ; i++)
       {
            int temp = a + b;
            a = b;
            b = temp;

       }
       return b;
       
        
    }
};

int main(){
    Solution climb;
    cout<< climb.climbStairs(4) << endl;
    return 0;

}