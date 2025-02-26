//While loop
//Write a while loop that prints numbers from 1 to 10
#include <iostream>
using namespace std;

int main(){
    int N=1;
    while(N<11){
        cout<<N;
        N++;
    }
}
//Use a while loop to calculate the sum of all numbers from 1 to n (input from the user)
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0;
    while(n!=0){
        sum+=n;
        n--;
    }
    cout<<sum;
}
//Compute the factorial of a given number n using a while loop.
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int factorial=1;
    while(n>0){
        factorial*=n;
        n--;
    }
    cout<<factorial;
}
//Take an integer input and print its digits in reverse order using a while loop.

//Keep asking the user for input until they enter a negative number.
//enerate a random number between 1 and 100. Let the user guess it, giving hints (higher/lower) until they get it right.
//Check if a number is prime using a while loop.
