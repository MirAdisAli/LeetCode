class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        //store size of vector
        //sort the vector
        
        int n = nums.size();
        
        sort(begin(nums), end(nums));
        
        for(int c=1; c<n; c++)
        {
            if(nums[c] == nums[c-1])
                return true;
        }
        return false;
        
    }
};
