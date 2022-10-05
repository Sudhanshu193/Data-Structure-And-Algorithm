#include<iostream>
using namespace std;
struct BSTNode{

    int data;
    BSTNode* left;
    BSTNode* right;
    };

BSTNode*Findmin(BSTNode* root)
 {
    while(root->left != nullptr)
    {
        root=root->left;
    }
    return root;
 }  
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

 struct BSTNode* Deletion(BSTNode* root, int data)
 {
    if(root==nullptr)
        return root;
    if(data< root->data)
        root->left=Deletion(root->left, data);
    else if(data > root->data)
        root->right=Deletion(root->right, data);
    else{
        if(root->left == nullptr && root->right == nullptr)
        {
            delete root;
            root=nullptr;
        }
        else if(root->left == nullptr)
        {
            BSTNode*temp=root;
            root=root->right;
            delete temp;
        }
        else if(root->right == nullptr)
        {
            BSTNode* temp = root;
            root=root->left;
            delete temp;
        }
        else
        {
            struct BSTNode* temp =Findmin(root->right);
            root->data=temp->data;
            root->right=Deletion(root->right, temp->data);

        }
        return root;
    } 
 }
 //recursive call
  void preorder(BSTNode* root)
  {
    if(root==nullptr)
        return ;
    
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
  }             
 void inorder(BSTNode* root)
 {
    if(root==nullptr)
        return ;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right); 
 }

 void postorder(BSTNode* root)
 {
    if(root== nullptr)
        return ;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";    
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

// int number;
// cout<<"Enter the number: "<<endl;
// cin>>number;

// if(search(root, number) == true)
//     cout<<"Number found";
// else
//     cout<<"Not found";   
// Deletion(root, 20); 
// if(search(root, 20) == true)
//     cout<<"Number found";
// else
//     cout<<"Not found"; 
preorder(root);
cout<<endl;
inorder(root);
cout<<endl;
postorder(root);

}
