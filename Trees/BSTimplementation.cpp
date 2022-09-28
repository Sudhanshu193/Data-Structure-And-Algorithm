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
 bool search(BSTNode* root , int data)
 {
    if(root == nullptr)
        return false;

    if(data == root->data)
        return true;
    else if(data <= root->data)
        return search(root->left, data);
    else
        return search(root->right, data);

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

int number;
cout<<"Enter the number: "<<endl;
cin>>number;

if(search(root, number) == true)
    cout<<"Number found";
else
    cout<<"Not found";    


}
