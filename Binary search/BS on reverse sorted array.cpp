#include <iostream>
#include <string>
#include <vector>
using namespace std;

int bs(int target, vector<int> arr){
    int low=0;
    int high=arr.size()-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target) return mid;
        else if(arr[mid]<target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}
        
int main(){
    vector<int> arr={20,17,15,12,9,8,5};
    int target=8;
    cout<<bs(target,arr);
    return 0;
} 
