#include <iostream>
using namespace std;

int inssort(int array,int n){
	int i,key,j;
	for(int i=1;i<n;i++){
		key=a[i];
		j=i-1;
		while(j>=0 && a[j]>key){
			a[j+1]=a[j];
			j=j-1;
		}
		
	}
}
int main(){
	int size;
	cout<<"Enter the number of elements you want to sort: ";
	cin>>size;
	int A[size];
	for(int i=0;i<size;i++){
		cin>>A[i];
	}
}
