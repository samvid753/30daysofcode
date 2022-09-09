#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class StacksUsingArray{

int *data; 
int nextIndex;
int capacity;

public:

StacksUsingArray(){
    data = new int[4];
    nextIndex = 0;
    capacity = 4;
}

int size(){
    if(nextIndex<0){
        return INT_MIN;
    }else return nextIndex;
}

bool isEmpty(){

    return nextIndex==0;
}

void push(int element){

if(nextIndex==capacity){
 int *newData = new int[2*capacity];
for(int i=0; i<capacity; i++){
    newData[i] = data[i];
}
capacity *=2;
data = newData;

}
*(data + nextIndex) = element;
nextIndex++;

}

int pop(){

if(isEmpty()){
cout<<"Stack is Empty"<<endl;
return INT_MIN;
}
nextIndex--;
return data[nextIndex];

}

int top(){
    if(nextIndex==0){
        cout<<"Stack is Empty"<<endl;

        return INT_MIN;
    }
    return data[nextIndex-1];
}

};


int main(){

StacksUsingArray obj;

obj.push(10);
obj.push(20);
obj.push(30);
obj.push(40);
obj.push(50);

cout<<obj.pop()<<endl;
cout<<obj.pop()<<endl;
cout<<obj.pop()<<endl;
cout<<obj.pop()<<endl;
cout<<obj.pop()<<endl;

cout<<obj.size()<<endl;
cout<<obj.isEmpty()<<endl;

    return 0;
}
