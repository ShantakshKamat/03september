class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            int count = 0;
            while (nums[i] > 0)
            {
                int dig = nums[i] % 10;
                count++;
                nums[i] = nums[i] / 10;
            }

            arr[i] = count;
        }

        int number = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                number++;
            }
        }
        return number;
    
    }
};
