//Implementation Of stack
#include <iostream>
#define Size 10
using namespace std ;
class Stack
{
    int data[Size];
    int top;
    public :

    Stack()
    {
        top=-1;
    }
    void push(int element)
    {
        if (isFull()==1)
        cout <<"Stack Is Full";
        else
        data[++top]= element;
    }
    int pop()
    {
        if(isEmpty()==-1)
        return -1;
        else
        return 0;
    }
    int isEmpty()
    {
        if(top==-1)
        return 1;
        else
        return 0;
     }
      int isFull()
      {
        if(top==Size-1)
        return 1;
        else
        return 0;
      }
    int peek()
    {
        if(isEmpty()==1)
        return -1;
        else 
        return data[top];
    }
};


int main()
{
    cout<<"Stack Implementation :";
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<"\nStack is empty"<<st.isEmpty();
    cout<<"\nStack is full"<<st.isFull();
    cout<<"\n Element is at Top positioned"<<st.peek();
    cout<<"\n Element is removed from stack "<<st.pop();
    cout<<"\n Element is removed from stack "<<st.pop();

}