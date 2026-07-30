class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {

        for (int i = 0; i < nums.size(); i++){
            for (int y = i + 1; y < nums.size(); y++){
                int result = nums[i] + nums[y];

                if (result == target){
                    return {i,y};
                }
            }
        }

        return {};
    }
};