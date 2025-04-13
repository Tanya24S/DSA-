//First approach(binary search+ linear search)
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> bs(int target, vector<int> arr){
    vector<int> index;
    int low=0;
    int high=arr.size()-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target){
            int i=mid;
            while(i>=0 && arr[i]==target){
                index.push_back(i);
                i--;
            }
            i=mid+1;
            while(i<arr.size()-1 && arr[i]==target){
                index.push_back(i);
                i++;
            }
            break;
        }
        else if(arr[mid]>target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return index;
}
                
int main(){
    vector<int> arr={1,2,3,4,8,8,10};
    int target=8;
    vector<int> index=bs(target,arr);
    int i=index.size()-1;
    cout<<"["<<index[i]<<", "<<index[0]<<"]";
    return 0;
} 
//Second approach(more optimized approach)
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int bs(int target, vector<int> arr){
    vector<int> index;
    int low=0;
    int high=arr.size()-1;
    int res;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target){
            res=mid;
            high=mid-1;
        }
        else if(arr[mid]>target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return res;
}
        
        
int main(){
    vector<int> arr={1,2,3,4,8,8,10};
    int target=8;
    cout<<bs(target,arr);
    return 0;
} 
//Leetcode problem 34:
