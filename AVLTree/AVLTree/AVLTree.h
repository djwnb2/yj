#pragma once


#include<map>
#include<vector>
#include<iostream>
#include<assert.h>

//cin>>
//cout<<

using namespace std;
namespace yj
{
	template<class K,class V>
	struct AVLTreeNode
	{
		AVLTreeNode<K, V>* _left;
		AVLTreeNode<K, V>* _right;
		AVLTreeNode<K, V>* _parent;
		pair<K, V> _kv;
		int _bf;
		AVLTreeNode(const pair<K, V>& kv)
			:_left(nullptr)
			,_right(nullptr)
			,_parent(nullptr)
			,_kv(kv)
			,_bf(0)
		{}
	};

	template<class K,class V>
	class AVLTree
	{
		typedef AVLTreeNode<K, V> Node;
	public:
		bool Insert(const pair<K, V>& kv)
		{
			if (_root == nullptr)
			{
				_root = new Node(kv);
				return true;
			}
			Node* parent = nullptr;
			Node* cur = _root;
			while (cur)
			{
				if (cur->_kv.first< kv.first)
				{
					parent = cur;
					cur = cur->_right;
				}
				else if (cur->_kv.first > kv.first)
				{
					parent = cur;
					cur = cur->_left;
				}
				else
				{
					return false;
				}
				
			}
			cur = new Node(kv);
			if (parent->_kv.first < kv.first)
			{
				parent->_right = cur;
				cur->_parent = parent;
			}
			else
			{
				parent->_left = cur;
				cur->_parent = parent;
			}
			while (parent)
			{
				if (cur == parent->_left)
				{
					parent->_bf--;
				}
				else
				{
					parent->_bf++;
				}

				if (parent->_bf == 0)
				{
					break;
				}
				else if (parent->_bf == 1 || parent->_bf == -1)
				{
					cur = parent;
					parent = parent->_parent;
				}
				else if (parent->_bf == 2 || parent->_bf == -2)
				{
					if (parent->_bf == 2 && cur->_bf == 1)
					{
						RotateL(parent);
					}
					else if (parent->_bf == -2 && cur->_bf == -1)
					{
						RotateR(parent);
					}
					else if (parent->_bf == 2 && cur->_bf == -1)
					{
						RotateRL(parent);
					}
					else if (parent->_bf == -2 && cur->_bf == 1)
					{
						RotateLR(parent);
					}

					
					break;
				}
				else
				{
					assert(false);
				}
			}

			return true;
			return true;
		}

		void RotateL(Node* parent)
		{
			Node* subR = parent->_right;
			Node* subRL = subR->_left;

			parent->_right = subRL;
			subR->_left = parent;

			Node* parentParent = parent->_parent;

			parent->_parent = subR;
			if (subRL)
				subRL->_parent = parent;

			if (_root == parent)
			{
				_root = subR;
				subR->_parent = nullptr;
			}
			else
			{
				if (parentParent->_left == parent)
				{
					parentParent->_left = subR;
				}
				else
				{
					parentParent->_right = subR;
				}

				subR->_parent = parentParent;
			}

			parent->_bf = subR->_bf = 0;
		}

		void RotateR(Node* parent)
		{
			Node* subL = parent->_left;
			Node* subLR = subL->_right;
			parent->_left = subLR;
			if (subLR)
			{
				subLR->_parent = parent;
			}
			Node* pparent = parent->_parent;
			subL->_right = parent;
			parent->_parent = subL;
			if (_root == parent)
			{
				_root = subL;
				subL->_parent = nullptr;
			}
			else
			{
				if (pparent->_left == parent)
				{
					pparent->_left = subL;
				}
				else
				{
					pparent->_right = subL;
				}
				subL->_parent = pparent;
			}
			subL->_bf = parent->_bf = 0;
		}

		void RotateRL(Node* parent)
		{
			Node* subR = parent->_right;
			Node* subRL = subR->_left;
			int bf = subRL->_bf;

			RotateR(parent->_right);
			RotateL(parent);

			if (bf == 0)
			{
				
				parent->_bf = subR->_bf = subRL->_bf = 0;
			}
			else if (bf == -1)
			{

				parent->_bf = 0;
				subRL->_bf = 0;
				subR->_bf = 1;
			}
			else if (bf == 1)
			{
				
				parent->_bf = -1;
				subRL->_bf = 0;
				subR->_bf = 0;
			}
			else
			{
				assert(false);
			}
		}
		void RotateLR(Node* parent)
		{
			Node* subL = parent->_left;
			Node* subLR = subL->_right;
			int bf = subLR->_bf;

			RotateL(parent->_left);
			RotateR(parent);

			if (bf == 1)
			{
				parent->_bf = 0;
				subLR->_bf = 0;
				subL->_bf = -1;
			}
			else if (bf == -1)
			{
				parent->_bf = 1;
				subLR->_bf = 0;
				subL->_bf = 0;
			}
			else if (bf == 0)
			{
				parent->_bf = 0;
				subLR->_bf = 0;
				subL->_bf = 0;
			}
			else
			{
				assert(false);
			}
		}
		void InOrder()
		{
			_InOrder(_root);
			cout << endl;
		}

		void _InOrder(Node* root)
		{
			if (root == nullptr)
				return;

			_InOrder(root->_left);
			cout << root->_kv.first << " ";
			_InOrder(root->_right);
		}
		bool IsBalance()
		{
			return _IsBalance(_root);
		}

		int _Height(Node* root)
		{
			if (root == nullptr)
				return 0;

			int leftHeight = _Height(root->_left);
			int rightHeight = _Height(root->_right);

			return leftHeight > rightHeight ? leftHeight + 1 : rightHeight + 1;
		}

		bool _IsBalance(Node* root)
		{
			if (root == nullptr)
				return true;

			int leftHeight = _Height(root->_left);
			int rightHeight = _Height(root->_right);
			if (rightHeight - leftHeight != root->_bf)
			{
				cout << root->_kv.first << "ƽ�������쳣" << endl;
				return false;
			}

			return abs(rightHeight - leftHeight) < 2
				&& _IsBalance(root->_left)
				&& _IsBalance(root->_right);
		}
		Node* Find(const K& key)
		{
			Node* cur = _root;
			while(cur)
			{
				if (cur->_kv.first < key)
				{
					cur = cur->_right;
				}
				else if (cur->_kv.first < key)
				{
					cur = cur->_left;
				}
				else
				{
					return cur;
				}
			}
			return NULL;
		}
	private:
		Node* _root = nullptr;

	};

}