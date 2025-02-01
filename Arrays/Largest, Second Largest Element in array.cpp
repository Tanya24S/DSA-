//Largest Element
//Brute force solution: Using quick sort      Time Complexity: O(NlogN)
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

//Optimal solution:By declaring a variable then comparing      Time Complexity: O(N)
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
//Brute Force solution: Using quick sort algorithm      Time Complexity: O(NlogN+N)
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
    for(int i=3; i>=0; i--){
        if(arr[4]!=arr[i] && arr[i]<arr[4]){
            cout<<arr[i];
            break;
        }
    }
}

//Better solution: Using the largest element      Time Complexity: O(N+N)=O(2N)
#include <iostream>
using namespace std;

int main(){
    int arr[5]={3,4,7,1,5};
    int largest= arr[0];
    for(int i=0; i<=4; i++){
        int number=arr[i];
        if(number>largest){
            largest=number;
        }
    }
    int second=arr[0];
    for(int i=0; i<=4; i++){
        if(arr[i]>=arr[0] && arr[i]!=largest){
            second=arr[i];
        }
    }
    cout<<second;
}

//Optimal Solution:Taking second largest as -1(considering no -ve numbers) otherwise INTMIN      Time Complexity: O(N)
#include <iostream>
using namespace std;

int main(){
    int arr[5]={3,4,7,1,5};
    int largest= arr[0];
    int second=-1;
    for(int i=0; i<=4; i++){
        int number=arr[i];
        if(number>largest){
            if(number!=largest){
                second=largest;
            }
            largest=number;
        }
        if(number!=largest && number>second){
            second=number;
        }
    }
    cout<<second;
}
