#pragma once
#include<vector>
#include<algorithm>
using namespace std;
class SingleNums {
public:
	vector<int> getSingleNums(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		vector<int> result(2, 0);
		int res[2]{}, k(0), len = nums.size();
		for (int i = 0, j = 1; k <2 && j <len;) {
			if (nums[i] == nums[j]) j++, i = j, j++;
			else res[k++] = i, i++, j++;
		}
		if (k <2) res[k++] = len - 1;
		result[0] = nums[res[0]], result[1] = nums[res[1]];
		return result;
	}
};