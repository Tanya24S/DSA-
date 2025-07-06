//In a normal approach we'll traverse through array and increase the counter as we come accross the number but imagine->
//we have 10^5 elements, then to find occurrence of each element tc would be O(10^10) which is huge, for reference O(10^8) takes approx 1 sec which means it will take 100seconds, hence we use hashing
Hashing-> prestoring/fetching/precalculation
/*
//For pre-fetching we'll intialize another array as hash array, and while traversing through our og array we will update the index for 
each element in hash array itself, this way we can find occurence for each element in tc O(N) itself.
*/
//You need to intialize each element of the hash array with 0, will not be required if declared globally. (mean outside int main())
//If the constraint given in 10^9 elements then you can nnot declare an array of 10^9 it is not allowed, it will give segmentation error...
/*What is segmentation error? It's a runtime error, that hits when the compiler tries to access a memory lcoation that does not exist */
//You are only allowed to declare an array of size 10^6 inside int main() and 10^7 globally, (for boolean type too, 10^7 inside int main() otherwise 10^8)
  //We can write 10^7 as 1e7 though it is a double type and cannot be written isndie int hash[], because it only takes integer values insdie the brackets!!
//We are first going to do this using array itself then hit map and unordered_map...
  
//Problem: Count occurrence of each element of an array: (Ignore:I wish we could make comments colourful as well for certain words)
#include <iostream>
using namespace std;

int hash_arr[10];
int main(){
    int arr[9]={4,5,7,4,8,1,1,7,4};
    for(int i=0; i<9; i++){
        hash_arr[arr[i]]++;
    }
    for(int i=0; i<10; i++){
        cout<<hash_arr[i]<<endl;
    }
}
//character hashing (we'll be using ASCII values->'any char value' - 'a'(97))
//Problem: Count occurrence of each charcater in a string (This will be done using the ASCII value usage)
//1. When I only have lowercase characters (for lower case it starts with 97) (for uppercase it starts with 65)
#include <iostream>
#include <string>
using namespace std;

int main(){
    string s="abcsbcdef";
    int hash_arr[26]={0};
    for(int i=0; i<s.size(); i++){
        hash_arr[s[i]-'a']++;
    }
    for(int i=0; i<10; i++){
        cout<<hash_arr[i]<<endl;
    }
}
//2. When I have both lowercase as well as uppercase elements in the string (there are 256 ACII charcaters so we'll directly inpit in those indexes)
#include <iostream>
#include <string>
using namespace std;

int main(){
    string s="abcsbcdefABCABC";
    int hash_arr[256]={0};
    for(int i=0; i<s.size(); i++){
        hash_arr[s[i]]++;
    }
    cout<<hash_arr[65]<<endl;
    cout<<hash_arr[97];
}




