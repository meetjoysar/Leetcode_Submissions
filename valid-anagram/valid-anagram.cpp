#include <bits/stdc++.h>

class Solution {
public:
    bool isAnagram(string s, string t) {
        // if(s.size()==t.size()){
        //     sort(s.begin(), s.end());
        //     sort(t.begin(), t.end());
        //     for(int i=0; i<s.size(); i++){
        //         if(s[i]!=t[i])
        //             return false;
        // }
        // return true;
        // }
        // return false;
        if(s.size()!=t.size())
            return false;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if(s == t)
            return true;
        return false;
        
    }
};