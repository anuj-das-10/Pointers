#include<iostream>
using namespace std;

int main() {
	 int arr[] = {10, 12, 14, 16, 18, 20};
	 int size_of_arr = sizeof(arr)/sizeof(arr[0]);
	 

	 int* pointer_to_arr = arr;

	 int iterator = 0;
	 while(iterator < size_of_arr) {
	 	
	 	cout << *pointer_to_arr << "\t";
	 	pointer_to_arr++;
	 	
	 	iterator++;
	 }


	return 0;
}