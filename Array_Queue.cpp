#include <iostream>

using namespace std;
int FRONT=-1,REAR=-1,Q[50],item,n=1,j;

int main()
{
    while(n!=5)
    {
    cout<<"Press 1 for Insertion"<<endl;
    cout<<"Press 2 for Display"<<endl;
    cout<<"Press 3 for Deletion"<<endl;
    cout<<"Press 4 for Peek"<<endl;
    cout<<"Press 5 for Exit"<<endl;
    cin>>n;
    switch(n)
    {
    case 1:
        if(REAR==49)
        {
            cout<<"Queue Overflow"<<endl;
        }
        else
        {
            cin>>item;
            if(FRONT==-1)
                FRONT=0;
            REAR= REAR + 1;
            Q[REAR]=item;
        }
        break;
    case 2:
        if(REAR==-1)
            cout<<"Queue is empty"<<endl;
        else
        {
            cout<<"---------------Queue Elements are---------- "<<endl;
            for(j=FRONT;j<=REAR;j++)
            {
                cout<<Q[j]<<endl;
            }
        }
        break;
    case 3:
        if(REAR==-1)
            cout<<"Deletion not possible"<<endl;
        else
        {
            item = Q[FRONT];
            if(FRONT==REAR)
                FRONT = REAR = -1;
            else
                FRONT = FRONT + 1;
        }
        break;
    case 4:
        if(REAR==-1)
            cout<<"Queue is Empty"<<endl;
        else
            cout<<"The peeked element is "<<Q[FRONT]<<endl;
        break;
    case 5:
        break;

    }

    }


    return 0;
}
