#define _CRT_SECURE_NO_WARNINGS
#include<vector>
#include<list>
#include<deque>

namespace Myqueue
{
	template<class T, class Container=deque<T>>
	class queue
	{
	public:
		void push(const T& x)
		{
			_con.push_back(x);
		}

		void pop()
		{
			_con.pop_front();
		}

		const T& front()
		{
			return _con.front();
		}

		const T& back()
		{
			return _con.back();
		}

		bool empty()
		{
			return _con.empty();
		}

		size_t size()
		{
			return _con.size();
		}



	private:
		Container _con;
	};
}