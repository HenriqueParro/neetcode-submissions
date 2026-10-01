class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        long int maxOnes = 0;
        long int count = 0;
        for(int i = 0; i < nums.size(); i++){

            if(nums[i] == 1){
                count++;
                maxOnes = max(maxOnes, count);
            } else {
                count = 0;
            }
        }

        return maxOnes;
    }
    
};
