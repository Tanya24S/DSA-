//Leetcode: 1935
//Maximum number of words you can type
class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        text+=' ';
        string word="";
        int c=0;
        vector<string> words;
        for(char a: text){
            if(a!=' '){
                word+=a;
            }
            else{
                words.push_back(word);
                word="";
            }
        }
        for(int i=0; i<words.size(); i++){
            bool ifyes=true;
            for(char g: brokenLetters){
                for(char a: words[i]){
                    if(a==g){
                        ifyes=false;
                        break;
                    }
                }
            }
            if(ifyes) c++;
        }
        return c;
    }
}; //dude I solved this in 19 minutes,damn i am slow :(
//better solution using unordered_set
