#include <vector>

class Solution
{
    public:

    int findDuplicate(std::vector<int>& nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[abs(nums[i])] < 0)
            {
                return abs(nums[i]);
            }
            else
            {
                nums[abs(nums[i])] *= -1;
            }
        }
        return -1;
    }
};