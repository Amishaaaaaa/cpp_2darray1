#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int array[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>array[i][j];
        }
    }
    ;
    int temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(i!=j){
                temp=array[i][j];
                array[i][j]=array[j][i];
                array[j][i]=temp;
            }
        }
        
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            temp=array[i][j];
            array[i][j]=array[i][n-1];
            array[i][n-1]=temp;
            break;
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}