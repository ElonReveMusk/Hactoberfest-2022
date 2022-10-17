#include <iostream>
using namespace std;

typedef struct treenode {
    int val;
    struct treenode* left;
    struct treenode* right;
} node;

node* createNode(int val)
{
    node* newNode = (node*)malloc(sizeof(node));
    newNode->val = val;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
 
void inorder(node* root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout <<" "<< root->val;
    inorder(root->right);
}

void mirrorify(node* root, node** mirror)
{
    if (root == NULL) {
        mirror = NULL;
        return;
    }
    *mirror = createNode(root->val);
    mirrorify(root->left, &((*mirror)->right));
    mirrorify(root->right, &((*mirror)->left));
}

int main()
{
 
    node* tree = createNode(5);
    tree->left = createNode(3);
    tree->right = createNode(6);
    tree->left->left = createNode(2);
    tree->left->right = createNode(4);
 
    // Print inorder traversal of the input tree
    cout <<"Inorder of original tree: ";
    inorder(tree);
    node* mirror = NULL;
    mirrorify(tree, &mirror);
 
    // Print inorder traversal of the mirror tree
    cout <<"\nInorder of mirror tree: ";
    inorder(mirror);
 
    return 0;
}