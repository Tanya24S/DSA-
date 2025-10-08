//Code 1:  Tc:O(N)  SC:O(N)
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> mpp;
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }
        for(auto& i: mpp){
            if(i.second==1){
                return i.first;
            }
        }
        return -1;
    }
};
//Code 2:          Tc: O(log N) SC=O(1)
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if(nums.size()==1) return nums[0];
        if((nums[0]^nums[1])!=0){
            return nums[0];
        }
        if((nums[nums.size()-1]^nums[nums.size()-2])!=0){
            return nums[nums.size()-1];
        }
        for(int i=1; i<nums.size()-1; i++){
            if((nums[i]^nums[i+1])!=0 && (nums[i]^nums[i-1])!=0){
                return nums[i];
            }
        }
        return -1;
    }
};
//Code 3:      using xor operator
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int num=0;
        int n=nums.size();
        for(int i=0; i<n; i++){
            num=num^nums[i];
        }
        return num;
    }
};
