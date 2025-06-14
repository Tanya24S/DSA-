//1.Is rectangle?
int Solution::solve(int A, int B, int C, int D) {
    if(A==B&C==D||A==C&B==D||A==D&B==C){
        return 1;
    }else{
        return 0;
    }
}
//2. Sum of first n numbers(without formula)
#include <iostream>
using namespace std;
int main(){
    int n=5;
    int c=0;
    int a=0;
    for(int i=1; i<=n; i++){
        c++;
        a+=c;
    }
    cout<<a;
}//Instead of doing this I can just sum using i  as a+=i;
//Using formula return (n*(n+1))/2
//So I got to know that formula for first n natural numbers is called Gauss's formula

//3. Reverse an array
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



