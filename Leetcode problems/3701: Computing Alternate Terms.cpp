//code1
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

//code2
class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int even=0;
        int odd=0;
        for(int i=0; i<nums.size(); i++){
            if(i%2==0){
                even+=nums[i];
            }
            else{
                odd+=nums[i];
            }
        }
        return even-odd;
    }
};
