#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

class Solution {
public:
  bool check(vector<int> &nums) {

    for (int i = 0, k = 0; i < nums.size(); ++i) {
      if (nums[i] > nums[(i + 1) % nums.size()] && ++k > 1)
        return false;
    }
    return true;
  }
};

int main(void) {
  Solution sol;
  vector<int> v = {3, 3, 3};
  cout << sol.check(v);

  // for(auto x: v)
  // {
  // 	cout << x << " ";
  // }
}
