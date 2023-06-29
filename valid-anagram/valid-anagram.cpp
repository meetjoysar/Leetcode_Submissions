#include <bits/stdc++.h>

class Solution {
public:
    bool isAnagram(string s, string t) {
        // int s_sum = 0, t_sum = 0;
        // for(int i=0; i<s.size(); i++){
        //     s_sum+=int(s[i]);
        // }
        // for(int i=0; i<t.size(); i++){
        //     t_sum+=int(t[i]);
        // }
        // if(s_sum == t_sum)
        //     return true;
        // return false;
        if(s.size()==t.size()){
            sort(s.begin(), s.end());
            sort(t.begin(), t.end());
            for(int i=0; i<s.size(); i++){
                if(s[i]!=t[i])
                    return false;
        }
        return true;
        }
        return false;
        
    }
};