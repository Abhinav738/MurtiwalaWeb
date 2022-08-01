#include<bits/stdc++.h>
using namespace std;

void findleader(int arr[],int size){
     
    stack<int>sk;
    sk.push(arr[size - 1]);

    
    for(int i =size-1;i>0;i--){
        if(arr[i] > sk.top())
        {
            sk.push(arr[i])
        }
    }

    while(!sk.empty()){
        cout<<sk.top()<<" ";
        sk.pop();
    }

}

