#include <iostream>
using namespace std;
int main(){
int m;
cout<<"enter the row of matrix=";
cin>>m;
int n;
cout<<"enter the column of  matrix=";
cin>>n;
int ar[m][n];
//taking input
for(int i=0;i<m;i++){//i=rows
        for(int j=0;j<n;j++){//j=column
            cin>>ar[i][j];
        }
    }
    cout<<endl;
    //spiral
    int minr=0;
    int minc=0;
    int maxr=m-1;
    int maxc=n-1;
    while(minr<=maxr && minc<=maxc){
    //right row=const ,column=variable
    for(int j=minc;j<=maxc;j++){
        cout<<ar[minr][j]<<" ";
    }
     minr++;
     if(minr>maxr ||minc>minr) break;
    //down row=change column=consta 
    for(int i=minr;i<=maxr;i++){
        cout<<ar[i][maxc]<<" ";
    }
     maxc--;
    if(minr>maxr ||minc>minr) break;
    //left printing row=same column=change
    for(int j=maxc;j>=minc;j--){
        cout<<ar[maxr][j]<<" ";
        }
     maxr--;
    if(minr>maxr ||minc>minr) break;
    //up column=fix row=change;
    for(int i=maxr;i>=minr;i--){
        cout<<ar[i][minc]<<" ";
    }
        minc++;
}
}