//Binary search is mostly applied on given sorted array
//Leetcode problem:704
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n= nums.size();
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                return mid;
            }else if(nums[mid]>target){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return -1;
    }
};
//Note: Instead of mid=(low+high)/2, we must write mid=low+(high-low)/2, this is done to avoid int overflow, otherwise in cases
//where low and mid summation exceeds the limit then we might get wrong mid(in most cases negative number).
