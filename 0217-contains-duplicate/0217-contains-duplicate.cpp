class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> result;
        for (int num : nums) {
            if (result.find(num) != result.end()) {
                return true;  
            }
            result[num] = 1;  
        }
        return false;  
    }
};