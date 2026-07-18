class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int k=0;
       for(int num: nums){
        k = k^num;//duplicates gets cancel
       }
       return k;
    }
};