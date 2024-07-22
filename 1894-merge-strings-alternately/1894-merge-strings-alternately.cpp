
 class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string mergstr = "";
        if(word1.size() == word2.size())
          for(int i =0;i<word1.size();i++){
            mergstr += word1[i];
            mergstr += word2[i];
            }
        else if(word1.size() > word2.size()){
            for(int i =0;i<word2.size();i++){
            mergstr += word1[i];
            mergstr += word2[i];
            }
            for(int i =word2.size();i<word1.size();i++)
               mergstr += word1[i];                
            }
            
        else {
            for(int i =0;i<word1.size();i++){
            mergstr += word1[i];
            mergstr += word2[i];
            }
            for(int i =word1.size();i<word2.size();i++)
               mergstr += word2[i];                
            }
            return mergstr;
        
    }
};
