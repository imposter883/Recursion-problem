#include<iostream>
using namespace std;

int sum(int n){
    if(n == 0){
        return 0;
    }

    int small = sum(n-1);
    int big = n + small;

    return big;
}

int main(){
    int n; 
    cout<<"Enter the value of n:"<<" ";
    cin>>n;

    cout<<sum(n)<<endl;

    return 0;
}