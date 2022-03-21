#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;


// Time Complexity - O(N)
// Space Complexity - O(1)

vector<int> moveElementTOEnd(vector<int> &array, int toMove)
{
	int i = 0;
	int j = array.size() - 1;
	while(i < j)
	{
		while(i < j && array[j] == toMove)
		{
			j--;
		}
		if (array[i]==toMove)
		{
			swap(array[i], array[j]);
		}
		i++;
	}
	return array;
}