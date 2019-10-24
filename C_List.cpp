#include <iostream>
#include <malloc.h>

using namespace std;
struct node{
 int info;
 struct node *next;
 }*PTR,*LIST,*START,*A,*temp;

int main()
{
    int item,item2,n=1,loc=1;
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
                START = new struct node;
                cout<<"Enter item"<<endl;
                cin>>item;
                START -> info = item;
                START -> next = START;
                LIST = START;

                while(1)
                {
                    cout<<"Press Y to add more node"<<endl;
                    cin>>ch;


                if(ch == 'Y' || ch == 'y')
                {
                    PTR = new struct node;
                    if(PTR == NULL)
                        cout<<"Insufficient Memory"<<endl;
                    else
                    {
                      cout<<"Enter item"<<endl;
                      cin>>item2;
                      PTR -> info = item2;
                      PTR -> next = START;
                      LIST -> next = PTR;
                      LIST = PTR;

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
                    cout<<"---------The items in the list are---------"<<endl;
                    PTR = START;
                    while(PTR != LIST)
                    {
                        cout<< PTR-> info <<endl;
                        PTR = PTR-> next;
                    }
                    cout<<LIST->info<<endl;
                }
                break;
            case 3:

                cout<<"Enter item to search"<<endl;
                cin>>item2;
                PTR = START;
                do
                {
                    if(PTR -> info == item2)
                        break;
                    loc ++;
                    PTR = PTR -> next;
                }while(PTR != START);
                if(PTR == START )
                {

                cout<<"Item not found in the list"<<endl;
                }
                else
                {
                cout<<"The location of item is: "<<loc<<endl;
                }
                break;
            case 4:
                cout<<"Enter after which item to insert"<<endl;
                cin>>item;
                A = START;
                while(A -> info != item)
                {
                    A = A-> next;
                    if(A == START)
                        break;

                }
                if(A -> info != item)
                    cout<<"Enter the correct item"<<endl;
                else
                {
                    PTR = new struct node;
                    cout<<"Enter item value"<<endl;
                    cin>>item2;
                    PTR -> info = item2;
                    PTR -> next = A -> next;
                    A -> next = PTR;

                }
                break;
            case 5:
               if(START == NULL)
               {
                   cout<<"List is empty"<<endl;
               }
               else
               {
                cout<<"Enter item to delete"<<endl;
                cin>>item;
                temp = PTR = START;
                if(temp -> info == item)
                {
                    while(PTR -> next != START)
                        PTR = PTR -> next;
                    START = START -> next;
                    PTR -> next = START;
                    temp -> next = NULL;
                    cout<<"The deleted item is: "<<temp -> info<<endl;
                    free(temp);
                }
                else
                {
                    temp = temp -> next;
                    while(temp -> info != item && temp != START)
                    {
                        PTR = temp;
                        temp = temp -> next;
                    }
                    if(temp == START)
                        cout<<"Item not found in the list"<<endl;
                    else
                    {
                        PTR -> next = temp -> next;
                        temp -> next = NULL;
                        cout<<"The deleted item is: "<<temp -> info<<endl;
                        free(temp);
                    }
                }
               }
               break;












        }
    }

    return 0;
}
