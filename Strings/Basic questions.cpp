//Find the length of the string
#include <iostream>
using namespace std;

int lengthofstring(char name[]){
    int count=0;
    for(int i=0; name[i]!='\0'; i++){
        count++;
    }
    return count;
}

//Reverse the string
//Method-1
#include <iostream>
using namespace std;

int lengthofstring(char name[]){
    int count=0;
    for(int i=0; name[i]!='\0'; i++){
        count++;
    }
    return count;
}


int main(){
    char name[10];
    cin>>name;
    int a =lengthofstring(name);
    cout<<a<<endl;
    for(int i=a-1;i>=0; i--){
        cout<<name[i];
    }
}


//Method-2
void reverse(char name[], int a){
    int s=0; 
    int e=a-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
    cout<<name;
}

int lengthofstring(char name[]){
    int count=0;
    for(int i=0; name[i]!='\0'; i++){
        count++;
    }
    return count;
}


int main(){
    char name[10];
    cin>>name;
    int a =lengthofstring(name);
    reverse(name, a);
}
//
