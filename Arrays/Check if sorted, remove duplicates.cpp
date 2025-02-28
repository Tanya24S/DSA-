//Check if sorted
//1. one way:
#include <iostream>
using namespace std;

int main(){
    int arr[5]={3,9,7,10,9};
    for(int i=1; i<5; i++){
        if(arr[i-1] > arr[i]){
        cout << "not sorted";
        return 0;
        }
    }
    cout<<"sorted";
}
//another way:
#include <iostream>
using namespace std;

int main(){
    int arr[5]={3,4,7,7,9};
    int c=0;
    for(int i=0; i<=3; i++){
        if(arr[i]>arr[i+1]){
            break;
        }
        c++;
        cout<<c;
    }
    cout<<c;
    if(c==4){ cout<<"Array is sorted";}
    else{ cout<<"Array is not sorted";}
}
//2. Check if sorted and rotated    Leetcode problem:1752




//3.Remove duplicates from sorted array   Leetcode problem:26

