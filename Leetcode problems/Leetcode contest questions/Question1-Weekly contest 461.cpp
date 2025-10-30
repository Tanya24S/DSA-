//Trionic Array I
class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int i=0;
        int p; int q;
        int check;
        for(int j=1; j<nums.size(); j++){
            check=1;
            if(nums[i]<nums[j]){
                i++;
            }
            else if(i!=0 && nums[i]>nums[j]){
                p=i;
                break;
            }
            else{
                return false;
            }
        }
        i=p;
        for(int j=p+1; j<nums.size(); j++){
            check=2;
            if(nums[i]>nums[j]){
                i++;
            }
            else if(i!=p && nums[i]<nums[j]){
                q=i;
                break;
            }
            else{
                return false;
            }
        }
        i=q;
        for(int j=q+1; j<nums.size(); j++){
            check=3;
            if(nums[i]<nums[j]){
                i++;
            }
            else{
                return false;
            }
        }
        if(check!=3) return false;
        return true;
    }
};
