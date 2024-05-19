class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int prefixSum = 0, n = nums.size(),ans = 0;
        unordered_map<int,int>u;
        u[0] = 1;

        for(int i = 0;i < n;i++){
            prefixSum +=nums[i];
            int rem = prefixSum % k;

            if(rem <0){
                rem += k;
            }
            ans += u[rem];
            u[rem]++;
        }
        return ans;
    
    }
};