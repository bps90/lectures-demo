struct node 
{ 
    int data; 
    struct node *left, *right; 
}; 
   
// A utility function to create a new BST node 
struct node *newNode(int item);
   
/* Given a binary tree, print its nodes according to the 
  "bottom-up" postorder traversal. */
void printPostorder(struct node* node);
  
/* Given a binary tree, print its nodes in inorder*/
void printInorder(struct node* node);
  
/* Given a binary tree, print its nodes in preorder*/
void printPreorder(struct node* node);    
   
/* A utility function to insert a new node with given key in BST */
struct node* insert(struct node* node, int key) ;