#include<iostream>
using namespace std;
int BinarySearch(int arr[], int high, int key){
	int mid=high/2;
	int low=1;
	while(low!=high){
		if(arr[mid]==key){
			return mid;
		}
		else if(key<arr[mid]){
			high=mid-1;
			mid=(high+low)/2;
		}
		else if(key>arr[mid]){
			low=mid+1;

			mid=(low+high)/2;
		}
	}	
	return -1;
}
int main(){
	int ar[6]={1,2,3,4,5,6};	
	int high= sizeof(ar)/sizeof(ar[0]);
	cout<<BinarySearch(ar, high, 6);
	return 0;
}
