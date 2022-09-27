class Solution
{
public:
       vector<int> twoSum(vector<int> &nums, int target)
       {
              int n = nums.size();
              unordered_set<int> s;
              vector<int> v;
              for (int i = 0; i < n; i++)
              {
                     if (s.find(target - nums[i]) != s.end())
                     {
                            auto it = find(v.begin(), v.end(), target - nums[i]);

                            // If element was found
                            if (it != v.end())
                            {

                                   // calculating the index
                                   // of K
                                   int a = it - v.begin();
                                   return {a, i};
                            }
                            else
                            {
                                   s.insert(nums[i]);
                            }
                     }
                     return {-1, -1};
              }
       };