/*
    Programmer: SARWAR ALAM SAJIB
    University Assignment
*/
#include <iostream>
#include<malloc.h>
#include<stdlib.h>

using namespace std;
struct node
	{
		int info;
		node *next;
	};

	node *first;
	node *P;
	node *last;
	int data, kode, x, y;//Variable declaration.
	char n;

//Function Declaration
    void createemptylist();
    void createthefirstList();
    void showList();

    void insertFirst();
    void insertLast();
    void insertAfter();

    void deleteFirst();
    void deleteAfter();
    void deleteLast();

    int minValue();
    int maxValue();
    void countOdd();
    void countEven();
    void reverse();
    void count();


int main()
{
cout<<"\t@-------------------------------------------@"<<endl;
cout<<"\t|           Group H Welcome You             |"<<endl;
cout<<"\t|       To This Data Structure Project      |"<<endl;
cout<<"\t@-------------------------------------------@"<<endl;
cout<<endl;

createemptylist();
createthefirstList();
cout <<"\nInsert Another Node Data to Create List."<<endl;
insertLast ();

do{
cout<<"\nList: ";
showList();
cout<<endl<<endl;
cout<<"\t@-------------------------------------------@"<<endl;
cout<<"\t|               -Main Menu-                 |"<<endl;
cout<<"\t@-------------------------------------------@"<<endl;
cout<<"\t|            1. Insert Node                 |"<<endl;
cout<<"\t|            2. Delete Node                 |"<<endl;
cout<<"\t|            3. Find Node                   |"<<endl;
cout<<"\t|            4. Count Nodes                 |"<<endl;
cout<<"\t|            5. Reverse Node                |"<<endl;
cout<<"\t@-------------------------------------------@"<<endl;
cout<<endl;
	cout<<"Choose Your Option (1/2/3/4/5): ";cin>>kode;
	cout<<endl;
	switch (kode)
	{
		case 1:{
					int kode;
					cout<<"\t@-------------------------------------------@"<<endl;
					cout<<"\t|           NO  :   INSERTION               |"<<endl;
					cout<<"\t@-------------------------------------------@"<<endl;
					cout<<"\t|         1  :  Insert First                |"<<endl;
					cout<<"\t|         2  :  Insert After                |"<<endl;
					cout<<"\t|         3  :  Insert Last                 |"<<endl;
					cout<<"\t@-------------------------------------------@"<<endl;
					cout<<endl;
					cout<<"Choose your option (1/2/3) = ";cin>>kode;
					cout<<endl;
					system("cls");
					switch (kode)
					{
						case 1:{
                                    cout<<"Current List: ";
									showList ();
									cout<<endl;
									insertFirst();
                                    cout<<"\nNew List: ";
									showList ();
									break;
								 }
						case 2:{
                                    cout<<"Current List: ";
									showList ();
									cout<<endl;
									insertAfter();
                                    cout<<"\nNew List: ";
									showList();
									break;
								 }
						case 3:{
                                    cout<<"Current List: ";
									showList();
									cout<<endl;
									insertLast();
                                    cout<<"\nNew List: ";
									showList ();
									break;
								 }

                        default:{
                            cout<<"Invalid Selection.Try Again....";
                            break;
                        }

					}break;
				 }
		case 2:{
					int kode;
					cout<<"\t@-------------------------------------------@"<<endl;
					cout<<"\t|          NO  :  DELETION                  |"<<endl;
					cout<<"\t@-------------------------------------------@"<<endl;
					cout<<"\t|         1  :  Delete First                |"<<endl;
					cout<<"\t|         2  :  Delete After                |"<<endl;
					cout<<"\t|         3  :  Delete Last                 |"<<endl;
                    cout<<"\t@-------------------------------------------@"<<endl;
					cout<<endl;
					cout<<"Choose what you want (1/2/3) = ";cin>>kode;
					cout<<endl;
					system("cls");
					switch (kode)
					{
						case 1:{
                                    cout<<"Current List: ";
									showList();
									cout<<endl;
									cout<<"Delete first "<<endl;
									deleteFirst();
                                    cout<<"\nNew List: ";
									showList();
									break;
								 }
						case 2:{
                                    cout<<"Current List: ";
									showList();
									cout<<endl;
									cout<<"Delete after "<<endl;
									deleteAfter();
                                    cout<<"\nNew List: ";
									showList ();
									break;
								 }
						case 3:{    cout<<"Current List: ";
									showList ();
									cout<<endl;
									cout<<"Delete Last "<<endl;
									deleteLast();
                                    cout<<"\nNew List: ";
									showList ();
									break;
								 }

                        default:{
                            cout<<"Invalid Selection.Try Again....";
                            break;}
					}
                 break;
				 }

        case 3:{
                    int kode;
					cout<<"\t@-------------------------------------------@"<<endl;
					cout<<"\t|          NO  :  FINDING NODES             |"<<endl;
					cout<<"\t@-------------------------------------------@"<<endl;
					cout<<"\t|          1  :  Find Largest Node          |"<<endl;
					cout<<"\t|          2  :  Find Smallest Node         |"<<endl;
                    cout<<"\t@-------------------------------------------@"<<endl;
					cout<<endl;
					cout<<"Choose what you want (1/2) = ";cin>>kode;
					cout<<endl;
					system("cls");
					switch (kode){
                        case 1:{
                            cout<<"Current List: ";
                            showList ();
                            cout <<endl;
                            cout<<"\nThe Largest Node is ";
                            cout<<maxValue();
                            break;
                        }
                        case 2:{
                            cout<<"Current List: ";
                            showList ();
                            cout <<endl;
                            cout<<"\nThe Smallest Node is ";
                            cout<<minValue();
                            break;
                        }
                        default:{
                            cout<<"Invalid Selection.Try Again....";
                            break;
                        }
					}
            break;
        }


         case 4:{
                    int kode;
					cout<<"\t@-------------------------------------------@"<<endl;
					cout<<"\t|          NO  :  COUNTING NODES            |"<<endl;
					cout<<"\t@-------------------------------------------@"<<endl;
					cout<<"\t|          1  :  Count Odd Nodes            |"<<endl;
					cout<<"\t|          2  :  Count Even Nodes           |"<<endl;
					cout<<"\t|          3  :  Count Total Nodes          |"<<endl;
                    cout<<"\t@-------------------------------------------@"<<endl;
					cout<<endl;
					cout<<"Choose what you want (1/2/3): ";cin>>kode;
					cout<<endl;
					system("cls");
					switch (kode){
                        case 1:{
                             cout<<"Current List: ";
                             showList ();
                             cout <<endl;
                             cout<<"\nTotal Odd Number in the List: ";
                             countOdd();
                             break;
                        }
                        case 2:{
                            cout<<"Current List: ";
                            showList ();
                            cout <<endl;
                            cout<<"\nTotal Even Number in the List: ";
                            countEven();
                            break;
                        }
                        case 3:{
                            cout<<"Current List: ";
                            showList ();
                            cout <<endl;
                            cout<<"\nTotal Node in the List is: ";
                            count();
                            break;
                        }

                        default:{
                            cout<<"Invalid Selection.Try Again....";
                            break;
                        }
					}
            break;
        }

       case 5: {
                  cout<<"Current List: ";
                  showList ();
                  cout <<endl;
                  cout<<"\nThe Reverse List is: ";
                  reverse();
                  showList();
                  break;
                }


        default:{
                cout<<"Invalid Selection.Try Again....";
                break;
            }

	 }
	 cout<<endl;
	 cout<<"\nDo You Want to Repeat the Program (y/n) :";cin>>n;
	 system("cls");}
	 while(n=='y' || n=='Y');
	 cout<<"Thank You for Using Our Program *_* "<<endl;


     return 0;
}//Main Function ends


    void createemptylist(){
    first = NULL;
	last = NULL;
    }

