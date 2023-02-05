#include <algorithm>
#include <iostream>
#include <limits.h>
#include <vector>

using namespace std;

class Solution {
public:
  int maxSubArray(vector<int> &nums) {
		int curMax = 0, maxTill = INT_MIN;
		for(auto x: nums){

			curMax = max(x,curMax + x);
			maxTill = max(maxTill, curMax);
		}
		return maxTill;
	}
};
int main(void) {
  Solution sol;
  vector<int> v = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

  cout << sol.maxSubArray(v);
  // for (auto x : v) {
  //   cout << x << " ";
  // }
}
