#include <iostream>

#include <malloc.h>

using namespace std;
struct node
{
    int info;
    struct node *next;
} *top,*newptr,*ptr;
int main()
{
    int item,n=1;
    while (n!=5)
    {

    cout<<"Press 1 to push"<<endl;
    cout<<"Press 2 to pop"<<endl;
    cout<<"Press 3 to display"<<endl;
    cout<<"Press 4 to peek"<<endl;
    cout<<"Press 5 to stop"<<endl;
    cin>>n;
    switch(n)
    {
        case 1:
            newptr = new struct node;
            if(newptr == NULL)
            {
                cout<<"Insufficient memory"<<endl;
            }
            else
            {
                cout<<"Enter item"<<endl;
                cin >> item;
                newptr -> info = item;
                newptr -> next = NULL;
                if(top == NULL)
                {
                    top = newptr;
                }
                else
                {
                    newptr -> next = top;
                    top = newptr;
                }

            }
            break;
        case 2:
            if(top == NULL)
            {
                cout<<"Stack is empty"<<endl;
            }
            else
            {
                item = top -> info;
                cout<<"the popped item is: "<<item<<endl;
                ptr = top;
                top = top -> next;
                free(ptr);
            }
            break;
        case 3:
            if(top == NULL)
            {
                cout<<"Stack is empty"<<endl;
            }
            else
                {
                    cout<<"--------------The items are--------------"<<endl;
                    ptr = top;
                    while(ptr != NULL)
                    {
                        cout<<ptr -> info<<endl;
                        ptr = ptr -> next;
                    }
                }
                break;
        case 4:
            if(top == NULL)
            {
                cout<<"Stack is empty"<<endl;
            }
            else
                cout<< "The top element is: "<<top -> info<<endl;
            break;

    }}
    return 0;
}
