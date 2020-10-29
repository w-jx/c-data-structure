#pragma once
#include <iostream>
#include <vector>
using namespace std;

template <class T>

class Mysort
{

public:
	Mysort() = default;

	Mysort(vector<T> v);
	void init(vector<T> v);
	void insert_sort();//≤Â»Î≈≈–Ú

	void shell_sort();//œ£∂˚≈≈–Ú








	 void print()
	{
		for (auto iter : num) {
			cout << iter << " ";
		}
		cout << endl;
	}
private:
	vector<T> num;
	
	
};



template<class T>
inline Mysort<T>::Mysort(vector<T> v)
{
	this->num.insert(num.begin, v);
}

template<class T>
inline void Mysort<T>::init(vector<T> v)
{
	this->num = v;
}
