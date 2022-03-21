#include <iostream>
#include <vector>
using namespace std;


// Time Complexity - O(N) - where the n is the length of the array
// Space Complexity - O(1)
bool isValidSubSequence(vector<int> array, vector<int> sequence)
{
	int seqIdx = 0;
	for(auto v : array)
	{
		if(seqIdx==sequence.size())
		{
			break;
		}
		if(v == sequence[seqIdx])
		{
			seqIdx++;
		}
	}
	return seqIdx==sequence.size();
}