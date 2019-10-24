#include <iostream>

using namespace std;
int FRONT=-1,REAR=-1,n=1,i,item,Q[50];

int main()
{
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
            if ((FRONT == 0 && REAR == 49)||( FRONT == REAR + 1 ))
            {
                cout<<"Queue Overflow"<<endl;
                cout<<FRONT<<REAR;
            }
            else
            {
                if(FRONT==-1)
                    FRONT=0;
                if(REAR==49)
                    REAR=0;
                else
                    REAR = REAR + 1;
                cin>>item;
                Q[REAR]=item;
            }
            break;
        case 2:
            if(FRONT==-1)
                cout<<"Queue Underflow";
            else
                {
                    item = Q[FRONT];
                    cout<<"The deleted item is: "<<item<<endl;
                    if (FRONT == REAR)
                        FRONT = REAR = -1;
                    if (FRONT ==49)
                        FRONT=0;
                    else
                        FRONT = FRONT + 1;

                }
                break;
        case 3:
            if(FRONT == -1)
                cout<<"Queue is empty"<<endl;
            else
            {
                i=FRONT;
                while(i!=REAR)
                {
                    cout<<Q[i]<<endl;
                    if(i==49)
                        i=0;
                    else
                        i++;

                }
                cout<<Q[i]<<endl;
            }
            break;


        }

    }
    return 0;
}
