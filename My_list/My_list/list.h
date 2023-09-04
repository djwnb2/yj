#define _CRT_SECURE_NO_WARNINGS

namespace yj
{
	template<class T>
	struct list_node
	{
		T _data;
		list_node<T>* _next;
		list_node<T>* _prev;

		list_node(const T& x = T())
			    :_data(x)
				, _next(nullptr)
				, _prev(nullptr)
			{}

		
	};
	template<class T,class Ref,class Ptr>
	struct __list_iterator
	{
		typedef list_node<T> Node;
		typedef __list_iterator<T, Ref, Ptr> self;
		Node* _node;
		__list_iterator(Node* node)
			:_node(node)
		{}
		self& operator++()
		{
			_node = _node->_next;
			return *this;
		}

		self& operator--()
		{
			_node = _node->_prev;
			return *this;
		}
		self operator++(int)
		{
			self tmp(*this);
			_node = _node->_next;

			return tmp;
		}

		self operator--(int)
		{
			self tmp(*this);
			_node = _node->_prev;

			return tmp;
		}
		Ref operator*()
		{
			return _node->_data;
		}
		Ptr operator->()
		{
			return &_node->_data;
		}
		bool operator!=(const self& s)
		{
			return _node != s._node;
		}
		bool operator ==(const self& s)
		{
			return _node == s._node;
		}


	};
	template<class T>
	class list
	{
		typedef list_node<T> Node;
	public:
		typedef __list_iterator<T, T&, T*> iterator;
		typedef __list_iterator<T, const T&, const T*> const_iterator;
	    const_iterator begin() const
		{
			return _head->_next;
		}
		const_iterator end() const
		{
			return _head;
		}
		iterator begin()
		{
			return _head->_next;
		}
		iterator end()
		{
			return _head;
		}
		void empty_init()
		{
			_head = new Node;
			_head->_next = _head;
			_head->_prev = _head;
		}
		list()
		{
			empty_init();
		}
		//s1(s2)
		list(list<T>& s2)
		{
			empty_init();
			for (auto ch : s2)
			{
				push_back(ch);
			}

		}
		void swap(list<int>&s2)
		{
			std::swap(_head, s2._head);
			std::swap(_size, s2._size);
		}
		//s1=s2
		list<int>& operator =(list<int>s2)
		{
			swap(s2);
			return *this;
		}
		~list()
		{
			clear();
			delete _head;
			_head = nullptr;

		}
		void clear()
		{
			iterator it = begin();
			while (it != end())
			{
				it = erase(it);
			}
		}

		void push_back(const T&x)
		{
			insert(end(),x);

		}
		void push_front(const T& x)
		{
			insert(begin(), x);
		}
		void pop_front()
		{
			erase(begin());
		}
		void pop_back()
		{
			erase(--end());
		}
		iterator insert(iterator pos, const T& val)
		{
			Node* cur = pos._node;
			Node* newnode = new Node(val);
			Node* prev = cur->_prev;
			prev->_next = newnode;
			newnode->_prev = prev;
			newnode->_next = cur;
			cur->_prev = newnode;
			_size++;
			return iterator(newnode);
		}
		iterator erase(iterator pos)
		{
			Node* cur = pos._node;
			Node* prev = cur->_prev;
			Node* next = cur->_next;
			delete cur;
			prev->_next = next;
			next->_prev = prev;
			_size--;
			return iterator(next);
		}
		typedef __list_iterator<T, T&, T*> iterator;

		size_t size()
		{
			return _size;
		}
	private:
		Node* _head;
		size_t _size;

	};
	void test_list2()
	{
		list<int> lt;
		lt.push_back(1);
		lt.push_back(2);
		lt.push_back(3);
		lt.push_back(4);
		lt.push_back(5);

		list<int> lt1(lt);

		for (auto e : lt)
		{
			cout << e << " ";
		}
		cout << endl;

		for (auto e : lt1)
		{
			cout << e << " ";
		}
		cout << endl;

		//list<int> lt2;
		//lt2.push_back(10);
		//lt2.push_back(200);
		//lt2.push_back(30);
		//lt2.push_back(40);
		//lt2.push_back(50);

		//lt1 = lt2;
		//for (auto e : lt1)
		//{
		//	cout << e << " ";
		//}
		//cout << endl;

		//for (auto e : lt2)
		//{
		//	cout << e << " ";
		//}
		//cout << endl;
	}
	void test_list3()
	{
		list<int> lt;
		lt.push_back(1);
		lt.push_back(2);
		lt.push_back(3);
		lt.push_back(4);
		lt.push_back(5);

		

	}
	struct AA
	{
		AA(int a1 = 0, int a2 = 0)
			:_a1(a1)
			, _a2(a2)
		{}

		int _a1;
		int _a2;
	};

	template<typename T>
	//template<class T>
	void print_list(const list<T>& lt)
	{
		// list<T>未实例化的类模板，编译器不能去他里面去找
		// 编译器就无法list<T>::const_iterator是内嵌类型，还是静态成员变量
		// 前面加一个typename就是告诉编译器，这里是一个类型，等list<T>实例化
		// 再去类里面去取
		typename list<T>::const_iterator it = lt.begin();
		while (it != lt.end())
		{
			cout << *it << " ";
			++it;
		}
		cout << endl;
	}template<typename container>

	void print_container(const container&con)
	{
		typename container::const_iterator it = con.begin();
		while (it != con.end())
		{
			cout << *it << " ";
			++it;
		}
		cout << endl;
	}


	void test_list4()
	{
		list<int> lt;
		lt.push_back(1);
		lt.push_back(2);
		lt.push_back(3);
		lt.push_back(4);
		lt.push_back(5);
		//print_list(lt);
		print_container(lt);

		list<string> lt1;
		lt1.push_back("1111111111111");
		lt1.push_back("1111111111111");           
		lt1.push_back("1111111111111");
		lt1.push_back("1111111111111");
		lt1.push_back("1111111111111");
		//print_list(lt1);
		print_container(lt1);

		vector<string> v;
		v.push_back("222222222222222222222");
		v.push_back("222222222222222222222");
		v.push_back("222222222222222222222");
		v.push_back("222222222222222222222");
		//print_list(v);
		print_container(v);
	}
		
}
