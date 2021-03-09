#include<bits\stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }


    int maxR =a[0];
    int jumps=1;
    int stepsP=a[0];

    for (int i = 1; i < n; i++){
        if(i==n-1) 
        return jumps;

        maxR =max(maxR,i+a[i]);

        stepsP--;

        if(stepsP==0){
            jumps++;
            if(i>=maxR) 
            return -1;
            stepsP=maxR-i;
        }
        
        cout<<jumps<<endl;
    }
    
    return 0;
}
