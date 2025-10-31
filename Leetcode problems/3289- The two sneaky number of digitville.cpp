//Leetcode problem 3289: The two sneaky number of digitville
//Code 1: Without extra space tc: O(Nlognn)
class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> answer;
        sort(nums.begin(), nums.end());
        for(int i=0, j=i+1; j<nums.size(); i++, j++){
            if(nums[i]==nums[j]){
                answer.push_back(nums[j]);
            }
        }
        return answer;
    }
};
//Code 2: With extra space tc: O(N)
class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> answer;
        unordered_map<int,int> mpp;
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;
            if(mpp[nums[i]]==2){
                answer.push_back(nums[i]);
            }
        }
        return answer;
    }
};
