class Solution {
    public boolean containsDuplicate(int[] nums) 
    {
        HashSet<Integer> h_set = new HashSet<Integer>();
        for (int i = 0; i < nums.length; i++)
        {
            if (h_set.contains(nums[i]))
            {
                return true;
            }
            h_set.add(nums[i]);
        }
        return false;
    }
}