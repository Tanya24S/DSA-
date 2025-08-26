//Matrix or multi dimensional array very important for grid problems for representing grid
//How to intialize?
    string letters[2][4]={          //For a 3d array just initialize as letters[2][2][2]
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}
    };
//Also: you can just write(not recommended) int arr[2][2]={10,20,30,40} it will get automatically, first dimension can be omitted as well int arr[][2]
//How to loop through it?
int main(){
    string letters[2][4]={
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}
    };
    for(int i=0; i<2; i++){
        for(int j=0; j<4; j++){
            cout<<letters[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
//A small battleship game to visualize importance of multi-dimensional array in grid problems
//Objective: Boats placed at certain locations, the player get to choose random positions and see if they hit or miss, 
//they win if they hit all, and no. of turns is counted as well
#include <iostream>
#include <string>
using namespace std;

int main(){
    int battleships[4][4]={
        {1,0,0,1},
        {0,1,0,0}
    };
    int hit=0;
    int turns=0;
    while(hit<3){
        cout<<"Enter the grid numbers:";
        int x,y;
        cin>>x>>y;
        if(battleships[x][y]==1){
            hit++;
            cout<<"You hit"<<endl;
            battleships[x][y]=0;
            turns++;
        }
        else{
            turns++;
            cout<<"You missed"<<endl;
        }
    }
    cout<<"You won in:"<<turns;
}
//Passing 2d array to function
#include <iostream>
#include <string>
using namespace std;

void trying(int matrix[2][2]){
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<matrix[i][j];
        }
    }
}
int main(){
    int matrix[2][2]={
        {1,2},
        {3,4}
    };
    trying(matrix);
}
