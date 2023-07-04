class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // int leng = nums.size();
        int xoro = nums.size();

        for(int i=0; i<nums.size(); i++){
            xoro ^= nums[i] ^ i;
        }
        return xoro;
    }
};