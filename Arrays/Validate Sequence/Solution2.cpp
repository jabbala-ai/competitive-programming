#include <iostream>
#include <vector>
using namespace std;

// Time Complexity - O(N) - where the n is the length of the array
// Space Complexity - O(1)

bool isValidSubSequence(vector<int> array, vector<int> sequence)
{
	int arrIdx = 0;
	int seqIdx = 0;
	while(arrIdx < array.size() && seqIdx < sequence.size())
	{
		if(array[arrIdx] == sequence[seqIdx])
		{
			seqIdx++;
		}
		arrIdx++;
	}
	return seqIdx == sequence.size();
}