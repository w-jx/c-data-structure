#if 0
#include <iostream>
#include "../ͷ�ļ�/mysort.h"
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

������	����	˵��	��Ŀ	�ļ�	��	��ֹ��ʾ״̬
����	C2664	��void std::vector<int,std::allocator<int>>::assign(std::initializer_list<_Ty>)��: 
�޷������� 1 �ӡ�std::vector<int,std::allocator<int>>��ת��Ϊ��std::initializer_list<_Ty>��	���ݽṹ�����븴ϰ	D:\OneDrive - smail.nju.edu.cn\codingProject\vs2019\c-data-structure\���ݽṹ\ͷ�ļ�\mysort.h	47

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
	};//����

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