//Partner  - Sam Bennett
#include <iostream>

void percolateDown(int arr[], int size, int index) {
	int left = 2 * index + 1;
	int right = 2 * index + 2;
	int largest = index;
	if (left < size && arr[left] > arr[index])
		largest = left;
	if (right < size && arr[right] > arr[largest])
		largest = right;
	if (largest != index) {
		std::swap(arr[index], arr[largest]);
		percolateDown(arr, size, largest);
	}
}

int* extractMax(int arr[], int size) {
    if (size == 0)
        return nullptr;
    arr[0] = arr[size - 1];
    size--;
    percolateDown(arr, size, 0);
	return arr; 
}
