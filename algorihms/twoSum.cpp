#include <vector>
#include <map>
#include <iostream>

using namespace std;

class Solution {
	public :
		vector<int> twoSum(vector<int>& nums, int target) {
			vector<int> ret;
			map<int, int> contain;
			for(int i = 0; i < nums.size(); i++) {
				if(contain.find(nums[i]) == contain.end()) {
					contain[target - nums[i]] = i;
				} else {
					ret.push_back(contain[nums[i]] + 1);
					ret.push_back(i+1);
				}
			} // for loop
			return ret;
		}
};

