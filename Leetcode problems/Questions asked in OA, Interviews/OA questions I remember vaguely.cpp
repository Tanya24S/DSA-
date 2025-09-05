//Ques 1: The question was something like I was given an array of integers and i need to check if they are monotonic as i, i+1, i+2 either increasing or decreasing and return a
//array/vector with 0 and 1 if it was not or was respectively.
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;

vector<int> check_monotonic(vector<int> arr, vector<int> &result){
    if(arr.size()<3){
        return {0};
    }
    for(int i=0; i<arr.size()-2; i++){
        if(((arr[i]<arr[i+1]) && (arr[i+1]<arr[i+2])) || ((arr[i]>arr[i+1]) && (arr[i+1]>arr[i+2]))){
            result.push_back(1);
        }
        else result.push_back(0);
    }
    return result;
}
int main(){
    vector<int> arr={10, 11, 4, 5, 8};
    vector<int> result;
    check_monotonic(arr, result);
    for(int i=0; i<result.size(); i++){  //the compiler is giving me a warning though even if the code is running fine because of unsigned and int comparison.
        cout<<result[i]<<" ";
    }
    return 0;
}
//Ques2: I was given array with stick lengths bird trying to make nest and we are supposed to collect sticks until the length of nest reaches atleast 100 
//and return sticks chosen.

