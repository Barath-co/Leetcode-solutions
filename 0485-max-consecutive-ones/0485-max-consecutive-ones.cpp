class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int j=0;
        int count=0,maxx=0;
        for(j=0;j<nums.size();j++){
            if(nums[j]!=1){
                maxx=max(maxx,count);
                count=0;
            }
            else{
                count++;
            }
        }
        
        return max(maxx, count);
    }
};