#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int sum = 0;
	int max = 0;
	
	while (n > 0)
	{
		if (n % 2 == 1)
		{
			sum = sum + 1; // Here we can use "sum++" instead of "sum = sum + 1";
			
			if (sum > max) max = sum;
			
		}
		
		else sum = 0;
		
		n = n / 2;
	}
	
	cout << max << endl;
	
	return 0;
}
