using namespace std;
#include <iostream>
#include "stack.h"
#include "stack.cpp"

class TreeNode
{
public:
	char data;
	TreeNode *left;
	TreeNode *right;
};

void preorder(TreeNode *root)
{
	if (root == NULL)
		return;
	cout << root->data;
	preorder(root->left);
	preorder(root->right);
}
void inorder(TreeNode *root)
{
	if (root == NULL)
		return;
	inorder(root->left);
	cout << root->data;
	inorder(root->right);
}
void postorder(TreeNode *root)
{
	if (root == NULL)
		return;
	postorder(root->left);
	postorder(root->right);
	cout << root->data;
}
void PreorderIterative(TreeNode *root)
{
	if (root == NULL)
		return;

	Stack<TreeNode *> s;
	s.add(root);

	while (!s.isEmpty())
	{
		// Pop the top item from stack and print it
		TreeNode *temp = s.top();
		cout << temp->data << " ";
		s.pop();

		if (temp->right)
			s.add(temp->right);
		if (temp->left)
			s.add(temp->left);
	}
}
// Iterative function to perform post-order traversal of the tree
void PostorderIterative(TreeNode *root)
{
	// create an empty stack and add root node
	Stack<TreeNode *> s;
	s.add(root);

	// create another stack to store post-order traversal
	Stack<char> out;

	// loop till stack is empty
	while (!s.isEmpty())
	{
		// we pop a node from the stack and push the data to output stack
		TreeNode *temp = s.top();
		s.pop();

		out.add(temp->data);

		// push left and right child of popped node to the stack
		if (temp->left)
			s.add(temp->left);

		if (temp->right)
			s.add(temp->right);
	}

	// print post-order traversal
	while (!out.isEmpty())
	{
		cout << out.top() << " ";
		out.pop();
	}
}

// Iterative function to perform in-order traversal of the tree
void InorderIterative(TreeNode *root)
{
	// create an empty stack
	Stack<TreeNode*> stack;

	// start from root node (set current node to root node)
	TreeNode *curr = root;

	// if current node is null and stack is also empty, we're done
	while (!stack.isEmpty() || curr != nullptr)
	{
		// if current node is not null, push it to the stack (defer it)
		// and move to its left child
		if (curr != nullptr)
		{
			stack.add(curr);
			curr = curr->left;
		}
		else
		{
			// else if current node is null, we pop an element from stack,
			// print it and finally set current node to its right child
			curr = stack.top();
			stack.pop();
			cout << curr->data << " ";

			curr = curr->right;
		}
	}
}


void postfix(string expression)
{
	Stack<TreeNode *> stack;
	for (char i : expression)
	{
		if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'))
		{
			TreeNode *a = new TreeNode();
			a->data = i;
			stack.add(a);
		}
		else
		{
			TreeNode *a = stack.top();
			stack.pop();
			TreeNode *b = stack.top();
			stack.pop();
			TreeNode *temp = new TreeNode();
			temp->data = i;
			temp->right = a;
			temp->left = b;
			stack.add(temp);
		}
	}
	TreeNode *temp = stack.top();
	preorder(temp);
}

string reverseExpression(string s)
{
	string reverse = "";
	for (int i = s.length() - 1; i >= 0; i--)
	{
		if (s[i] == ')')
		{
			reverse += '(';
		}
		else if (s[i] == '(')
		{
			reverse += ')';
		}
		else
		{
			reverse += s[i];
		}
	}
	return reverse;
}

void prefix(string expression)
{
	expression = reverseExpression(expression);
	Stack<TreeNode *> stack;
	for (char i : expression)
	{
		if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'))
		{
			TreeNode *a = new TreeNode();
			a->data = i;
			stack.add(a);
		}
		else
		{
			TreeNode *a = stack.top();
			stack.pop();
			TreeNode *b = stack.top();
			stack.pop();
			TreeNode *temp = new TreeNode();
			temp->data = i;
			temp->left = a;
			temp->right = b;
			stack.add(temp);
		}
	}
	TreeNode *temp = stack.top();
	preorder(temp);
	cout<<"hello"<<endl;
	PreorderIterative(temp);
	// postorderIterative(temp);
	// inorderIterative(temp);
}

int main()
{
	// cout<<"Enter Postfix Expression : ";
	// string expression;
	// cin >> expression;
	// postfix(expression);

	// cout<<"\nEnter Prifix Expression : ";
	// string expression2;
	// cin >> expression2;
	// prefix(expression2);

	prefix("++A*BCD");
	// ++A*BCD pri
	// ABC*+D+ post
	// A+B*C+D in
}
