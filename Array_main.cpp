#include <iostream>

using namespace std;

int main()
{

	// your code goes here
	int cnum,i,j,arr[10], snum, item,pos,str=0,stp=9,mid,temp;
	cout<<"Press 1 to show array"<<endl;
	cout<<"Press 2 to search the item"<<endl;
	cout<<"Press 3 to insert the item"<<endl;
	cout<<"Press 4 to delete the item"<<endl;
	cout<<"Press 5 to sort the array"<<endl;
	cin>>cnum;
	switch(cnum){
		case 1:
		    for(i=0;i<10;i++)
	{
		cout<<"input number"<<endl;
		cin>>arr[i];
	}
			for(i=0;i<10;i++)
			{
				cout<<arr[i]<<endl;
			}
			break;
		case 2:
		    for(i=0;i<10;i++)
	{
		cout<<"input number"<<endl;
		cin>>arr[i];
	}
			cout<<"Press 1 for linear search"<<endl;
			cout<<"Press 2 for binary search"<<endl;
			cin>>snum;
			switch(snum){
				case 1:
					int flag;
					flag=0;
					cout<<"input the item to search"<<endl;
					cin>>item;
					for(i=0;i<10;i++)
					{
						if (arr[i]==item)
						{
							cout<<"Item Found"<<endl;
							flag=1;
							cout<<"Position of item is: "<<i+1<<endl;
						}
					}
					if(flag==0)
					{
						cout<<"Item not in array"<<endl;
					}
					break;
				case 2:

					cout<<"input the item to search"<<endl;
					cin>>item;
					if(item < arr[0] || item > arr[9] )
					{
						cout<<"item not in array";

					}
					else
					{
						while( str <= stp)
						{
							mid = int((str + stp) / 2);
							if(item == arr[mid])
							{
								cout<<"Item found"<<endl;
								cout<<"Position is : "<<i+1<<endl;

							}
							if(item > arr[mid])
							{
								str=mid+1;
							}
							if(item < arr[mid])
							{
								stp=mid-1;
							}

						}
						if(str > stp)
						{
							cout<<"Item not found"<<endl;
						}
					}
					break;
				default:
					cout<<"Only two types of searching are available :P"<<endl;
			}
			break;
		case 3:
		    for(i=0;i<9;i++)
	{
		cout<<"input number"<<endl;
		cin>>arr[i];
	}
		    cout<<"Enter item"<<endl;

		    cin>>item;
		    cout<<"Enter position"<<endl;
		    cin>>pos;
		    if(pos>=10)
            {
                cout<<"Insertion not possible"<<endl;
            }
            else
            {
                i=8;
                while(i>=pos)
                {
                    arr[i+1]=arr[i];
                    i--;
                }
                arr[pos]=item;
            }
            for(i=0;i<10;i++)
            {
                cout<<arr[i]<<endl;
            }
            break;
        case 4:
            for(i=0;i<10;i++)
	{
		cout<<"input number"<<endl;
		cin>>arr[i];
	}
	cout<<"Enter item"<<endl;
            cin>>item;
            i=0;
            while(i<=9)
            {
                if(arr[i]==item)
                {
                    pos=i;
                    break;
                }
                i++;
            }
            if(i>9)
            {
                cout<<"Item not found"<<endl;
            }
            else
            {
               pos=i;
               while(i<=9)
               {
                   arr[i]=arr[i+1];
                   i++;
               }


            }
            for(i=0;i<8;i++)
            {
                cout<<arr[i]<<endl;
            }
            break;
        case 5:
            for(i=0;i<10;i++)
	{
		cout<<"input number"<<endl;
		cin>>arr[i];
	}
            cout<<"press 1 for Selection sort"<<endl;
            cout<<"press 2 for Bubble sort"<<endl;
            cout<<"press 3 for Insertion sort"<<endl;
            cout<<"press 4 for Merge sort"<<endl;
            cin>>snum;
            switch(snum)
            {
            case 1:
                for(i=0;i<9;i++)
                {
                    for(j=i+1;j<10;j++)
                    {
                        if(arr[i]>arr[j])
                        {
                            temp=arr[i];
                            arr[i]=arr[j];
                            arr[j]=temp;
                        }
                    }
                }
                for(i=0;i<10;i++)
            {
                cout<<arr[i]<<endl;
            }

                break;
            case 2:
                int s;
                s=1;
                while(s!=0)
                {
                    s=0;
                    for(i=0;i<9;i++)
                    {
                        if(arr[i]>arr[i+1])
                        {
                            temp=arr[i];
                            arr[i]=arr[i+1];
                            arr[i+1]=temp;
                            s++;
                        }

                    }
                }
                for(i=0;i<10;i++)
            {
                cout<<arr[i]<<endl;
            }
                break;
            case 3:
                i=1;
                while(i<10)
                {
                    temp=arr[i];
                    j=i-1;
                    while(temp<arr[j] && j>=0)
                    {
                        arr[j+1] = arr[j];
                        j--;
                    }
                    arr[j+1]=temp;
                    i++;
                }
                for(i=0;i<10;i++)
            {
                cout<<arr[i]<<endl;
            }
                break;
            /*case 4:
                i=0;j=0;k=0;
                int A[10],B[10],C[20];
                while(i<10 && j<7)
                {
                    if(A[i] > B[j])
                    {
                        C[k] = A[i];
                        i++;
                        k++;
                    }
                    else
                    {
                        C[k] = B[j];
                        j++;
                        k++;
                    }
                    while(i<10)
                    {
                        C[k] = A[i];
                        i++;
                        k++;

                    }
                    while
                }*/
            default:
                cout<<"Enter correct number"<<endl;

            }
		default:
			cout<<"Enter the correct input"<<endl;
	}


    return 0;
}
