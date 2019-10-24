#include <iostream>

using namespace std;
struct NODE
{
    struct NODE *left;
    int info;
    struct NODE *right;
}*BT,*ROOT,*PTR,*node;

struct NODE *create_tree(int item,struct NODE *node);
int n=1,item;
char ch;



void inorder(struct NODE *node)
{
	if (node != NULL)
    {
        inorder(node->left);
        cout<<node -> info<<endl;
        inorder(node->right);
    }


}
void preorder(struct NODE *node)
{
    if (node != NULL)
    {
        cout<<node -> info<<endl;
        preorder(node -> left);
        preorder(node -> right);
    }
}
void postorder(struct NODE *node)
{
    if (node != NULL)
    {
        postorder(node -> left);
        postorder(node -> right);
        cout<<node -> info<<endl;
    }
}
int maxDepth(struct NODE *node)
{
    if(node == NULL)
        return 0;
    else
    {
        int l_depth = maxDepth(node -> left);
        int r_depth = maxDepth(node -> right);
        if(l_depth > r_depth)
            return (l_depth+1);
        else
            return (r_depth+1);
    }
}
void addNode(struct NODE *node,int item)
{
    if(node -> info == item)
    {
        cout<<"Duplicate Entry"<<endl;
        //break;
    }
    if(node -> info > item)
    {
        if(node -> left != NULL)
            addNode(node -> left,item);
        else
        {
            PTR = new struct NODE;
            PTR -> info = item;
            PTR -> left = PTR -> right = NULL;
            node -> left = PTR;
            //return 1;
            int p_node =node -> info;
            cout<<"The parent of root the item is: "<<p_node<<endl;
        }
    }
    else if (node -> info < item)
    {
        if(node -> right != NULL)
            addNode(node -> right,item);
        else
        {
            PTR = new struct NODE;
            PTR -> info = item;
            PTR -> left = PTR -> right = NULL;
            node -> left = PTR;
            //return 1;
            int p_node =node -> info;
            cout<<"The parent of root the item is: "<<p_node<<endl;
        }
    }


}



int main()
{
     while(n!=6)
    {
    cout<<"Press 1 for creation"<<endl;
    cout<<"Press 2 for InOrder Traversal"<<endl;
    cout<<"Press 3 for PreOrder Traversal"<<endl;
    cout<<"Press 4 for PostOrder Traversal"<<endl;
    cout<<"Press 5 for height of tree"<<endl;
    cout<<"Press 6 for insertion"<<endl;
    cout<<"Press 7 for Exit"<<endl;
    cin>>n;

        switch(n)
        {
            case 1:
                PTR = new struct NODE;
                cout<<"Enter an element for root"<<endl;
                cin>>item;
                PTR -> left = NULL;
                PTR -> info = item;
                PTR -> right = NULL;
                ROOT = PTR;
                do
                {
                    //BT = create_tree(item,ROOT);
                    cout<<"Any more node to add?"<<endl;
                    cout<<"Press Y to add "<<endl;
                    cin>>ch;
                    if(ch == 'Y'||ch=='y')
                    {
                        cout<<"Enter element to add"<<endl;
                        cin>>item;
                        BT = create_tree(item,ROOT);
                    }
                    else
                        break;

                }while(1);
                //cout<<"The root node is: "<<ROOT->info<<endl;

                break;
            case 2:
                cout<<"---------The items are as follows------"<<endl;
                inorder(ROOT);
                break;
            case 3:
                cout<<"---------The items are as follows------"<<endl;
                preorder(ROOT);
                break;
            case 4:
                cout<<"---------The items are as follows------"<<endl;
                postorder(ROOT);
                break;
            case 5:
                cout<<"The height of tree is: "<< maxDepth(ROOT)<<endl;
                break;
            case 6:
                cout<<"Enter item to enter"<<endl;
                cin>>item;
                addNode(ROOT,item);
                break;



        }
    }


    return 0;
}
struct NODE *create_tree(int item,struct NODE *node)
{
    if (node == NULL)
    {
        node = new struct NODE;
        node -> left = NULL;
        node -> info = item;
        node -> right = NULL;

    }
    else

        if (node -> info >= item)
            node -> left = create_tree(item,node -> left);
        else
            {node -> right = create_tree(item,node -> right);}

    return(node);

}
