#include<iostream>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int array[m][n];
    int flag=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>array[i][j];
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(array[i][j]==0){
                flag=1;
                for(int k=0;k<n;k++){
                    array[i][k]=0;
                    array[k][j]=0;
                }
                if(flag==1){
                    break;
                }
            }
            
        }
        if(flag==1){
            break;
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}