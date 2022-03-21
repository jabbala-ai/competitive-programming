#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


// Time Complexity - O(N LOG N) - where the n is the length of the coins
// Space Complexity - O(1)
int nonConstructibleChange(vector<int> coins)
{
	sort(coins.begin(), coins.end());
	int currentChangeCreated = 0;
	for(int coin : coins)
	{
		if(coin > currentChangeCreated+1)
		{
			return currentChangeCreated + 1;
		}
		currentChangeCreated+=coin;
	}
	return currentChangeCreated + 1;	
}