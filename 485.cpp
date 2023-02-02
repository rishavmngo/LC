#include <iostream>
#include <limits.h>
#include <vector>
#include <math.h>

using namespace std;

class Solution {
public:
  int findMaxConsecutiveOnes(vector<int> &nums) {
    int maxCount = 0;
    int count = 0;
    for (auto n : nums) {
			maxCount = max(maxCount , count = n == 0 ? 0 : count + 1);
		}
    return maxCount;
  }
};
int main(void) {
  Solution sol;
  vector<int> v = {1,0,0,1,1,1};

  cout << sol.findMaxConsecutiveOnes(v);
  // for (auto x : v) {
  //   cout << x << " ";
  // }
}
