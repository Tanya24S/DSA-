//2210-Count Hills and Valleys in an Array    Tc: O(N^2)
//Code 1:
class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int n=nums.size();
        bool a= false;    //Flag concept: can be used if I want to not enter another loop if first loop itself didn't workout acc to requirements
        int c=0;
        for(int i=1; i<n-1; i++){
            int j=i-1;
            int h=i+1;
            if(nums[i]!=nums[i-1]){
                while(j>=0){
                    if(j==0 && nums[j]==nums[i]){       //instead of this I can also write simply as if(j<0) (outside the loop ofc)
                        a=true;  //here it will flag it has true
                    }
                    if(nums[i]==nums[j]){
                        j--;
                    }
                    else{
                        break;  //Now here I wrote break bcz I was getting a tle, bcz apparently it was becoming an infinite loop
                    }
                }
                if(a) continue;  //and from here the for loop itself will continue and the code written from this point will not be executed anymore
                while(h<=n-1){
                    if(h==n-1 && nums[h]==nums[i]){
                        a=true;
                    }
                    if(nums[i]==nums[h]){
                        h++;
                    }
                    else{
                        break;
                    }
                }   
                if(a) continue;   //Similar here so that I don't start checking further conditions and continue with for loop if inner loop dosen't work out
                if(nums[j]>nums[i] && nums[h]> nums[i]) c++;
                if(nums[j]<nums[i] && nums[h]<nums[i]) c++;
            }
        }
        return c;
    }
};
//Understanding concept of infinite loop bcz even though I wrote a certain condn it was still becoming an infinite loop, why?
/*ok got it: so basically if my nums[i]!=nums[j] then my j is not getting j-- and then the loop will not go forward only it is stuck at that j value forever, for a loop
to work you need to increment or decrement right?! hence the infinite loop, hence break statement is imp*/
//More optimisation: Tc: O(N)
//How to think? Step 1: Am I repeating the same work multiple times? yes! For each n i am scanning for adjacent(left & right) equal/non-qual number
//Hence, can I remove adjacent equals and preprocess the array to reduce my work of loops? yes
//Code:
class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int n=nums.size();
        vector<int> arr;
        arr.push_back(nums[0]);
        for(int i=1; i<n; i++){
            if(nums[i]!=nums[i-1]){
                arr.push_back(nums[i]);
            }
        }
        int c=0;
        for(int i=1; i<arr.size()-1; i++){
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1]) c++;
            if(arr[i]<arr[i-1] && arr[i]<arr[i+1]) c++;
        }
        return c;
    }
};
