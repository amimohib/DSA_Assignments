#include<iostream>
using namespace std;
int Search(int arr[], int size, int num){
	for(int i=0;i<size;i++){
		if(arr[i]==num){
			return i;
		}
	}
	return -1;
}
int main(){	
	int ar[]={7,4,2,8,5,1};
	int size=sizeof(ar)/sizeof(ar[0]);
	cout<<Search(ar,size,2);
	
	return 0;
}
