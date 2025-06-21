#include <iostream>
#include <cmath>
using namespace std;

bool perfectnumber(int a){
    int temp=a;
    int n=sqrt(temp);  //To find all divisors we traverse till square root of that number
    int res=1;
    for(int i=2; i<=n; i++){
        if(temp%i==0){
            res+=i;
            int d=temp/i;  //other divisors after the sqrt root value can be determined like this
            res+=d;
        }
    }
    cout<<res<<endl;
    if(res==temp) return true;
    else return false;
    
}

int main(){
    int a;
    cout<<"Enter the number:";
    cin>>a;
    cout<<perfectnumber(a);
    return 0;
}
