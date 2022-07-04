struct Node
{
  int data;
  Node *next;
  Node(int x)
  {
    data=x;
    next=NULL;
  }
};

void print(Node *head)
{
  while(head!=NULL)
  {
    cout<<head->data<<" ";
    head=head->next;
  }
}

int main()
{
  int n;
  cin>>n;
  Node *head=NULL;
  head=new Node(10);
  head->next=new Node(20);
  head->next=new Node(30);
  print(head);
  return 0;
}
