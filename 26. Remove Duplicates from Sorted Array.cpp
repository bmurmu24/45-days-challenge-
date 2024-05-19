class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;
        int writeIndex = 1;
        for(int i =1;i< nums.size();i++){
            if(nums[i]!= nums[writeIndex - 1]){
                nums[writeIndex++] = nums[i];
            }
        }
        return writeIndex;
    }
};