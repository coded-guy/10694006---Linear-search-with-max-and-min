#include <iostream>

using namespace std;

int linearSearch(int arr[], int key, int size){
	int index = -1;
	for(int i=0; i<size; i++){

		if (arr[i] == key){
			index = i;
		}
	}

	return index;
}

int minMax(int arr[], int size){
	int min = arr[0];
	int max = arr[0];

	for(int i=0; i <size; i++){
		if(arr[i]> max){
			max = arr[i];
		}

		if(arr[i]< min){
			min = arr[i];
		}
	}

	cout << "\nThe maximum is: " << max << endl;
    cout << "The minimum is: " << min << endl;
}
int main() {
    int size, key;
    // Taking Size of the Array
    cout << "Enter the size of the array: ";
    cin >> size;

	int array[size];
	// Taking Input in Array
	for (int j=0; j<size; j++){
        cout << "Enter " << j << " element: ";
        cin >> array[j];
	}

	minMax(array, size);

	cout << "\nLinear Search" << endl;

	// Taking Key to be searched
	cout << "Enter number to search in array: ";
	cin >> key;

	int searched = linearSearch(array, key, size);

	if(searched == -1){
		cout << key << " not found in array";
	}else {
		cout << key << " found at index " << searched;
	}
	return 0;
}
