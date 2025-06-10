#include<bits/stdc++.h>
using namespace std;
#define Max 100
class Stack {
    int arr[Max];  
    int top; 
public:
    Stack(){
        top = -1;
    }
    void push(int x){
        if(top>= Max - 1){
            cout << "stack overflow" << endl;
            return;
        }
         arr[++top] = x;
    }
     void pop() {
        if (top < 0) {
            cout << "Stack Underflow\n";
            return;
        }
        top--;
    }
    int peek() {
        if (top < 0) {
            cout << "Stack is Empty\n";
            return -1;
        }
        return arr[top];
    }
     bool isEmpty()
    {
        return (top < 0);
    }
    void display() {
        if (top < 0) {
            cout << "Stack is Empty\n";
            return;
        }
        else{
            cout << "Stack elements are: ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
        }
        
    }


}; 
int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();   
    return 0;
}
