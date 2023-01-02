class Solution {
public:
    bool wordPattern(string pat, string s) {
        unordered_map<char,string> char_to_word;
        unordered_map<string,char> word_to_char;
        int i = 0;
        while(i < pat.size()){
            string word = "";
            // "dog cat cat dog"
            for(int j = 0;j < s.size();j++){
               if(s[j] == ' '){
                    if(char_to_word.find(pat[i])==char_to_word.end() && word_to_char.find(word) == word_to_char.end()){
                        word_to_char[word] = pat[i];
                        char_to_word[pat[i]] = word;
                        word = "";
                        i++; 
                    }else{
                        if(char_to_word.find(pat[i])!=char_to_word.end()){
                            if(word != char_to_word[pat[i]]){
                                return false;
                            } 
                        }
                        if(word_to_char.find(word)!= word_to_char.end()){
                            if(pat[i] != word_to_char[word]){
                                return false;
                            }
                        }
                        i++;
                        word = "";
                    }
                    
                }
                else{
                    word += s[j];
                }
                
            }
            
             if(char_to_word.find(pat[i])==char_to_word.end() && word_to_char.find(word) == word_to_char.end()){
                        word_to_char[word] = pat[i];
                        char_to_word[pat[i]] = word;
                        word = "";
                        i++; 
            }else{
                    if(char_to_word.find(pat[i])!=char_to_word.end()){
                        if(word != char_to_word[pat[i]]){
                            return false;
                        } 
                    }
                    if(word_to_char.find(word)!= word_to_char.end()){
                        if(pat[i] != word_to_char[word]){
                            return false;
                        }
                    }
                    i++;
                    word = "";
             }
        }
       
        return true;
    }
};