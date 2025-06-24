class Solution {
public:
    int minPairSum(vector<int>& nums) {
        vector<pair<int, int>> pairs;
        vector<int> sum;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int left = 0;
        int right = n - 1;
        int result = 0;
        while (left < n) {
            pairs.push_back(make_pair(nums[left], nums[right]));
            left++;
            right--;
        }
        for (auto p : pairs) {
            int s = p.first + p.second;
            sum.push_back(s);
        }
        result = *max_element(sum.begin(), sum.end());
        return result;
    }
};