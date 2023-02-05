#include <iostream>
#include <limits.h>
#include <vector>

using namespace std;

class Solution {
public:
  vector<int> rearrangeArray(vector<int> &nums) {
    int l = 0, k = l + 1;
		vector<int> aux(nums.size());

    for (int i = 0; i < nums.size(); i++) {
			if(nums[i] > 0) {
				aux[l] = nums[i];
				l += 2;
			}
			else {
				aux[k] = nums[i];
				k += 2;
			}

    }
		return aux;
  }
};
int main(void) {
  Solution sol;
  vector<int> v = {3,1,-2,-5,2,-4};

  vector<int> so = sol.rearrangeArray(v);
  for (auto x : so) {
    cout << x << " ";
  }
}
