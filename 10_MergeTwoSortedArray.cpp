#include<bits\stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    int i, c[n+m];
    int k;
    for(i=0;i<n;i++){
        cin>>a[i];
        c[i]=a[i];
    }
    k=i;
     for(i=0;i<m;i++){
        cin>>b[i];
        c[k]=b[i];
        k++;
    }
    // sort of c array.// selection sort.
    for(int i=0;i<((n+m)-1);i++){
        for(int j=i;j<(n+m);j++){
            if(c[j]<c[i]){
                int temp =c[j];
                c[j]=c[i];
                c[i]=temp;
            }
        }
    }

    // c array print
    for(i=0;i<(n+m);i++){
        cout<<c[i]<<" "; 
    }cout<<endl;
    return 0;
}