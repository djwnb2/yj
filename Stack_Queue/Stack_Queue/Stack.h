#pragma once
 
namespace Mystack
{
	template<class T,class Container=vector<int>>
	class stack
	{
	public:
		void push(const T& x)
		{
			return _con.push_back(x);
		}
		void pop()
		{
			return _con.pop_back();
		}

		const T& top()
		{
			return _con.back();
		}
		void empty()
		{
			return _con.empty;
		}
		size_t size()
		{
			return _con.size();
		}


	private:
		Container _con;

	};

}