//Brute force(counting each element in the list) TC:O(N^2)
#include <iostream>
using namespace std;

int main(){
    int arr[7]={3,2,1,3,3,2,3};
    for(int i=0; i<7; i++){
        int c=0;
        for(int j=i; j<7; j++){
            if(arr[i]==arr[j]){
                c++;
            }
        }
        if(c>(7/2)){
            cout<<c<<endl;
            cout<<arr[i];
        }
    }
}
//Better
