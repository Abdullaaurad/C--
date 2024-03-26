#include<iostream>
#include<string.h>

using namespace std;

template <typename T,int max>
int ArrMin(T Array[],int n){
    int m=max;
    for(int i=0;i<n;i++){
        if(Array[i]<m){
            m=Array[i];
        }
    }
    return m;
}

int main(){
    int Array1[]={10,20,15,12,8,9,2};
    int n1=sizeof(Array1)/sizeof(Array1[0]);
    char Array2[]={12,2,3,10,4};
    int n2=sizeof(Array2)/sizeof(Array2[0]);

    cout << ArrMin<int,20>(Array1,n1) << endl;
    cout << ArrMin<char,7>(Array2,n1) << endl;
}