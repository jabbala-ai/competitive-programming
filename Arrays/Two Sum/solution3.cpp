#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Time Complexity - O(N*LOGN) - Linear Logrithmic Time complexity
// Space Complexity - O(1) - Constant Time Complexity


vector<int> twoNumberSum(vector<int> array, int targetSum)
{
	sort(array.begin(), array.end());
    print(array);
	int left = 0;
	int right = array.size() - 1;
	while(left < right) 
	{
		int currentSum = array[left] + array[right];
		if(currentSum == targetSum)
		{
			return {array[left], array[right]};
		}
		else if(currentSum < targetSum)
		{
			left++;
		}else if(currentSum > targetSum)
		{
			right--;
		}
	}
	return {};
}