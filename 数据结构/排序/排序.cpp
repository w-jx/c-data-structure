#if 0
#include <iostream>
#include "../头文件/mysort.h"
#include <algorithm>
using namespace std;

template<class T>
void Mysort<T>::insert_sort()
{


}

template<class T>
void Mysort<T>::shell_sort()
{


}
/*

严重性	代码	说明	项目	文件	行	禁止显示状态
错误	C2664	“void std::vector<int,std::allocator<int>>::assign(std::initializer_list<_Ty>)”: 
无法将参数 1 从“std::vector<int,std::allocator<int>>”转换为“std::initializer_list<_Ty>”	数据结构整理与复习	D:\OneDrive - smail.nju.edu.cn\codingProject\vs2019\c-data-structure\数据结构\头文件\mysort.h	47

*/
void test01()
{

	int arr[]{ 1,5,3,8,9,2,4,10,6 };
	
	for (auto iter : arr) {
		std::cout << iter << " ";
	}
	cout << endl;
	
	[=]() {
		vector<int> v(arr, arr + 9);
		for (auto i : v)
		{
			std::cout << i << " ";
		}
		cout << endl;
	};//可以

	[=]() {
		vector<int> v{ 1,3,4,5,6 };
		Mysort<int> mysort(v);
	}();
	
}
int main()
{
	test01();
	system("pause");
	return 0;
}
#endif