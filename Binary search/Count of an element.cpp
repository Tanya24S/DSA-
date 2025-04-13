//Count of an element using bs
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int bs(int target, vector<int> arr){
    vector<int> index;
    int low=0;
    int high=arr.size()-1;
    int c=0;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target){
            int i=mid;
            while(i>=0 && arr[i]==target){
                c++;
                i--;
            }
            i=mid+1;
            while(i<=arr.size()-1 && arr[i]==target){
                c++;
                i++;
            }
            break;
        }
        else if(arr[mid]>=target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
        
    return c;
}
        
        
int main(){
    vector<int> arr={1,2,3,4,8,8,10};
    int target=8;
    cout<<bs(target,arr);
    return 0;
} 
//Another approach would be using the first and last occurrence indexes and subtracting them to find the count of the traget element.
