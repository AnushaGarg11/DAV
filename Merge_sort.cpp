#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr,int low,int mid,int high){
	vector<int>temp;
	int left=low;
	int right=mid+1;
	while(left<=mid && right<=high){
		if(arr[left]<arr[right]){
			temp.push_back(arr[left]);
			left++;
		}
		else{
			temp.push_back(arr[right]);
			right++;
		}
	}
	while(left<=mid){
		temp.push_back(arr[left]);
		left++;
	}
	while(right<=high){
		temp.push_back(arr[right]);
		right++;
	}
	for(int i=low;i<=high;i++){
		arr[i]=temp[i-low];
	}
}
void mergesort(vector<int> &arr,int low,int high){
	if(low==high){
		return;
	}
	int mid=(low+high)/2;
	mergesort(arr,low,mid);
	mergesort(arr,mid+1,high);
	merge(arr,low,mid,high);
}

int main(){
	int n;
	cout<<"Enter the size of input array: ";
	cin>>n;
	vector <int> A(n);
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	mergesort(A,0,n-1);
	cout<<"Sorted array is: ";
	for(int i=0;i<n;i++){
		cout<<A[i]<<" ";
	}
}
