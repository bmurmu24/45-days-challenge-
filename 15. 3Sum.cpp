class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // Sort the array to enable efficient two-pointer technique
        sort(nums.begin(), nums.end());

        vector<vector<int>> triplets;

        // Iterate through the array, fixing one element (nums[i]) at a time
        for (int i = 0; i < nums.size() - 2; i++) {
            // Skip duplicates for the first element to avoid redundant triplets
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            // Two-pointer approach for remaining two elements
            int left = i + 1;
            int right = nums.size() - 1;
            while (left < right) {
                int currentSum = nums[i] + nums[left] + nums[right];
                if (currentSum == 0) {
                    triplets.push_back({nums[i], nums[left], nums[right]});
                    // Skip duplicates for the second element
                    while (left < right && nums[left] == nums[left + 1]) {
                        left++;
                    }
                    while (left < right && nums[right] == nums[right - 1]) {
                        right--;
                    }
                    left++;
                    right--;
                } else if (currentSum < 0) {
                    left++;
                } else {
                    right--;
                }
            }
        }

        return triplets;
    }
};