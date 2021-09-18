#ifndef SWAP_HPP
#define SWAP_HPP

namespace ft {
	template <typename T>
	void swap(T &a, T &b)
	{
		T tmp = a;
		a = b;
		b = tmp;
	}
}

#endif