// c++ Program  Check if a pair exists with given sum in given array
#include <bits/stdc++.h>

using namespace std;

// Function to find and print pair
bool chkPair(int A[], int size, int x)
{
	for (int i = 0; i < (size - 1); i++) {
		for (int j = (i + 1); j < size; j++) {
			if (A[i] + A[j] == x) {
				return 1;
			}
		}
	}

	return 0;
}

// Driver code
int main()
{
	int A[] = { 0, -1, 2, -3, 1 };
	int x = -2;
	int size = sizeof(A) / sizeof(A[0]);

	if (chkPair(A, size, x)) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << x << endl;
	}

	return 0;
}

// This code is contributed by Mayur Shrivastava
