import java.util.*;
class tree
{
    static class Node
    {
        int data;
        Node lchild,rchild;
        Node(int data)
        {
            this.data = data;
            lchild =rchild = null;
        }
    }
    Node root;
    tree()
    {
        this.root=null;
    }
    
    Node insert(Node root,int data)
    {
        
        if(root==null)
        {
        Node nn = new Node(data);
        root = nn;
        return root;
        }
        else if(root.data>data)
        root.lchild = insert(root.lchild,data);
        else if(root.data<data)
        root.rchild = insert(root.rchild,data);
        return root;
    }
    void inorderRec(Node root) { 
        if (root != null) { 
            inorderRec(root.lchild); 
            System.out.println(root.data); 
            inorderRec(root.rchild); 
        } 
    } 
    
}
class main
{
    public static void main(String args[])
    {
        tree t = new tree();
        t.root = t.insert(t.root, 2);
        t.insert(t.root, 3);
        t.insert(t.root, 4);
        t.insert(t.root, 15);
        t.insert(t.root, 6);
        t.insert(t.root, 7);
        t.insert(t.root, 8);

        t.inorderRec(t.root);


    }
}
