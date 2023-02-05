#include <algorithm>
#include <iostream>
#include <limits.h>
#include <vector>

using namespace std;

class Solution {
public:
  int maxProfit(vector<int> &nums) {
    int Min = INT_MAX, profit = 0;

		for(auto x: nums) {
			Min = min(Min, x);
			profit = max(profit,x - Min);
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
