#pragma once
#include<iostream>
using namespace std;
template<class K>
struct  BSTreeNode
{
	BSTreeNode<K>* _left;
	BSTreeNode<K>* _right;
	K _key;
	BSTreeNode(const K& key)
	
		:_left(nullptr)
		,_right(nullptr)
		,_key(key)
	
	{}

};
template<class K>
class BSTree
{
	typedef BSTreeNode<K> Node;
public:
	bool Insert(const K& key)
	{
		if (_root == nullptr)
		{
			_root = new Node(key);
			return true;
		}
		Node* parent = nullptr;
		Node* cur = _root;
		while (cur)
		{
			parent = cur;
			if (cur->_key < key)
			{
				
				cur = cur->_right;
			}
			else if (cur->_key > key)
			{
				
				cur = cur->_left;
			}
			else
			{
			
				return false;
			}

		}
		cur = new Node(key);
		if (parent->_key < key)
		{
			parent->_right = cur;

		}
		else
		{
			parent->_left = cur;
		}
		return true;

	}
	bool Find(const K& key)
	{
		Node* cur = _root;
		while (cur)
		{
			if (cur->_key < key)
			{
				cur = cur->_right;
			}
			else if (cur->_key > key)
			{
				cur = cur->_left;
			}
			else
			{
				return true;
			}
		}
		return false;
	}

	bool Erase(const K& key)
	{
		Node* parent = nullptr;
		Node* cur = _root;
		while (cur)
		{
			if (cur->_key < key)
			{
				parent = cur;
				cur = cur->_right;
			}
			else if (cur->_key>key)
			{
				parent = cur;
				cur = cur->_left;
			}
			else
			{
				if (cur->_left == nullptr)
				{
					if (cur == _root)
					{
						_root = cur->_right;
					}
					if (cur == parent->_left )
					{
						parent->_left = cur->_right;
					}
					else
					{
						parent->_right = cur->_right;
					}
					delete(cur);
				}
				else if (cur->_right == nullptr)
				{
					if (cur == _root)
					{
						_root = cur->_left;
					}
					else
					{
						if (cur == parent->_left)
						{
							parent->_left = cur->_left;
						}
						else
						{
							parent->_right = cur->_left;
						}
					}

					delete cur;
				}
				else
				{
					Node* parent = cur;
					Node* subLeft = cur->_right;
					while (subLeft->_left)
					{
						parent = subLeft;
						subLeft = subLeft->_left;
					}
					swap(cur->_key, subLeft->_key);
					if (subLeft == parent->_left)
						parent->_left = parent->_left;
					else
						parent->_right = subLeft->_right;

					delete subLeft;
				}
				return true;
			}
		}
		return false;
	}
	void InOrder()
	{
		_InOrder(_root);
		cout << endl;
	}
	bool FindR(const K&key)
	{
		return _FindR(_root,key);
	}
	bool InsertR(const K& key)
	{
		return _InsertR(_root, key);
	}
	bool EraseR(const K& key)
	{
		return _EraseR(_root, key);
	}
	BSTree() = default;

	~BSTree()
	{
		Destroy(_root);
		 
	}
	BSTree(const BSTree<K>& t)
	{
		_root = Copy(t._root);
	}
	BSTree<K>& operator=(BSTree<K> t)
	{
		swap(_root, t._root);
		return this;
	}
private:
	Node* Copy(Node*root)
	{
		if (root == nullptr)
			return nullptr;
		Node* newRoot = new Node(root->_key);
		newRoot->_left = Copy(root->_left);
		newRoot->_right = Copy(root->_right);
		return newRoot;

	}
	void Destroy(Node* root)
	{
		if (root == nullptr)
		{
			return;
		}
		Destroy(root->_left);
		Destroy(root->_right);
		delete root;

	}
	bool _FindR(Node* root,const K&key)
	{
		if (root == nullptr)
		{
			return false;
		}
		if (root->_key < key)
		{
			return _FindR(root->_right, key);
		}
		else if (root->_key>key)
		{
			return _FindR(root->_left, key);
		}
		else
		{
			return true;
		}
		
	}
	void _InsertR(Node*&root,const K& key)
	{
		if (root == nullptr)
		{
			root = new Node(key);
		}
		if (root->_key < key)
		{
			return _InsertR(root->_right, key);
		}
		else if (root->_key > key)
		{
			return _InsertR(root->_left, key);
		}

	}
	bool _EraseR(Node* &root, const K& key)
	{
		if (root == nullptr)
		{
			return false;
		}
		if (root->_key < key)
		{
			return _EraseR(root->_right, key);
		}
		else if (root->_key > key)
		{
			return _EraseR(root->_left, key);
		}
		else
		{
			if (root->_left == nullptr)
			{
				Node* del = root;
				root = root->_right;
				delete del;

				return true;

			}
			else if (root->_right == nullptr)
			{
				Node* del = root;
				root = root->_left;
				delete del;

				return true;
			}
			else
			{
				Node* subLeft = root->_right;
				while (subLeft->_left)
				{
					subLeft = subLeft->_left;
				}

				swap(root->_key, subLeft->_key);

				
				return _EraseR(root->_right, key);
			}
		}
	}

	void _InOrder(Node* root)
	{
		if (root == nullptr)
			return;

		_InOrder(root->_left);
		cout << root->_key << " ";
		_InOrder(root->_right);
	}
private:
	Node*_root=nullptr;
};
namespace kv
{
	template<class K,class V>
	struct BSTreeNode
	{
		BSTreeNode<K, V>* _left;
		BSTreeNode<K, V>* _right;
		K _key;
		V _value;

		BSTreeNode(const K& key, const V& value)
			:_left(nullptr)
			, _right(nullptr)
			, _key(key)
			, _value(value)
		{}
	};
	template<class K,class V>
	class BSTree
	{
		typedef BSTreeNode<K, V> Node;
	public:

	};

}