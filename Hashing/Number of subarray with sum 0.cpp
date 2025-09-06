#include <iostream>
#include <map>
using namespace std;

int main(){
    int n;
    cin>>n;
    int c=0;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int p[n];
    p[0]=a[0];
    for(int i=1; i<n; i++){
        p[i]=p[i-1]+a[i];
    }
    map<int, int>mp;
    mp[0]++;
    for(int i=0; i<n; i++){
        if (mp.find(p[i])!=mp.end()){
            c++;
        }
        else{
            mp[i]++;
        }
    }
    cout<<"Number of subarray with sum 0:"<<c;

}



//Some subarray question
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool sum_subarray(int* arr, int k, int t){
    int sum=0;
    for(int i=0; i<k; i++){
        sum+=arr[i];
    }
    if(sum==t){
        return true;
    }
    int i=0; int j=k;
    while(j<6){
        sum=sum-arr[i]+arr[j];
        i++;
        j++;
        if(sum==t){
            return true;
        }
    }
}

int main(){
    int arr[7]={0,1,0,3,5,2,7};
    int k=3;
    int t=10;
    cout<<sum_subarray(arr,k,t);
    return 0;
}
//greedy problem code
#include <iostream>
#include <algorithm>
using namespace std;

int minCoins(int coins[], int n, int amount){
    sort(coins, coins+n);
    for(int i=0; i<n/2; i++){
        swap(coins[i], coins[n-1]);
    }
    int c=0;
    int i=0;
    while(amount>=coins[i]){
        amount=amount-coins[i];
        c++;
        if(i<=n-2){
            i++;
        }
    }
    return c;

}
int main(){
    int coins[5]={10,5,2,1,3};
    int n=5;
    int amount=15;
    cout<<minCoins(coins, n, amount);
    return 0;
}
//Again some lec day code:
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int p[n];
    p[0]=a[0];
    for(int i=1; i<n; i++){
        p[i]=p[i-1]+a[i];
    }
    for(int i=0;i<q;i++){
        int l,r;
        cin>>l>>r;
        r--;
        int sum=0;
        for(int j=l;j<=r;j++){
            sum+=a[j];
        }
    cout<<sum<<"\n";
    }
}
