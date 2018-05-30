class Solution {
public:
    string toGoatLatin(string S) {
        if(S.empty()) return "";
        string result="";
        vector<string> dataset = splitSentence(S);
        for(int i=0; i<dataset.size();i++){
            string temp;
            if(isVowel(dataset[i][0])) result += dataset[i] + "ma";
            else{
              result += dataset[i] + "ma";
            }
            int t = i+1;
            while(t-- != 0){
              result += "a";  
            }
            result += " ";
        }
        return result; 
    }
    
vector<string> splitSentence(string str){
    vector<string> strWords;
    string currentWord;
    for(short i=0;i<str.length();i++){
       if(str[i] != ' ' ){
            currentWord += str[i];
        }
        else {
            strWords.push_back(currentWord);
            currentWord.clear();
        }
    }
    strWords.push_back(currentWord);
return strWords;
}
    
    
bool isVowel (char c){
    c = tolower(c);
return ( c=='a' || c=='e' || c=='i' || c=='o' || c=='u' );
}

    
    
    
};
