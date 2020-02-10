import java.util.*;

class list
{
 class Node
{
  int data;
  Node next;
  Node(int data)
  {
    this.data = data;
    next = null;
  }
}
  Node root,tail;

  list()
  {
    this.root = null;
  }
    
  void insert(int data)
  {
    list.Node nn = this.new Node(data);
    
    if(this.root==null)
      this.root = nn;
    else
    {
    	this.tail.next = nn;
    }
    this.tail=nn;
  }
  void print()
  {
    list.Node temp = this.root;
    while(temp!=null)
    {
      System.out.println(temp.data);
      temp = temp.next;
    }
  }
}
class main
{
public static void main(String args[])
{
  list lis = new list();
  lis.insert(1);
  lis.insert(2);
  lis.insert(3);
  lis.print();
}
}
  