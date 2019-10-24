#include <iostream>
#include <malloc.h>

using namespace std;
struct node{
 struct node *prev;
 int info;
 struct node *next;
 }*PTR,*LIST,*START,*temp1,*temp2;

int main()
{
    int item,n=1,m;
    char ch;
    while(n!=5)
    {
        cout<<"Press 1 for Creation"<<endl;
        cout<<"Press 2 for Traversal"<<endl;
        cout<<"Press 3 for Inserting"<<endl;
        cout<<"Press 4 for Deletion"<<endl;
        cout<<"Press 5 for Exit"<<endl;
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
                        PTR -> prev = NULL;
                        PTR -> info = item;
                        PTR -> next = NULL;
                        if(START == NULL)
                            LIST = START = PTR;
                        else
                            {
                                LIST -> next = PTR;
                                PTR -> prev = LIST;
                                LIST = PTR;
                            }
                    }
                }
                else
                    break;
                }
                break;
            case 2:
                cout<<"Press 1 for forward traversal"<<endl;
                cout<<"Press 2 for backward traversal"<<endl;
                cin>>m;
                switch(m)
                {
                    case 1:
                        if(START == NULL)
                        {
                            cout<<"List is empty"<<endl;

                        }
                        else
                        {
                           cout<<"The list items are :"<<endl;
                           LIST = START;
                           while(LIST!= NULL)
                           {
                              cout<<LIST -> info<<endl;
                              LIST = LIST -> next;
                           }
                        }
                        break;
                    case 2:
                        if(START == NULL)
                            cout<<"List is empty"<<endl;
                        else
                        {
                            cout<<"The list items are :"<<endl;
                            PTR = LIST;
                            while(PTR!=NULL)
                            {
                                cout<<PTR -> info<<endl;
                                PTR = PTR -> prev;
                            }
                        }
                    break;


                }
                break;
            case 3:
                cout<<"Press 1 for insertion at the beginning"<<endl;
                cout<<"Press 2 for insertion at the last"<<endl;
                cout<<"Press 3 for insertion in the middle of the list"<<endl;
                cin>>m;
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
                        PTR -> prev = NULL;
                        PTR -> next = START;
                        START -> prev = PTR;
                        START = PTR;
                    }
                    break;
                case 2:
                    PTR = new struct node;
                    if(PTR == NULL)
                        cout<<"Insufficient Memory"<<endl;
                    else
                    {
                        cout<<"Enter item"<<endl;
                        cin>>item;
                        PTR -> info =item;
                        PTR -> next = NULL;
                        PTR -> prev = LIST;
                        LIST -> next = NULL;
                        LIST = PTR;

                    }
                    break;
                case 3:
                    PTR = new struct node;
                    if(PTR == NULL)
                        cout<<"Insufficient Memory"<<endl;
                    else
                    {
                        int item2;
                        cout<<"Enter item"<<endl;
                        cin>>item;
                        PTR -> info = item;
                        PTR -> prev = NULL;
                        PTR -> next = NULL;
                        cout<<"Enter item after which to insert"<<endl;
                        cin>>item2;
                        temp1 = START;
                        temp2 = temp1 -> next;
                        while(temp1 -> info != item2)
                        {
                            temp1 = temp1 -> next;
                            temp2 = temp2 -> next;
                        }
                        temp1 -> next = PTR;
                        PTR -> prev = temp1;
                        PTR -> next = temp2;
                        temp2 -> prev = PTR;
                    }
                    break;
                }
                break;
                case 4:
                cout<<"Press 1 for insertion at the beginning"<<endl;
                cout<<"Press 2 for insertion at the last"<<endl;
                cout<<"Press 3 for insertion in the middle of the list"<<endl;
                cin>>m;
                switch(m)
                {
                case 1:
                    if(START == NULL)
                        cout<<"Lust is empty"<<endl;
                    else
                        {
                            PTR = START;
                            START = START -> next;
                            START -> prev = NULL;
                            PTR -> next = NULL;
                            cout<<"The item deleted is: "<<PTR -> info<<endl;
                            free(PTR);
                        }
                    break;
                case 2:
                    if(START == NULL)
                        cout<<"List is empty"<<endl;
                    else
                    {
                        PTR = LIST;
                        LIST = LIST -> prev;
                        LIST -> next = NULL;
                        PTR -> prev = NULL;
                        cout<<"The item deleted is: "<<PTR -> info<<endl;
                        free(PTR);
                    }
                    break;
                case 3:
                    if(START == NULL)
                        cout<<"List is empty"<<endl;
                    else
                    {
                        int item2;
                        cout<<"Enter item to delete"<<endl;
                        cin>>item2;
                        PTR = START;
                        while(PTR -> info!= item2 && PTR != NULL)
                            PTR = PTR -> next;
                        temp1 = PTR -> prev;
                        temp2 = PTR -> next;
                        temp1 -> next = temp2;
                        temp2 -> prev = temp1;
                        PTR -> prev = NULL;
                        PTR -> next = NULL;
                        cout<<"The item deleted is: "<<PTR -> info<<endl;
                        free(PTR);

                    }
                    break;
                }
                 break;


        }
    }
    return 0;
}
