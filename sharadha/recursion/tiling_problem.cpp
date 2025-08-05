#include<iostream>
using namespace std;
class tilingProblem{
    public:
    int tiling(int n){
        if(n==1 || n==0){ // This is for 2*n  area filled with 2*1 tiles
            return 1;
        }
        return tiling(n-1)+tiling(n-2);
    }

    int countWays(int n) {
        // Base cases
        if (n < 0) return 0;
        if (n == 0) return 1;
    
        // dp[i] will store number of ways to tile a 1×i board
        int dp[n + 1];
        dp[0] = 1; // 1 way to tile board of size 0 (do nothing)
    
        // Fill rest of dp table
        for (int i = 1; i <= n; i++) {
            if (i < 4)
                dp[i] = dp[i - 1];  // only extend with no tile
            else
                dp[i] = dp[i - 1] + dp[i - 4]; // extend with 1 tile of 4×1
        }
    
        return dp[n];
    }
};
int main(int argc, char const *argv[])
{
    tilingProblem t;
    cout<<t.countWays(6);
    return 0;
}
