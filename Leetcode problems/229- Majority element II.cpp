//Leetcode problem 229: Majority element II
//Code 1:
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> answer;
        unordered_map<int, int> mpp;
        int n=nums.size()/3;
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }
        for(auto ch:mpp){
            if(ch.second>n){
                answer.push_back(ch.first);
            }
        }
        return answer;
    }
};
