#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of row : ";
    cin>>n;

    int m;
    cout<<"Enter number of column : ";
    cin>>m;
    int k = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<k;
            k++;
        }
        cout<<endl;
    }
}