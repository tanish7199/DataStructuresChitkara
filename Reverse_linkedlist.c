#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node *next;
};
void insert(node *&head,int x)
{
	node *temp = new (node);
	temp->data = x;
	if(head == NULL)
		temp->next = NULL;
	else
	temp->next = head;
	
  head=temp;
}
void reverse(node *&head)
{
	node *fwd=NULL;
	node *prev=NULL;
	while(head!=NULL)
	{
		fwd->next=head;
		head->next=prev;
		prev=head;
		head=fwd;
	}
	head=prev;
}
void print(node *head)
{
	while(head!=NULL)
		{
			cout<<head->data<<" ";
			head=head->next;
		}
}
int main(){
    node *head = NULL;
    int n,x;
    cout<<"Enter the size : ";
    cin>>n;
    cout<<"Enter the elements : ";
    while(n--)
    {
    	cin>>x;
    	insert(head,x);
	}
	cout<<"Linked list before reversing : "<<endl;
	print(head);
	cout<<"Linked list after reversing : "<<endl;
	reverse(head);
	print(head);
}
