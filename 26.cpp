#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

class Solution {
public:
  int removeDuplicates(vector<int> &nums) {
    int prevNumber = INT_MIN;
    int ans = 0;

    for (int i = 0, ip = 0; i < nums.size(); ++i) {

      if (nums[i] != prevNumber) {
        prevNumber = nums[i];
        nums[ip++] = prevNumber;
        ans++;
      }
    }
    return ans;
  }
};

int main(void) {
  Solution sol;
  vector<int> v = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

  cout << sol.removeDuplicates(v) << endl;

  for (auto x : v) {
    cout << x << " ";
  }
}
