//Insertion Sort
#include <iostream>
using namespace std;
void swap(int* a, int* b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
void display(int arr[], int n){
	cout << "The array after Insertion Sort:\n";
	for(int i=0; i<n; i++){
		cout << arr[i] << ",";
	}
	cout << endl;
}
void insertion_sort(int arr[], int n){
	int i, j, key;
	for(int i=1; i<n; i++){
		j=i-1;
		key=arr[i];
		while(j>=0 && arr[j]>key){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
}
int main(){
	int arr[]={74,87,254,16547,2245125};
	int n = sizeof(arr)/sizeof(arr[0]);
	insertion_sort(arr, n);
	display(arr, n);
	return 0;
}