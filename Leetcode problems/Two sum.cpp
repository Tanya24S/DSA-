//Brute force approach:
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> index;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    index={i,j};
                    break;
                }
            }
        }
        return index;
    }
};
//Time taken:41ms   Time complexity: O(N^2)
//A slightly bettwe time reducer code with 41ms:
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    return i,j};
                    break;
                }
            }
        }
        return{};
    }
}; //here it's creating and return vector on the spot rather than intializing one before
