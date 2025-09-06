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
