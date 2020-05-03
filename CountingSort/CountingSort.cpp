#include <iostream>
/*
  The below Program is a solution of Technical Assesment test given by 
                       Envio Systems. 
  
  Developed by Usman Asghar

  
  The program is to provide sorting algorithm for given integer array
  
  with linear time complexcity in order of O(n). 
*/


/* 

   All available Sorting algorithms, mostly are Comparison based but
   Radix sort and Counting sort are O(N). They are NOT comparison-based sorts, 
   which have been proven to have O(N log N) lower bound.

   To be more accurate, Counting sort is O(N + k), 
   
   where k is the range of the numbers to be sorted.

   In particular applications like this, where k is fairly small that both Radix sort 
   and Counting sort exhibit linear-time performance On.
   
   So I employeed Counting sort stable version
   
*/


// Prototypes of used functions
int getMaximum(int arr[], int);
int getMinimum(int arr[], int);
void countingSort(int arr[], int, int);


int main(void) 
{
	
	int arr[30] = {2, 2, 1, 0, 1, 0, 1, 1, 0, 2, 2, 1, 1, 1, 2, 0, 0, 1, 1, 0, 1, 0, 1, 2, 0, 0, 0,1, 1, 2};
	
	int arrayLength = sizeof(arr) / sizeof(arr[0]);   // Array size is already given, just to make our program generic
										
	int max = getMaximum(arr, arrayLength);
	int min = getMinimum(arr, arrayLength);
	
	int arrElementsRange = max-min+1;            	// range of array elements

	countingSort(arr, arrayLength, arrElementsRange);
    
    int i;
	printf("\n \t Sorted Output: \t");
	
	for (i = 0; i <arrayLength; i++)
		   printf("%d ", arr[i]);
	
	
	return 0;
} 

void countingSort(int arr[], int length, int range)
{
	int i;
	// Create an array of size length to store sorted array
	int outputArray[length];  // In C++, variable length arrays are not legal. 
	                          // G++ allows this as an "extension" (because C allows it), so in G++

	// create an integer array of size range
	int numberFreq[range] = {0};

    // using value of integer in the input array as index,
	// store count of each integer in numberFreq array
	for (i = 0; i < length; i++)
		 numberFreq[arr[i]]++;

	// calculating the starting index for every element
	int total = 0;
	int accumlate = 0;
	for (i = 0; i < range; i++)
	{
		accumlate = numberFreq[i];
		numberFreq[i] = total;
		total += accumlate;
	}

	// copy to output array, preserving order of inputs
	for (i = 0; i < length; i++)
	{
		outputArray[numberFreq[arr[i]]] = arr[i];
		numberFreq[arr[i]]++;
	}

	// copy the output array back to the original array
	for (i = 0; i < length; i++)
		arr[i] = outputArray[i];
	
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
