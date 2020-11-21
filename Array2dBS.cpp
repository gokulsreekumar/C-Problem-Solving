// C++ program to find whether 
// a given element is present 
// in the given 2-D matrix 
#include <iostream>
#include <vector>

using namespace std; 

#define M 3 
#define N 4 

// Basic binary search to 
// find an element in a 1-D array 
bool binarySearch1D(int arr[], int K) 
{ 
	int low = 0; 
	int high = 4; 
	while (low <= high) { 
		int mid = low + (high - low) / 2; 

		// if element found return true 
		if (arr[mid] == K) 
			return true; 

		// if middle less than K then 
		// skip the left part of the 
		// array else skip the right part 
		if (arr[mid] < K) 
			low = mid + 1; 
		else
			high = mid - 1; 
	} 

	// if not found return false 
	return false; 
} 

// Function to search an element 
// in a matrix based on 
// Divide and conquer approach 
bool searchMatrix(int matrix[5][5], int K) 
{ 
	int low = 0; 
	int high = 4; 
	while (low <= high) { 
		int mid = low + (high - low) / 2; 

		// if the element lies in the range 
		// of this row then call 
		// 1-D binary search on this row 
		if (K >= matrix[mid][0] 
			&& K <= matrix[mid][5 - 1]) {
                cout<<  matrix[mid][0] <<", "<< matrix[mid][5-1]<<endl; 
                return binarySearch1D(matrix[mid], K); 
            }

		// if the element is less then the 
		// starting element of that row then 
		// search in upper rows else search 
		// in the lower rows 
		if (K < matrix[mid][0]) 
			high = mid - 1; 
		else
			low = mid + 1; 
	} 

	// if not found 
	return false; 
} 

// Driver code 
int main() 
{ 
	int matrix[5][5] = { {1,   4,  7, 11, 15},
  {2,   5,  8, 12, 19},
  {3,   6,  9, 16, 22},
  {10, 13, 14, 17, 24},
  {18, 21, 23, 26, 30}}; 
	int K = 5; 
	if (searchMatrix(matrix, K)) 
		cout << "Found" << endl; 
	else
		cout << "Not found" << endl; 
} 
