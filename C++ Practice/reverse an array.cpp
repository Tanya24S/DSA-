//Reverse an array
//using two pointer technique:
#include <iostream>
using namespace std;

void reversearray(int arr[], int n){
    int low=0;
    int high=n-1;
    while(low<=high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}

int main(){
    int arr[7]={3,2,1,3,3,2,3};
    int n=7;
    reversearray(arr, n);
    for(int i=0; i<7; i++){
        cout<<arr[i];
    }
}
//using loop
#include <iostream>
using namespace std;

void reversearray(int arr[], int n){
    int a=n-1;
    for(int i=0; i<=(n/2); i++){
        swap(arr[i],arr[a-i]);
    }
}

int main(){
    int arr[7]={3,2,1,3,3,2,3};
    int n=7;
    reversearray(arr, n);
    for(int i=0; i<7; i++){
        cout<<arr[i];
    }
}
