#include <bits\stdc++.h>

using namespace std;

struct Pair {
	int min;
	int max;
};

struct Pair getMinMax(int a[], int n){
	struct Pair minmax;
	int i;
	
	if(n==1){
		minmax.max= a[0];
		minmax.min = a[0];
		return minmax;
	}

	if(a[0]>a[1]){
		minmax.max = a[0];
		minmax.min=a[1];

	}
	else{
		minmax.max=a[1];
		minmax.min=a[0];
	}
	for(i=2;i<n;i++){
		if(a[i]>minmax.max)
		minmax.min=a[i];
		else if (a[i]<minmax.min)
		minmax.min=a[i];
		
	}
	return minmax;
}

int main(){
	
	int A[]={1000,55,4445,844,2132,5655,777};
	int A_size = 7;

	struct Pair minmax = getMinMax(A,A_size);

	cout<<"Minimun Element is"<<minmax.min<<endl;
	cout<<"Maximum Element is"<<minmax.max<<endl;
	
	return 0;
}
