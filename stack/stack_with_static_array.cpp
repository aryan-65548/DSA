#include<bits/stdc++.h>
using namespace std;
#define Max 100
class Stack {
    int arr[Max];  
    int top; 
public:
    Stack()
    {
        top = -1;
    }
    void push(int x) //it will push the values into the stack
    {
        if(top>= Max - 1)
        {
            cout << "stack overflow" << endl; //stack overflow happens when the stack is full
            return;
        }
         arr[++top] = x;
    }
     void pop() //it will remove the the top of the stack value and will return it 
    {
        if (top < 0) 
        {
            cout << "Stack Underflow\n"; //stack underflow happens when the stack is empty
            return;
        }
        top--;
    }
    int peek() //it will return the top of the stack value but will not remove it 
    {
        if (top < 0) 
        {
            cout << "Stack is Empty\n";
            return -1;
        }
        return arr[top];
    }
     bool isEmpty()
    {
        return (top < 0);
    }
    void display()  // +it will display the stack
    {
        if (top < 0) 
        {
            cout << "Stack is Empty\n";
            return;
        }
        else
        {
            cout << "Stack elements are: ";
            for (int i = top; i >= 0; i--) 
            {
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
    s.pop();
    s.peek();
    s.display();   
    return 0;
}
