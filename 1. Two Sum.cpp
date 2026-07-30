class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> v;

        for (int i = 0; i < nums.size(); i++){
            for (int y = 0; y < nums.size(); y++){
                if (y == i){
                    continue;
                }

                int result = nums[i] + nums[y];

                if (result == target){
                    return {i,y};
                }
            }
        }

        return {};
    }
};