class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n=nums.size();
        int elementsum = 0;
        for (int i = 0; i < n; i++)
        {
            elementsum = elementsum + nums[i];
        }

        int digitsum = 0;
        for (int i = 0; i < n; i++)
        {

            while (nums[i] > 0)
            {
                int dig = nums[i] % 10;
                digitsum = digitsum + dig;
                nums[i] = nums[i] / 10;
            }
        }
        return abs(elementsum - digitsum);   
    }
};
