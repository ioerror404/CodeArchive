#include<iostream>
using namespace std;
bool c = false;

struct node
{
	int data;
	node* left;
	node* right;
};
struct node* getNode(int data)
{
	node* newNode = new node();
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}
struct node* insert(struct node* root, int data)
{
	if (root == NULL)
		return getNode(data);
	if (data < root->data)
		root->left = insert(root->left, data);
	else if (data > root->data)
		root->right = insert(root->right, data);

	return root;
}
bool search(node* root, int numToFind)
{
	if (root == NULL)
		return false;
	else if (root->data == numToFind)
		return true;
	else if (root->data > numToFind)
		search(root->left, numToFind);
	else if (root->data < numToFind)
		search(root->right, numToFind);
}
void pre_order(struct node* root)
{
	if (root == NULL)
		return;
	cout << root->data << "\t";
	pre_order(root->left);
	pre_order(root->right);

}
void inorder(struct node *root){
	if (root == NULL)
		return;
	inorder(root->left);
	cout << root->data << "\t";
	inorder(root->right);
}
void postorder(struct node *root){
	if (root == NULL)
		return;
	postorder(root->left);
	postorder(root->right);
	cout << root->data << "\t";
}

node* findMin(node*root)
{
    while(root->left!=NULL)
    {
        root=root->left;
    }
    return root;
}

node* Delete( node* root,int value)
{ 
	c=search(root,value);
	if(root==NULL)
		return root;
	else if(value< root->data)
	{
		root->left= Delete(root->left,value);
	}
	else if(value> root->data)
	{
		root->right= Delete(root->right,value);
	}
	
	else
	{
		if(root->left==NULL&&root->right==NULL)
		{
			delete root;
			root=NULL;
			return root;
		}
		else if(root->left==NULL)
		{
			struct node* temp=root;
			root=root->right;
			delete temp;
			return root;
		}
		else if(root->right==NULL)
		{
			struct node* temp=root;
			root=root->left;
			delete temp;
			return root;
		}
		else
		{
			struct node*temp=findMin(root->right);
			root->data=temp->data;
			root->right=Delete(root->right,temp->data);
		}
	}
	return root;

}

int main()
{
	int numb;
	cout << "NUMBER : ";
	cin >> numb;
	node* root = NULL;
	root = insert(root, numb);

	for (int i = 1; i<11; i++)
	{
		insert(root, numb*i);
	}

	cout << "NUMBER : ";
	cin >> numb;

	if (search(root, numb) == true)
		cout << "found : ";
	else
		cout << "not found";
	cout << "preorder:" << endl;
	pre_order(root);
	cout << endl;
	cout << "inorder:" << endl;
	inorder(root);
	cout << endl;
	cout << "Postorder:" << endl;
    postorder(root);
	cout << endl;
	Delete(root,20);

	if(c)
	{   
		cout<<"Node Deleted"<<endl;
		cout<<"\nAfter Deletion: "<<endl;
		cout<<"Inorder: ";
		inorder(root);
		cout<<endl;
	}
	else
		cout<<"Node Not Found"<<endl;
	system("pause");
	return 0;
}
