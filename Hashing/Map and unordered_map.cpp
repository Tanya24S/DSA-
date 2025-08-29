//c++in stl for map and unordered map/ collection for hashmap in java
int n=5; 
int s[5]={1,2,1,3,5};
int main(){
    map<int, int> mpp;
    for(int i=0; i<n; i++){
        mpp[s[i]]++;                                     //Note:Storing and fetching in a map takes TC: O(log n) (in best, worst, average case)
    }
    for(auto x: mpp){
        cout<<x.first<<"->"<<x.second;
    }
}
//for character hasing in map just initialize map as map<char,int>mpp;
//For unordered_map we intialize as same just unordered_map<int,int> mpp;
//unordered_map is not sorted while map is sorted
//Note: unordered_map takes TC: O(1) for storing and fetching in best and average case, mostly this will only be there but in the worst case 
//TC can go upto O(N), this happens due to collisions
//Also, while using unordered map if you compiler says TLE then you can shift back to maps
//Collision: HASHING-> 1)Division method, 2)Folding method, 3)Mid square method
//So how does division method works? basically if you have numbers like 2, 8, 38, 39,139 you don't create at arr[139] instead internally you have an array of [9]
//where modulo of the number with 10 is where it is stored EG: 2%10=2   (we store the number itsead we basically do linear channing using linked list
//2->2 then at 8 we have 8->8->38 etc
//Internally It dosen't use divison method directly but a combination because number range can be huge
//Now what is collision suppsoe you have an input with each ending with 8 as 18,28,28,48,158 etc, then each will go in 8 channing which will cause collision

//Note: in map<pair<int,int>,int> you can use pair as well any data type with key value pair but in unodered map you can't you have to use individual data types only
