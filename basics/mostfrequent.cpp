class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        long left = 0, right = 0, sum = 0;
        int maxf = 0;
        for(right = 0; right < nums.size(); right++)
        {
            sum += nums[right];
            while((right - left + 1) * nums[right] - sum > k)
            {
                sum -= nums[left];
                left++;
            }
            maxf = max(maxf, (int)(right - left + 1));
        }
        return maxf;
    }
};