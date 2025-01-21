//Solving patterns
/* 1) ****
      ****
      ****
      ****  */
#include <iostream>
using namespace std;

int main(){
    for (int i=0; i<=3; i++){
        cout<<"****"<<endl;
    }
}
/* 2) *
      **
      ***
      ****  */
#include <iostream>
using namespace std;

int main(){
    for (int i=0; i<=3; i++){
        for(int j=0; j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
/* 3) 1
      12
      123
      1234  */
#include <iostream>
using namespace std;

int main(){
    for (int i=1; i<=4; i++){
        for(int j=1; j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
/* 4) 1
      22
      333
      4444  */
#include <iostream>
using namespace std;

int main(){
    for (int i=1; i<=4; i++){
        for(int j=1; j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}
/* 5) ****
      ***
      **
      *  */
#include <iostream>
using namespace std;

int main(){
    for (int i=1; i<=4; i++){
        for(int j=4; j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}
/* 6) 1234
      123
      12
      1  */
#include <iostream>
using namespace std;

int main(){
    for (int i=4; i>=1; i--){
        for(int j=1; j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
/* 7)   *
       ***
      *****
     *******  */

/* 8) *******
       *****
        ***
         *  */

/* 9) *******
       *****
        ***
         *
         *
        ***
       *****
      ******* */

/* 10)  *
       ***
      *****
     ******* 
     *******
      *****
       ***
        *   */

/* 11)  *
        **
        ***
        ****
        ***
        **
        *    */

