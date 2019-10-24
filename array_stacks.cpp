#include <iostream>

using namespace std;
int top=-1,stack[100];

void push(int k)
{
    if(top==99)
    {
        cout<<"Stack Overflow"<<endl;
    }
    else
    {
         top++;
         stack[top]=k;
    }
}
void display()
{
    int j;
    if(top==-1)
    {
        cout<<"Stack empty"<<endl;
    }
    else
    {
        j=top;
        cout<<"------- STACK ELEMENTS ---------"<<endl;
        while(j>=0)
        {
            cout<<stack[j]<<endl;
            j--;
        }
    }
}
void peek()
{
    if(top==-1)
    {
        cout<<"Stack is empty"<<endl;
    }
    else
    {
        cout<<"Element at the top of Stack = "<<stack[top]<<endl;
    }
}
void pop()
{
    int item;
    if(top==-1)
    {
        cout<<"Stack is empty"<<endl;
    }
    else
    {
        item = stack[top];
        top = top - 1;
        cout<<"Item Popped from the Stack is ="<<item<<endl;
    }
}

int main()
{
    int option=1, value;
    while(option != 5)
    {
    cout<<"\t\tPress 1 for push"<<endl;
    cout<<"\t\tPress 2 for pop"<<endl;
    cout<<"\t\tPress 3 for display"<<endl;
    cout<<"\t\tPress 4 for peek"<<endl;
    cout<<"\t\tPress 5 for Exit"<<endl;
    cin>>option;
    switch(option)
    {
        case 1:
            cout<<"Enter element"<<endl;
            cin>>value;
            push(value);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            peek();
            break;
        case 5 :
            break;
        default:
            cout<<"Enter correct input";
            break;
    }
    }
    return 0;
}
