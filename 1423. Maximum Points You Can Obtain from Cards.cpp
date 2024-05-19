class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n =cardPoints.size();
        int totalSum = accumulate(cardPoints.begin(),cardPoints.end(),0);
        int minSubarraySum = totalSum;
        int currentSum = 0;
        int windowSize = n - k;

        for(int i = 0;i<n;++i){
            currentSum+=cardPoints[i];

            if(i >= windowSize - 1){
                if(i>windowSize - 1){
                    currentSum -= cardPoints[i - windowSize];

                }
                minSubarraySum = min(minSubarraySum, currentSum);
            }
        }
        return totalSum - minSubarraySum;
    }
};