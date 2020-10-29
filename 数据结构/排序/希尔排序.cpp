#if 0
#include <iostream>
#include "../myhead.h"
using namespace std;
/*
2020/10/24
希尔排序.cpp
希尔排序,和插入排序很像,但是比插入排序优越
*/

void  shell_sort(vector<int>& v)
{
	int len = v.size();
	if (len <= 1) return;

	int step = len / 2;
	int j, flag;

	while (step !=0) {


		for (auto i = step; i < len; i++) {
			flag = v[i];
			j = i - step;


			while (j >= 0 && v[j] > flag) {
				v[j + step] = v[j];
				j -= step;
			}
			v[j + step] = flag;
			
		}
		step--;

	}

}
void test01()
{
	vector<int> v{ 1,3,2,7,10,18,6 ,-9 };
	printVector(v);
	shell_sort(v);
	std::cout << "after shell sort:\n";
	printVector(v);
}
int main()
{
	test01();
	system("pause");
	return 0;
}
#endif