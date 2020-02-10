import java.util.*;
//Java program to simulate the Sinly Linked List.
class list
{
 static class Node
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
    Node nn = new Node(data);
    
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
   void delete()
  {
    Integer ele;
    System.out.print("Enter the element to delete:");
    Scanner sc = new Scanner(System.in);
    ele = sc.nextInt();

    list.Node temp = this.root;
    list.Node cn= this.root;

    if(ele==root.data)
      this.root = this.root.next;
    else
    {
    while(temp.data!=ele)
    {
      cn = temp;
      temp = temp.next;
    }
    cn.next = temp.next;
    }
    sc.close();

  }
  void find()
  {
    Integer ele;
    System.out.print("Enter the element to find:");
    Scanner sc = new Scanner(System.in);
    ele = sc.nextInt();
    list.Node temp = this.root;
    while(temp!=null)
    {
      if(ele==temp.data)
      {
      System.out.println("Element "+ele+" found!");
      break;
      }
      temp = temp.next;
    }
    if(temp==null)
    System.out.print("Element not found!\n");

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
  lis.insert(4);
  lis.print();
  lis.find();
  lis.find();
  lis.find();
  lis.delete();
  lis.print();
}
}
  