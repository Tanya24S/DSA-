//Firstly we'll try brainstorming ourselves and afterwards try the correct or more optimized methods.
//Left Rotate Array by 1 place
//1st code: This code is working but is not exactly right(arr[a] = arr[0]; can have udnefined behaviour, hence use pushback)
#include <iostream>
#include <vector>
using namespace std;

vector<int> rotated(vector<int> &arr){
    int a=arr.size();
    arr[a]=arr[0];
    for(int i=1; i<a;i++){
        arr[i-1]=arr[i];
    }
    arr[a-1]=arr[a];
    return arr;
}
int main(){
    vector<int> arr={1,2,3,4,5};
    rotated(arr);
    for(int i=0; i<arr.size();i++){
        cout<<arr[i];
    }
    return 0;
}
//2nd code: Using pushback
#include <iostream>
#include <vector>
using namespace std;

vector<int> rotated(vector<int> &arr){
    int a=arr.size();
    arr.push_back(arr[0]);
    for(int i=1; i<=a;i++){
        arr[i-1]=arr[i];
    }
    return arr;
}
int main(){
    vector<int> arr={1,2,3,4,5};
    rotated(arr);
    for(int i=0; i<arr.size()-1;i++){
        cout<<arr[i];
    }
    return 0;
}
//3rd code: Better and optimized code


//Right Rotate Array by 1 place

//Left Rotate Array by K place
//1st code:(here we are not exactly rotating the array, but rather playing with cout which gives us our answer)
#include <iostream>
#include <vector>
using namespace std;

vector<int> rotated(vector<int> &arr, int k){
    for(int i=0; i<k; i++){
        arr.push_back(arr[i]);
    }
    return arr;
}
int main(){
    vector<int> arr={1,2,3,4,5};
    int k;
    cin>>k;
    rotated(arr,k);
    for(int i=k; i<arr.size();i++){
        cout<<arr[i];
    }
    return 0;
}
//2nd code:

//Right Rotate Array by K place
