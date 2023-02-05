#include <iostream>
#include <limits.h>
#include <vector>

using namespace std;

class Solution {
public:
  int maxProfit(vector<int> &nums) {
    int low = INT_MAX, profit =0, ptd = 0;

		for(int i = 0; i < nums.size(); i++) {
			if(nums[i] < low) {
				low = nums[i];
			}
			ptd = nums[i] - low;
			if(ptd > profit){
				profit = ptd;
			}
		}
		return profit;
  }
};
int main(void) {
  Solution sol;
  vector<int> v = {2,7,1,4};

  cout << sol.maxProfit(v);
  // for (auto x : v) {
  //   cout << x << " ";
  // }
}
