struct node  
{ 
    int data; 
    struct node *left; 
    struct node *right; 
}; 
  

/* newNode() allocates a new node with the given data and NULL left and  
   right pointers. */
struct node* newNode(int data);

/* Given a binary tree, print its nodes according to the 
  "bottom-up" postorder traversal. */
void printPostorder(struct node* node);
  
/* Given a binary tree, print its nodes in inorder*/
void printInorder(struct node* node);
  
/* Given a binary tree, print its nodes in preorder*/
void printPreorder(struct node* node);     