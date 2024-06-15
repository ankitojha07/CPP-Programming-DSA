#include <iostream>
#include <queue>
using namespace std;

// start with creating Node
class node
{
public:
	int data;
	node *left;
	node *right;

	node(int d)
	{
		this->data = d;
		this->left = NULL;
		this->right = NULL;
	}
};

// now create tree using node
node *buildTree(node *root)
{
	cout << "Enter the data : " << endl;
	int data;
	cin >> data;
	root = new node(data);

	if (data == -1)
	{
		return NULL;
	}

	cout << "Enter the left of data : " << data << endl;
	root->left = buildTree(root->left);

	cout << "Enter the right of data : " << data << endl;
	root->right = buildTree(root->right);

	return root;
}

void levelOrder(node *root)
{
	queue<node *> q;
	q.push(root);
	q.push(NULL);

	while (!q.empty())
	{
		node *temp = q.front();

		q.pop();

		if (temp == NULL)
		{
			cout << endl;
			if (!q.empty())
			{
				q.push(NULL);
			}
		}

		else
		{
			cout << temp->data << " ";
			if (temp->left)
				q.push(temp->left);

			if (temp->right)
				q.push(temp->right);
		}
	}
}

int main()
{
	node *root = NULL;
	root = buildTree(root);
	levelOrder(root);
	return 0;
}