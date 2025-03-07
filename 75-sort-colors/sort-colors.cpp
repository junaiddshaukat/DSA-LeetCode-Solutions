class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();

        int i = 0; // donates for 0
        int j = 0;  // donates for 1
        int k = n-1; // donates for 2

        while(j <= k){
            if(nums[j]==1){
                j++;
            }else if(nums[j]==2){
                swap(nums[j],nums[k]);
                k--;
            }
            else{
                // nums[j]==0
                swap(nums[j],nums[i]);
                i++;
                j++;
            }
        }



    }
};