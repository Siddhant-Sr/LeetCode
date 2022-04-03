class Solution {
public:
    void nextPermutation(vector<int>& nums) {
 int n = nums.size();
        vector<int> temp = nums;
        int finalIndex = -1;
        for(int i=0; i<n; ++i)
            for(int j=i+1; j<n; ++j)
                if(nums[i] < nums[j]){
                    temp = nums;
                    temp[i] += temp[j] - (temp[j] = temp[i]);
                    finalIndex = i;
                }
        sort(temp.begin() + finalIndex + 1, temp.end());
        nums = temp;
    }
};