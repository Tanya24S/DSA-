//og code:
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal;
        vector<int> num1={1};
        vector<int> num2={1,1};
        if(numRows==1){
            pascal.push_back(num1);
        }
        if(numRows==2){
            pascal.push_back(num1);
            pascal.push_back(num2);
        }
        if(numRows>2){
            pascal.push_back(num1);
            pascal.push_back(num2);
            for(int i=3; i<=numRows; i++){
                vector<int> numNew={1};
                for(int i=0; i<num2.size()-1; i++){
                    int a=num2[i]+num2[i+1];
                    numNew.push_back(a);
                }
                numNew.push_back(1);
                num2=numNew;
                pascal.push_back(numNew);
            }
        }
        return pascal;
    }
};
//optimized code:
