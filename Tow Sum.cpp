#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> resultV(2);
		int numSize = nums.size();
		for (int i = 0; i < numSize; i++)
		{
			for (int j = i + 1; j <= numSize - 1; j++)
			{
				if (nums[i] + nums[j] == target)
				{
					resultV[0] = i;
					resultV[1] = j;
					return resultV;
				}
			}
		}
		return resultV;
	}
};

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {

		unordered_map<int, int> resMap;
		vector<int> resultV;
		int numSize = nums.size();
		for (int i = 0; i != numSize; ++i)
		{
			int res = target - nums[i];
			if (resMap.find(res) != resMap.end())
			{
				resultV.push_back(i);
				resultV.push_back(resMap[res]);
				return resultV;
			}
			else
			{
				resMap[nums[i]] = i;
			}
		}
		return resultV;
	}
};
