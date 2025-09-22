//Leetcode problem 540: Single element in a sorted array
//Code 1: (brute force) TC=O(NlogN)
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        map<int,int> mpp;  //using unordered_map would be better as it will reduce log n and the tc will become O(N)
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }
        for(auto num: mpp){
            if(num.second==1) return num.first;
        }
        return 0;
    }
};
//Code 2: optimized
