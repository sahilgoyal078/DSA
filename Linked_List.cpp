#include <iostream>
#include <malloc.h>

using namespace std;
struct node
{
    int info;
    struct node *next;
}*START,*LIST,*PTR,*TEMP;

int main()
{
    int item,n=1,m,loc=1;
    char ch;
    while(n!=6)
    {
        cout<<"Press 1 for Creation"<<endl;
        cout<<"Press 2 for Traversal"<<endl;
        cout<<"Press 3 for Searching"<<endl;
        cout<<"Press 4 for Inserting"<<endl;
        cout<<"Press 5 for Deletion"<<endl;
        cout<<"Press 6 for Exit"<<endl;
        cin>>n;
        switch(n)
        {
        case 1:
            while(1)
                {
                    cout<<"Press Y to add node"<<endl;
                    cin>>ch;

                if(ch=='Y' || ch == 'y')
                {


            PTR = new struct node;
            if(PTR == NULL)
                cout<<"Insufficient Memory"<<endl;
            else
                {
                    cout<<"Enter item"<<endl;
                    cin>>item;
                    PTR -> info = item;
                    PTR -> next = NULL;
                    if(START == NULL)
                        LIST = START = PTR;
                    else
                    {
                        LIST -> next = PTR;
                        LIST = PTR;
                    }
                }
                }
                else
                    break;
                }
            break;
        case 2:
            if(START == NULL)
                cout<<"List is empty"<<endl;
            else
            {
                cout<<"----------The list is as follows-------"<<endl;
                LIST = START;
                while(LIST!=NULL)
                {
                    cout<<LIST -> info<<endl;
                    LIST = LIST -> next;

                }
            }
            break;
        case 3:
            LIST = START;
            int item2;
            cout<<"Enter the item to be search"<<endl;
            cin>>item2;
            loc=1;
            while(LIST -> info != item2 && LIST != NULL)
            {
                LIST = LIST -> next;
                loc++;

            }
            if(LIST == NULL)
               {

                cout<<"Item not found in the list"<<endl;
                }
            else
            {
                cout<<"The location of item is: "<<loc<<endl;
            }
            break;
        case 4:
            cout<<"Press 1 for insertion at the beginning of list"<<endl;
            cout<<"Press 2 for insertion at the end of list"<<endl;
            cout<<"Press 3 for insertion at the middle of list"<<endl;
            cin >> m;
            switch(m)
            {
        case 1:
            PTR = new struct node;
            if(PTR == NULL)
                cout<<"Insufficient Memory"<<endl;
            else
                {
                    cout<<"Enter item"<<endl;
                    cin>>item;
                    PTR -> info = item;
                    PTR -> next = START;
                    START = PTR;
                }
            break;
        case 2:
            PTR = new struct node;
            if(PTR == NULL)
            {
                cout<<"Insufficient Memory"<<endl;
            }
            else
            {
                LIST=START;
                while(LIST -> next != NULL)
                {
                    LIST = LIST -> next;
                }
                cout<<"Enter item"<<endl;
                cin>>item;
                PTR -> info = item;
                PTR -> next = NULL;
                LIST -> next = PTR;
                LIST = PTR;


            }
            break;
        case 3:
            int item2;
            PTR = new struct node;
            if(PTR == NULL)
                cout<<"Insufficient Memory";
            else
            {
                cout<<"Enter item to insert"<<endl;
                cin>>item;
                PTR -> info = item;
                PTR -> next = NULL;
                cout<<"Enter element after which to insert"<<endl;
                cin>>item2;
                LIST = START;
                while(LIST -> info != item2)
                    LIST = LIST -> next;
                PTR -> next = LIST -> next;
                LIST -> next = PTR;


            }
            break;


            }
            break;
        case 5:

            cout<<"Press 1 for deletion at the beginning of list"<<endl;
            cout<<"Press 2 for deletion at the end of list"<<endl;
            cout<<"Press 3 for deletion at the middle of list"<<endl;
            cin >> m;
            switch(m)
            {
            case 1:
                if(START == NULL)
                    cout<<"List Underflow"<<endl;
                else
                    {
                        PTR = START;
                        START = START -> next;
                        cout<<"The deleted item is: "<<PTR -> info<<endl;
                        free(PTR);
                    }
                break;
            case 2:
                if(START == NULL)
                    cout<<"List Underflow"<<endl;
                else
                {
                    LIST = START;
                    TEMP = LIST -> next;
                    while(TEMP -> next != NULL)
                    {
                        TEMP = TEMP -> next;
                        LIST = LIST -> next;
                    }
                    LIST -> next = NULL;
                    cout<<"The deleted item is: "<<TEMP -> info<<endl;
                    free(TEMP);
                }
                break;
            case 3:
                if(START == NULL)
                    cout<<"List Underflow"<<endl;
                else
                {
                    cout<<"Enter item to delete"<<endl;
                    cin>>item2;
                    LIST = START;
                    TEMP = LIST -> next;
                    while(TEMP -> info != item2)
                    {
                        TEMP = TEMP -> next;
                        LIST = LIST -> next;
                    }
                    LIST -> next = TEMP -> next;
                    TEMP -> next = NULL;
                    free(TEMP);

                }
                break;

            }
        break;



        }
    }
    return 0;
}
