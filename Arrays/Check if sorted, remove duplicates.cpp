//Check if sorted
//1. one way:
#include <iostream>
using namespace std;

int main(){
    int arr[6]={3,9,7,7,10,9};
    bool is=true;
    for(int i=0; i<6; i++){
        if(arr[i-1] > arr[i]){
            cout<<"Array is not sorted";
            is=false;
            break;
        }
    }
    if(is==true) cout<<"Sorted";
}
//another way:
#include <iostream>
using namespace std;

int main(){
    int arr[5]={3,4,7,7,9};
    int c=0;
    for(int i=0; i<=4; i++){
        if(arr[i]>arr[i+1]){
            break;
        }
        c++;
    }
    cout<<c; //This way you will be able to tell, till which index the array is sorted
    if(c==4){ cout<<"Array is sorted";}
    else{ cout<<"Array is not sorted";}
}
//2. Check if sorted and rotated    Leetcode problem:1752




//3.Remove duplicates from sorted array   Leetcode problem:26
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
