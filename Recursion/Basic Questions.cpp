//Print name N-times
#include <iostream>
using namespace std;

int c=0;
void names(string s, int n){
    if(c==n) return;
    cout<<s<<endl;
    c++;
    names(s,n);
}
int main() {
    int n;
    cout<<"How many number of time do tou want to print:";
    cin>>n;
    string s;
    cout<<"Enter the name:";
    cin>>s;
    names(s,n);
}
