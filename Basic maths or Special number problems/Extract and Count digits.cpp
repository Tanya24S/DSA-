//Extract digits of an integer in reverse
#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n>0){
        int a=n%10;
        cout<<a;
        n=n/10;
    }
}
//Extract digits in non reverse:

//Calculate number of digits in an integer
#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin>>n;
    int c=0;
    while(n>0){
        int a=n%10;
        cout<<a<<endl;
        n=n/10;
        c++;
    }
    cout<<"Number of digits in the integer:"<<c;
}
//Another method to calculate the number of digits in an integer(use of log10(n))


  
