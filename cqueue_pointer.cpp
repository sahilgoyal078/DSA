#include <iostream>
#include<malloc.h>

using namespace std;
struct node
{
    int info;
    struct node *next;
}*NEWPTR,*FRONT,*REAR,*PTR;


int main()
{
    int item,n=1;
    while(n!=4)
    {
        cout<<"Press 1 for insertion"<<endl;
        cout<<"Press 2 for deletion"<<endl;
        cout<<"Press 3 for display"<<endl;
        cout<<"Press 4 for exit"<<endl;
        cin>>n;
        switch(n)
        {
        case 1:
            NEWPTR = new struct node;
            if(NEWPTR == NULL)
                cout<<"Insufficient memory";
            else
                {
                    cin>>item;
                    NEWPTR -> info = item;
                    NEWPTR -> next = NULL;
                    if(FRONT == NULL)
                        FRONT = REAR = NEWPTR;
                    NEWPTR -> next = FRONT;
                    REAR -> next = NEWPTR;
                    REAR = NEWPTR;
                }
                break;
        case 2:
            if(FRONT == NULL)
                cout<<"Queue Overflow"<<endl;
            else
                {
                    item = FRONT -> info;
                    cout<<"The deleted item is: "<<item<<endl;
                    if(FRONT == REAR)
                    {
                        FRONT = REAR = NULL;

                    }
                    PTR = FRONT;
                    FRONT = FRONT -> next;
                    REAR -> next = FRONT;
                    free(PTR);
                }
                break;
        case 3:
           if(FRONT == NULL)
            cout<<"Queue is empty"<<endl;
           else
           {
                cout<<"--------------The items are--------------"<<endl;
                    PTR = FRONT;
                    while(PTR != REAR)
                    {
                        cout<<PTR -> info<<endl;
                        PTR = PTR -> next;
                    }
                    cout<<REAR ->info<<endl;           }
           break;

        }
    }
    return 0;
}
