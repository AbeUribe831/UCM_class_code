#include "BTree.h"

using namespace std;

BTree::BTree()
{
	root=NULL;
}
BTree::~BTree()
{
	//fix later
	destroy_tree(root);
}
void BTree::insert(int key)
{
	if(root==NULL)
		root=new Node;
		root->key_value=key;
		root->left=new Node;
		root->right=new Node;
	else
		insert(key, root);
}
Node *BTree::BTree_root()
{
 return search(key, root);
}
void BTree::insert(int key, Node *node)
{
	if(key > node->key_value)
	{
		if(node->left==NULL)
		{
			node->left=new Node;
			insert(key,node->left);		
		}
		else
			
	}
	else if(key<node->key_value)
	{
		
	}
}
void BTree::destroy_tree(node *leaf)
{
	
}