//add first node
    void createthefirstList(){
    cout<<"Insert Your First Node data: ";cin>>data;
	P = (node *)malloc(sizeof(node));
	P->info = data;
	P->next = NULL;
	first = P;
	last = P;
    }

//function to show nodes
    void showList(){
    P = first;
	while(P!= NULL)
	{
		cout<<P->info<<"->";
		P = P -> next;
	}
    }

//ADD AHEAD OF NODES
    void insertFirst(){
    cout<<"Insert Value at the First of Node"<<endl;
	cout<<"Insert Your Data: ";cin>>data;

	P = (node *)malloc(sizeof(node));
	P->info = data;

	P->next = first;
	first = P;
    }

//ADD LAST
    void insertLast(){
    node *Prec;
	Prec=first;
	cout<<"Insert Your Data: ";cin>>data;

	while(Prec!=last)
	{
		Prec=Prec -> next;
	}
	P = (node *)malloc(sizeof(node));
	P->info = data;
	Prec->next = P;
	P->next = NULL;
	last = P;
    }

//ADD AFTER A NODES
    void insertAfter(){

	node *Prec;
	Prec=first;

	cout<<"Insert Data After a Node"<<endl;
	cout<<"Insert Your Data that You Want to Insert: ";cin>>data;
	cout<<"You Want to Put this Node After What Value: ";cin>>y;

	while(Prec!=last && Prec->info!=y)
	{
		Prec=Prec -> next;
	}

	if(Prec->info!=y)
	{
		cout<<"This Value is not Found in the List";
		cout<<endl<<endl;
	}
	else
	{
		P = (node *)malloc(sizeof(node));
		P->info = data;
		P->next = Prec->next;
		Prec->next = P;
    }

    }

