#if 1
#include <iostream>
#include <vector>
using namespace std;

//
//对于一个由两个有序数组组成的数组,例如,1,3,5,7,9 |2,4,6,8,10,整理成一个有序数组
//参数是数组名,最左边下标,中间下标,右边下标,这样的好处是方便后边合并无序数组可以调用
void merge_two_array(vector<int> & nums,int left,int mid,int right)
{
	vector<int> v;//新数组
	auto ptr = make_shared<int[]>(10,0);
	int i = left;
	int k = 0;
	int j = mid+1;
 

	while (i <= mid && j <= right)
	{
		if (nums[i] < nums[j])
			ptr[k++] = nums[i++];
		else
			ptr[k++] = nums[j++];
	}

	while (i <= mid)
		ptr[k++] = nums[i++];
	while (j <= right)
		ptr[k++] = nums[j++];

	for (int i = 0; i < 10; i++)
	{
		cout << ptr[i] << " ";

	}
	cout << endl;

}

void test01()
{
	auto p = [=](vector<int>& v) {
		for (auto iter : v)
		{
			cout << iter << " ";
		}
		cout << endl;
	};
	vector<int> nums{ 1,3,5,7,9,12,14,16,18,20 };
	

	merge_two_array(nums, 0, 4, 9);

	//p(nums);



}
int main()
{
	test01();
	
	system("pause");
	return 0;
}
#endif