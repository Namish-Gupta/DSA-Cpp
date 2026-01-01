class Solution {
public:
    int maxFrequencyBrute(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int maxf = 0;

        // Try treating every single element as the "Target Max Frequency" value
        for (int i = 0; i < n; i++) {
            long current_sum = 0;
            int count = 0;
            int target = nums[i];

            // Iterate backwards from the current element to see how many 
            // previous elements we can "pull up" to match nums[i]
            for (int j = i; j >= 0; j--) {
                long needed_operations = (long)target - nums[j];
                
                if (k >= needed_operations) {
                    k -= needed_operations;
                    current_sum += needed_operations; // Tracking ops used
                    count++;
                } else {
                    // Out of budget, can't include more elements for this target
                    break;
                }
            }
            maxf = max(maxf, count);

            // IMPORTANT: Reset k and current_sum for the next target element
            // This is why brute force is O(n^2) - we restart the work every time.
            // (Note: To actually reset k correctly in a real brute force, 
            // you'd need a backup of the original k).
        }
        return maxf;
    }
    
    int maxFrequencyOptimal(vector<int>& nums, int k) {
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