//Delete FIRST NODES
    void deleteFirst(){
    node *temp;
    temp = first;
    first = first->next;
    delete temp;

    }

//DELETE A NODE FROM AFTER  A NODE
    void deleteAfter(){
	node *P1;
	node *temp;

	P=first;
	cout<<"Delete A Node After: ";cin>>y;

	while(P!=last && P->info!=y)
	{
		P=P -> next;
	}

	if(P->info!=y)
	{
		cout<<"This Value is not Found in the List.";
		cout<<endl<<endl;
	}
	else
	{
		P1 = P->next;
		P->next = P1->next;
		temp = P1;
		//P1->next = NULL;
		delete temp;
	}
    }


//DELETE LAST NODE
    void deleteLast(){
          node *Prec; node *temp;
	Prec = first;
    while(Prec->next != last)
	{
	    Prec = Prec->next;
	}
    last = Prec;
    temp = last->next;
    delete temp;
    last->next = NULL;

    }



//Function to Find Smallest Node
    int minValue(){
        node *p;
        p=first;
        int minimum = p->info;

       while (p!=NULL){
           if(p->info<minimum)
                minimum=p->info;
           p=p->next;
       }
        return minimum;

    }


//Function to find Largest Node
    int maxValue(){
        node *p;
        p=first;
        int maximum = 4;

       while (p!=NULL){
           if(p->info>maximum)
                maximum=p->info;
              p=p->next;
       }
        return maximum;
    }


//Function to Count Odd Nodes
void countOdd(){
     node *p;
     p=first;
     int sum=0;

     while(p!=  NULL){
         if (p->info%2!=0 ){
             sum++;
             p=p->next;
             }else{
                 p=p->next;
             }
         }
    cout <<sum;
 }

//Function To count Even Nodes
void countEven(){
     node *p;
     p=first;

     int sum=0;

     while(p!= NULL){
         if(p->info %2 == 0){
             sum++;
             p=p->next;
             }


                 p=p->next;

        }
        cout <<sum;
    }


//Function to count total nodes
    void count(){
        node *p;
        int sum =0;
        p=first;
        while (p!=NULL){
            sum++;
            p=p->next;
        }
        cout<<sum;
    }


//Function to reverse list
    void reverse() {
        node*p,*q,*r;

        if(first==NULL){
           cout<<"List is empty";
           return; }

        p=first;
        q=p->next;
        p->next=NULL;
        while(q!=NULL) {
             r=q->next;
             q->next=p;
             p=q;
             q=r;
        }
        first=p;
    }








