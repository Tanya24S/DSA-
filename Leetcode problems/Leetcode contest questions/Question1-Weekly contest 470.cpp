//Compute alternating sum
class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        bool add=true;
        int output=0;
        for(int i=0; i<nums.size(); i++){
            if(add==true){
                output+=nums[i];
                add=false;
            }
            else{
                output-=nums[i];
                add=true;
            }
        }
        return output;
    }
};
