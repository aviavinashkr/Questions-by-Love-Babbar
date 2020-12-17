#include<bits/stdc++.h>
using namespace std;

void revArray(int a[], int start, int end){
	while(start < end){
		int temp=a[start];
		a[start]= a[end];
		a[end]=temp;
		start++;
		end--;
	}
}

void print(int a[], int size){
	for(int i=0;i<size;i++)
	cout << a[i]<<" ";
	
	cout<<endl;
}
int main(){
	int a[]={1,3,5,7,9};
	int n= sizeof(a)/sizeof(a[0]);
	
	print(a,n);
	revArray(a,0,n-1);
	cout << "Reversed Arry is"<<endl;
	print(a, n);
	return 0;
}
