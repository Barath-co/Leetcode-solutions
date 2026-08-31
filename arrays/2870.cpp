//2870. Minimum Number of Operations to Make Array Empty

class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>mp;
        int count=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto i:mp){
            int x=i.second;
            if(x==1){
               return -1;
            }
            if(x%3==0){
                count+=x/3;
            }
            else if(x%3==1){
                x-=4;
                count+=x/3;
                count+=2;
            }
            else{
                count+=x/3;
                count+=1;
            }
           
            }

            
        
        return count;
    }
};