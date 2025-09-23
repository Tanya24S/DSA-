//Leetcode 3005: Count elementswith Maximum frequency
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        if(nums.empty()) return 0;
        unordered_map<int,int> mpp;
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }
        int maximum=0;
        for(auto num: mpp){
            maximum=max(maximum, num.second);
        }
        int total=0;
        for(auto num:mpp){
            if(num.second==maximum){
                total+=num.second;
            }
        }
        return total;
    }
};
