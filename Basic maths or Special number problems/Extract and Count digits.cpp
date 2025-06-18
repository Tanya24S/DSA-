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
//For extracting in non-reverse manner we can either reverse it and then extract or convert it to string and then print from firest index.
//Calculate number of digits in an integer
#include <iostream>
using namespace std;

int countdigits(int n){
    int temp=n;
    int c=0;
    while(temp>0){
        temp=temp/10;
        c++;
    }
    return c;
}

int main(){
    int n=7485961;
    cout<<countdigits(n);
}
//Another method to calculate the number of digits in an integer(use of log10(n))
#include <iostream>
using namespace std;

int main(){
    int n=7485961;
    int digit=log10(n)+1;
    cout<<digit;
}

  
