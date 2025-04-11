/*basically we don't know if array is sorted in ascending or descending order in the given array, and you are only given the target
element youa re supposed to search*/
//So For this I first thought of the test cases, if we compare mid element with the element before or after it then we can get an idea
//but it is also possible that it is a duplicate/same element, the whole row could have same elements or just one smaller element at the end, in aditya verma's vid he compared just two adjacent elements(will that be ok considering the duplicate elements)
//hence it would be best to check first and last element and code accordingly
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
        else if(arr[0]>arr[arr.size()-1]){
            if(arr[mid]>target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        else if(arr[0]<arr[arr.size()-1]){
            if(arr[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
    }
    return -1;
}
        
int main(){
    vector<int> arr={1,2,3,4,8,8,10};
    int target=8;
    cout<<bs(target,arr);
    return 0;
} 


//can be optimised by checking beforehand and adding the following code statement before loop:
bool isAscending = arr[start] < arr[end];
//inside loop we can then write:
if(isAscdending){
  if(arr[mid]>target){
    low=mid+1;
  }
  else{
    high=mid-1;
  }
}
else{
  if(arr[mid]>target){
    high=mid-1;
  }
  else{
    low=mid+1;
  }
}
