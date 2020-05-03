#include <iostream>
/*
  Below Program is a solution of Technical Assesment test given by 
                     Envio System Inc. 
  
    Developed by Usman Asghar

  
  The program is to provide sorting algorithm for given integer array
  
  with linear time complexcity in order of O(n). 
*/


/* With all available Sorting algorithms, mostly are Comparison based but
   Radix sort and Counting sort are O(N). They are NOT comparison-based sorts, 
   which have been proven to have O(N log N) lower bound.

  To be more accurate, radix sort is O(kN), where k is the number of digits.
  Counting sort is O(N + k), where k is the range of the numbers to be sorted.

  In particular applications like this, where k is faily small that both Radix sort 
  and Counting sort exhibit linear-time performance.
  
*/


// Prototypes of used functions
int getMaximum(int arr[], int);
int getMinimum(int arr[], int);
void countingSort(int arr[], int, int);


int main(void) 
{
	
	int arr[30] = {2, 2, 1, 0, 1, 0, 1, 1, 0, 2, 2, 1, 1, 1, 2, 0, 0, 1, 1, 0, 1, 0, 1, 2, 0, 0, 0,1, 1, 2};
	
	int arrayLength = sizeof(arr) / sizeof(arr[0]);   // Array size is already given, just to make our program generic
	
	return 0;
} 

void countingSort(int arr[], int length, int range)
{
	
}

int getMaximum(int arr[], int length)
{
	int max = arr[0];
	int i;
	for (i = 1; i < length; i++)
		{
			if (arr[i] > max)
			max = arr[i];
		}
	return max;
}

int getMinimum(int arr[], int length)
{
	int min = arr[0];
	int i;
	for (i = 1; i < length; i++)
		{
		    if (arr[i] < min)
			    min = arr[i];
		}
	return min;
}
