#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

class Solution {
public:
  int removeDuplicates(vector<int> &nums) {
    int count = 0;
    for (int i = 1; i < nums.size(); i++) {
      if (nums[i] == nums[i - 1])
        count++;
      else
        nums[i - count] = nums[i];
    }

    return nums.size() - count;
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
