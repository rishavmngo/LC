#include <iostream>
#include <limits.h>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    vector<int> ans;
    unordered_map<int, int> mp;

    for (int i = 0; i < nums.size(); i++) {
      mp[target - nums[i]] = i;
    }

    for (int i = 0; i < nums.size(); i++) {
      if (mp.find(nums[i]) != mp.end() && mp[nums[i]] != i) {
        ans.push_back(i);
        ans.push_back(mp[nums[i]]);
        return ans;
      }
    }

    return ans;
  }
};

int main(void) {
  Solution sol;
  vector<int> v = {2, 7, 11, 15};

  vector<int> ans = sol.twoSum(v, 9);

  for (auto x : ans) {
    cout << x << " ";
  }
}
