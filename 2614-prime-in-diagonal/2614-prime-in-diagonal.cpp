
class Solution {
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        int n = nums.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j || j == n - 1 - i) {
                    int x = nums[i][j];
                    bool prime = x >= 2;

                    for (int k = 2; k * k <= x; k++) {
                        if (x % k == 0) {
                            prime = false;
                            break;
                        }
                    }

                    if (prime) {
                        ans = max(ans, x);
                    }
                }
            }
        }

        return ans;
    }
};