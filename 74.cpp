#include <iostream>
#include <limits.h>
#include <vector>

using namespace std;

class Solution {
public:
  bool searchMatrix(vector<vector<int>> &nums, int target) {
    int row = 0;
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i][0] <= target && nums[i][nums[i].size() - 1] >= target) {
        row = i;
        break;
      }
    }

    for (int j = 0; j < nums[row].size(); j++) {
      if (nums[row][j] == target) {
        return true;
      }
    }

    return false;
  }
};
int main(void) {
  Solution sol;
  vector<vector<int>> v = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};

  cout << sol.searchMatrix(v, 10);
  // for (auto x : v) {
  //   cout << x << " ";
  // }
}
