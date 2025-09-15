//217: Contains duplicates
//Solution 1:
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> mpp;
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;
            if(mpp[nums[i]]>=2) return true;
        }
        return false;
    }
};
//Solution 2:
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i=1; i<nums.size();i++){
            if(nums[i-1]==nums[i]) return true;
            else continue;
        }
        return false;
    }
};
//Solution 3:
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> mp;
        for(auto a: nums){
            mp.insert(a);
        }
        if(mp.size()!=nums.size()) return true;
        else return false;
    }
};
