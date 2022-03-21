#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;



// Time Complexity - O(N)
// Space Complexity - O(1)
bool isMonotonic(vector<int> array)
{
	bool is_non_decreasing = true;
	bool is_non_increasing = true;
	for(int i= 1; i<array.size(); i++)
	{
		if(array[i] < array[i-1])
		{
			is_non_decreasing = false;
		}
		if(array[i] > array[i-1])
		{
			is_non_increasing = false;
		}
	}
	return is_non_decreasing || is_non_increasing;
}