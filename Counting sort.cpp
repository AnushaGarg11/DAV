#include <iostream>
#include <vector>
using namespace std;

vector<int> countingsort(vector<int> A,int k){
	vector<int> B(A.size());
	vector<int> C(k+1);
	for(int i=0;i<C.size();i++){
		C[i]=0;
	}
	for(int j=0;j<A.size();j++){
		C[A[j]]+=1;
	}
	for(int i=1;i<=k;i++){
		C[i]=C[i]+C[i-1];
	}
	for(int j=A.size()-1;j>=0;j--){
		B[C[A[j]]-1]=A[j];
		C[A[j]]=C[A[j]]-1;
	}
	return B;
}

int main(){
	int n;
	cout<<"Enter the size of input array: ";
	cin>>n;
	vector <int> A(n);
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	int max=A[0];
	for(int i=1;i<n;i++){
		if(A[i]>max){
			max=A[i];
		}
	}
	vector<int> B(n);
	B=countingsort(A,max);
	for(int i=0;i<n;i++){
		cout<<B[i]<<" ";
	}
}
