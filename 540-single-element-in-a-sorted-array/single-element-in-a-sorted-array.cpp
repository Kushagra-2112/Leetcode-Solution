class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
       unordered_map<int, int> freqMap;
        
        for (int i = 0; i < nums.size(); i++) {
            freqMap[nums[i]]++; 
        }
        
        for (auto it : freqMap) {
            if (it.second == 1) {
                return it.first; 
            }
        }
        
        return -1;
       
      
    }
};