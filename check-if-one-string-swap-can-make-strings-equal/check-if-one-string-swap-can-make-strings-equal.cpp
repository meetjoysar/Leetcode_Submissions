class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1 == s2){
            return true;
        }
        vector<int> ind;
        for(int i=0; i<s1.size(); i++){
           if(s1[i] != s2[i]){
               ind.push_back(i);
           }
       }
        if(ind.size() == 2){
            if(s1[ind[0]] == s2[ind[1]] && s1[ind[1]] == s2[ind[0]]){
            return true;
            }
        return false;
        }
        
        
       return false;
    }
};