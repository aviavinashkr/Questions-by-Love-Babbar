#include<bits\stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int csum=a[0];
    int osum=a[0];

    //kadane Algo(Largest sum contigous subarray)
    for(int i=1;i<n;i++){
        if(csum>=0)
        csum+=a[i];
        else
        csum=a[i];
        if(csum>osum)
        osum=csum;
    }
    cout<<osum<<endl;
    return 0;
}