#include <iostream>

#include <malloc.h>

using namespace std;
struct node
{
    int info;
    struct node *next;
} *FRONT,*REAR,*newptr,*ptr;
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
                if(FRONT == NULL)
                {
                    FRONT = REAR = newptr;
                }
                else
                {
                    REAR -> next = newptr;
                    REAR = newptr;
                }

            }
            break;
        case 2:
            if(FRONT == NULL)
            {
                cout<<"Queue is empty"<<endl;
            }
            else
            {
                item = FRONT -> info;
                cout<<"the popped item is: "<<item<<endl;
                if(FRONT==REAR)
                    FRONT = REAR = NULL;
                else
                    {
                        ptr = FRONT;
                        FRONT = FRONT -> next;
                        free(ptr);
                    }

            }
            break;
        case 3:
            if(FRONT == NULL)
            {
                cout<<"Queue is empty"<<endl;
            }
            else
                {
                    cout<<"--------------The items are--------------"<<endl;
                    ptr = FRONT;
                    while(ptr != NULL)
                    {
                        cout<<ptr -> info<<endl;
                        ptr = ptr -> next;
                    }
                }
                break;
        case 4:
            if(FRONT == NULL)
            {
                cout<<"Queue is empty"<<endl;
            }
            else
                cout<< "The top element is: "<<FRONT -> info<<endl;
            break;

    }}
    return 0;
}
