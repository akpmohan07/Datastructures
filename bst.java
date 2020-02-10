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
    
    void insert(Node root,int data)
    {
        
        if(root==null)
        Node nn = new Node(data);
        root = nn;
        else if(root.data<data)
        lchild = 




    }
}
