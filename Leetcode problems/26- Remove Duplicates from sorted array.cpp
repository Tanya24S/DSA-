//26- Remove duplicated from a sorted array
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0;
        int index=0;
        for(int i=0; i<nums.size(); i++){
            int j=i+1;
            if(j<nums.size() && nums[i]==nums[j]){
                continue;
            }
            else{
                k++;
                nums[index]=nums[i];
                index++;
            }
        }
        return k;
    }
};
//This is actually a optimzed code only but can be written in a better way
