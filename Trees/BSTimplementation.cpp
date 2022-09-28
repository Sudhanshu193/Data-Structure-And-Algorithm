#include<iostream>
using namespace std;
struct BSTNode{

    int data;
    BSTNode* left;
    BSTNode* right;
    };

 BSTNode* GetNewNode(int data)
 {
    BSTNode* NewNode = new BSTNode();
    NewNode->data = data;
    NewNode->left = nullptr;
    NewNode->right = nullptr;

    return NewNode;
 }

 BSTNode* Insert(BSTNode* root, int data)
 {
    if(root == nullptr)
        root = GetNewNode(data);
    else if(data <= root->data)
        root->left = Insert(root->left, data);
    else
        root->right = Insert(root->right, data);

    return root;         
 } 
   
int main()
{
 BSTNode *root=nullptr;

 root = Insert(root, 25);
 root = Insert(root, 15);
 root = Insert(root, 10);
 root = Insert(root, 20);
 root = Insert(root, 30);
 root = Insert(root, 27);
 root = Insert(root, 40);

 cout<<root->data;


 


}
