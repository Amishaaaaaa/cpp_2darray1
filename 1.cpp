#include<iostream>
using namespace std;

int main(){
    int r,c,max=0;
    cin>>r>>c;
    int array[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>array[i][j];
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(array[i][j]>max){
                max=array[i][j];
            }
        }
    }
    cout<<max;
    return 0;
}