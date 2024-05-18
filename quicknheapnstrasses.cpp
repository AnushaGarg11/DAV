/*
quick sort

// C++ Implementation of the Quick Sort Algorithm.
#include <iostream>
using namespace std;

int partition(int arr[], int start, int end)
{

	int pivot = arr[start];

	int count = 0;
	for (int i = start + 1; i <= end; i++) {
		if (arr[i] <= pivot)
			count++;
	}

	// Giving pivot element its correct position
	int pivotIndex = start + count;
	swap(arr[pivotIndex], arr[start]);

	// Sorting left and right parts of the pivot element
	int i = start, j = end;

	while (i < pivotIndex && j > pivotIndex) {

		while (arr[i] <= pivot) {
			i++;
		}

		while (arr[j] > pivot) {
			j--;
		}

		if (i < pivotIndex && j > pivotIndex) {
			swap(arr[i++], arr[j--]);
		}
	}

	return pivotIndex;
}

void quickSort(int arr[], int start, int end)
{

	// base case
	if (start >= end)
		return;

	// partitioning the array
	int p = partition(arr, start, end);

	// Sorting the left part
	quickSort(arr, start, p - 1);

	// Sorting the right part
	quickSort(arr, p + 1, end);
}

int main()
{

	int arr[] = { 9, 3, 4, 2, 1, 8 };
	int n = 6;

	quickSort(arr, 0, n - 1);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}


*/

/*
//Heap sort
// C++ program for implementation of Heap Sort
#include <iostream>
using namespace std;

// To heapify a subtree rooted with node i which is
// an index in arr[]. n is size of heap
void heapify(int arr[], int n, int i)
{
	int largest = i; // Initialize largest as root Since we are using 0 based indexing
	int l = 2 * i + 1; // left = 2*i + 1
	int r = 2 * i + 2; // right = 2*i + 2

	// If left child is larger than root
	if (l < n && arr[l] > arr[largest])
		largest = l;

	// If right child is larger than largest so far
	if (r < n && arr[r] > arr[largest])
		largest = r;

	// If largest is not root
	if (largest != i) {
		swap(arr[i], arr[largest]);

		// Recursively heapify the affected sub-tree
		heapify(arr, n, largest);
	}
}

// main function to do heap sort
void heapSort(int arr[], int n)
{
	// Build heap (rearrange array)
	for (int i = n / 2 - 1; i >= 0; i--)
		heapify(arr, n, i);

	// One by one extract an element from heap
	for (int i = n - 1; i >= 0; i--) {
		// Move current root to end
		swap(arr[0], arr[i]);

		// call max heapify on the reduced heap
		heapify(arr, i, 0);
	}
}

void printArray(int arr[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";
	cout << "\n";
}

// Driver program
int main()
{
	int arr[] = { 60 ,20 ,40 ,70, 30, 10};
	int n = sizeof(arr) / sizeof(arr[0]);
//heapify algorithm
// the loop must go reverse you will get after analyzing manually 
// (i=n/2 -1) because other nodes/ ele's are leaf nodes 
// (i=n/2 -1) for 0 based indexing
// (i=n/2) for 1 based indexing
	for(int i=n/2 -1;i>=0;i--){
	heapify(arr,n,i);
}

cout << "After heapifying array is \n";
	printArray(arr, n);


	heapSort(arr, n);

	cout << "Sorted array is \n";
	printArray(arr, n);
	
return 0;
}
*/

#include<iostream>
using namespace std;
int main() {
   int z[2][2];
   int i, j;
   int m1, m2, m3, m4 , m5, m6, m7;
      int x[2][2] = {
         {12, 34}, 
         {22, 10}
      };
   int y[2][2] = {
      {3, 4}, 
      {2, 1}
   };
   cout<<"The first matrix is: ";
   for(i = 0; i < 2; i++) {
      cout<<endl;
      for(j = 0; j < 2; j++)
         cout<<x[i][j]<<" ";
   }
   cout<<"\nThe second matrix is: ";
   for(i = 0;i < 2; i++){
      cout<<endl;
      for(j = 0;j < 2; j++)
         cout<<y[i][j]<<" ";
   }

   m1 = (x[0][0] + x[1][1]) * (y[0][0] + y[1][1]);
   m2 = (x[1][0] + x[1][1]) * y[0][0];
   m3 = x[0][0] * (y[0][1] - y[1][1]);
   m4 = x[1][1] * (y[1][0] - y[0][0]);
   m5 = (x[0][0] + x[0][1]) * y[1][1];
   m6 = (x[1][0] - x[0][0]) * (y[0][0]+y[0][1]);
   m7 = (x[0][1] - x[1][1]) * (y[1][0]+y[1][1]);

   z[0][0] = m1 + m4- m5 + m7;
   z[0][1] = m3 + m5;
   z[1][0] = m2 + m4;
   z[1][1] = m1 - m2 + m3 + m6;

   cout<<"\nProduct achieved using Strassen's algorithm: ";
   for(i = 0; i < 2 ; i++) {
      cout<<endl;
      for(j = 0; j < 2; j++)
         cout<<z[i][j]<<" ";
   }
   return 0;
}










