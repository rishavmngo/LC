#include <iostream>
#include <limits.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
  int subarray(vector<int> &nums, int k) {
    vector<int> prefix(nums.size());
    prefix[0] = nums[0];

    for (int i = 1; i < nums.size(); i++) {
      prefix[i] = nums[i] + prefix[i - 1];
    }


    std::unordered_map<int, int> mp;

    int ans = 0;
    for (int i = 0; i < nums.size(); i++) {
      if (prefix[i] == k)
        ans++;

      if (mp.find(prefix[i] - k) != mp.end()) {
        ans += mp[prefix[i] - k];
      }

      mp[prefix[i]]++;
    }
    return ans;
  }
};
int main(void) {
  Solution sol;
  vector<int> v = {1, 2, 3, 4, 5};

  cout << sol.subarray(v, 9);
  // for (auto x : v) {
  //   cout << x << " ";
  // }
}
