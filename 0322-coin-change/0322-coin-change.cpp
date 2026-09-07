class Solution {
public:
    vector<int>dp;
    int solve(int amount,vector<int>& coins){
        if(amount == 0){
            return 0;
        }

        if(dp[amount] != -1){
            return dp[amount];
        }

        int ans=INT_MAX;

        for(int coin : coins){
            if(amount-coin>=0){
                int result=solve(amount-coin,coins);

                if(result != INT_MAX){
                    ans=min(ans,1+result);
                }
            }

        }
        dp[amount]=ans;
        return ans;
    }
    int coinChange(vector<int>& coins, int amount) {
        
        dp.resize(amount+1,-1);
        int ans=solve(amount,coins);

        if(ans==INT_MAX){
            return -1;
        }

        return ans;
    }
};