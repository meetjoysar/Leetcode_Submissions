
class Solution {
public:
    bool isFascinating(int n) {
        string str1 = to_string(n)+ to_string(n*2) + to_string(n*3);
        sort(str1.begin(), str1.end());
        // int str2 = to_int(str1);
        // int str3 = 123456789;
        
        // if(str2 == str3)
        //     return true;
        // return false;
        return str1=="123456789";
    }
};