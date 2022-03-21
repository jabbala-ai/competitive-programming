#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

// Time Complexity - O(N)
// Space Complexity - O(n)

void spiralFill(vector<vector<int>> &array, int startRow, int endRow, int startCol, int endCol, vector<int> &result)
{
	if(startRow > endRow || startCol > endCol)
		return;
	for(int col = startCol; col <= endCol; col++)
	{
		result.push_back(array[startRow][col]);
	}


	for(int row = startRow + 1; row <= endRow; row++)
	{
		result.push_back(array[row][endCol]);
	}
	
	
	for(int col=endCol - 1; col >= startCol; col--)
	{
		if(startRow == endRow)
			break;
		result.push_back(array[endRow][col]);
	}
	
	
	for(int row = endRow-1; row > startRow; row--)
	{
		if(startCol == endCol)
			break;
		result.push_back(array[row][startCol]);
	}
	spiralFill(array, startRow+1, endRow-1, startCol+1, endCol-1, result);
}

vector<int> spiralTraverse(vector<vector<int>> array)
{
	if(array.size()==0)
	{
		return {};
	}
	vector<int> result = {};
	int startRow = 0;
	int endRow = array.size() - 1;
	int startCol = 0;
	int endCol = array[0].size() - 1;
	spiralFill(array, startRow, endRow, startCol, endCol, result);
	return result;
}
