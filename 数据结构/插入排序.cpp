#include <iostream>
#include <vector>
#include "myhead.h"
using namespace std;
/*
2020/10/24
insert_sort.cpp
插入排序
*/

template<class T>
void insert_sort(vector<T>& v)
{
	auto len = v.size();
	if (len == 0) return;

	for (auto i = 1; i < len;i++) {
		auto j = i - 1;
		auto flag = v[i];

		while (j >= 0 && v[j] > flag) {
			v[j+1] = v[j];
			j--;
		}
		v[j+1] = flag;

	}
	


}

//插入排序 从小到大测试
void test01()
{
	vector<int> v{ 1,3,2,7,10,18,6 ,-9};
	printVector(v);
	insert_sort(v);
	std::cout << "after sort:\n";
	printVector(v);
}


int main()
{

	test01();
	system("pause");
	return 0;
}