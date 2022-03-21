#include <iostream>

#include <vector>

using namespace std;

// Time Complexity - O(N^2) - Quadratic Time complexity
// Space Complexity - O(1) - Constant Time Complexity

vector<int> twoNumberSum(vector<int> array, int targetSum){
	for(int i = 0; i < array.size() - 1; i++)
	{
		int firstNum = array[i];	
		for(int j = i+1; j < array.size(); j++)
		{
			int secondNum = array[j];
			int potentialSum = firstNum + secondNum;
			if(potentialSum == targetSum)
			{
				return vector<int> {firstNum, secondNum};
			}
		}
	}
	return {};
}