#include <iostream>
using namespace std; 


// start with creating Node
class node{
public:
	int data;
	node *left;
	node *right;

	node(int d){
		this->data = d;
		this->left = NULL;
		this->right = NULL;
	}
};

// now create tree using node
node * buildTree(node * root){
	cout<<"Enter the data : "<<endl;
	int data;
	cin>>data;

	root = new node(data);
	if (data == -1)
	{
		return NULL;
	}

	cout<<"Enter the left of data : "<<data<<endl;
	root -> left = buildTree(root->left);

	cout<<"Enter the right of data : "<<data<<endl;
	root -> right = buildTree(root->right);

	return root;
}

void levelOrderTraversal(node* root){
	queue<node> q;
	q.push(root);
	q.push(NULL);

	while(!q.empty()){
		node * temp = q.front();
		cout<<endl;
		if (!q.empty()){
			q.push(NULL);
		}
	}
}

int main()
{
	node * root = NULL;
	root = buildTree(root);
	return 0;
}