//Leetcode problem 78: Subsets
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> answer;
        int n=nums.size();
        answer.push_back({});
        vector<int> subset;
        for(int i=0; i<n; i++){
            int size=answer.size();
            for(int j=0; j<size; j++){
                subset=answer[j];
                subset.push_back(nums[i]);
                answer.push_back(subset);
            }
        }
        return answer;
    }
};
