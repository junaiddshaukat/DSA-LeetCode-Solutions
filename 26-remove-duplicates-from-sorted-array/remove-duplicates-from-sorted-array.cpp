class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = 1;
        while (j < n) {
            if (nums[i] != nums[j]) { //got a unique elements
                i++; //make space for the unique ele
                nums[i] = nums[j];
            }
            j++; //continue to find other unique elements
        }
        return i + 1;
    }
};