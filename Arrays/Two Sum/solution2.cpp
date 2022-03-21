#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

// Time Complexity - O(N) - Linear Time complexity
// Space Complexity - O(N) - Linear Time Complexity


vector<int> twoNumberSum(vector<int> array, int targetSum)
{
	unordered_set<int> nums;
	for(int item: array)
	{
		const int potentialValue = targetSum - item;
		if(nums.find(potentialValue) != nums.end())
		{
			return vector<int> {item, potentialValue};
		}
		nums.insert(item);
	}
	return{};
}