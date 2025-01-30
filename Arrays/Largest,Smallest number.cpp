//Largest Element
//Brute force solution: Using quick sort
#include <iostream>
#include <vector>
using namespace std;
int partitionIndex(vector<int> &arr, int low, int high)
{
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>pivot && j>=low+1){
            j--;
        }
        if(i<j) swap(arr[i], arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}
void qs(vector<int> &arr, int low, int high){
    if(low<high){
        int Pindex=partitionIndex(arr, low, high);
        qs(arr, low, Pindex-1);
        qs(arr, Pindex+1, high);
    }
}

vector<int> quickSort(vector<int> &arr)
{
    qs(arr, 0, arr.size()-1);
    return arr;
}
int main(){
    vector<int> arr={3,4,7,1,5};
    quickSort(arr);
    cout<< arr[4];
}

//Optimal solution:By declaring a variable then comparing
#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    int largest=arr[0];
    for(int i=0; i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}

//Second Largest Element
//Brute Force solution




//Better solution




//Optimal Solution
