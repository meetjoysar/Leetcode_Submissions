class Solution {
public:
    bool buddyStrings(string s, string goal) {
        string s1 = s; string s2 = goal;
        if(s1.size() != s2.size()){
            return false;
        }
        vector<vector<int>> ind;
        for(int i=0; i<s1.size(); i++){
           if(s1[i] != s2[i]){
               ind.push_back({s1[i], s2[i]});
           }
       }
        if(ind.size() == 2){
            return (ind[0][0] == ind[1][1] && ind[0][1] == ind[1][0]);
        }
        else if (ind.size() == 0)
        {
            vector<int> freq(26, 0);
            for (int i = 0; i < s.size(); i++)
            {
                freq[s[i] - 'a']++;
            }
            for (int i = 0; i < 26; i++)
            {
                if (freq[i] > 1)
                    return true;
            }
        }
        return false;
    }
};
