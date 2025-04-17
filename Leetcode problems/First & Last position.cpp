//Leetcode problem 34:
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> index;
        int res=-1;
        int tes=-1;
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                res=mid;
                high=mid-1;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        index.push_back(res);
        low=0;
        high=nums.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                tes=mid;
                low=mid+1;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        index.push_back(tes);
        return index;      
    }
};
