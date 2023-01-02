class Solution {
public:
    bool isuppercase(char ch){
        if(ch >= 65 and ch<= 90){
            return true;
        }
        return false;
    }
    bool islowercase(char ch){
        if(ch >= 97 and ch <= 122){
            return true;
        }
        return false;
    }
    bool detectCapitalUse(string word) {
        // if first character is small than all charcaters should be small
        // if first letter is capital 
         // then all should be capital
         // or all should be small
        if(islowercase(word[0])){
            for(int i = 1;i < word.size();i++){
                if(isuppercase(word[i])){
                    return false;
                }
            }
        }else{
            // now this is case when all the letter should be capital
            if(isuppercase(word[1])){
                for(int i = 2;i < word.size();i++){
                    if(islowercase(word[i])){
                        return false;
                    }
                }
                
            }else{
            // now all the letters should be small
                for(int i = 2;i < word.size();i++){
                    if(isuppercase(word[i])){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};