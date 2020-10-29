#if 0
#include <iostream>
#include <vector>
using namespace std;

//����һ������������������ɵ�����,����,1,3,5,7,9 |2,4,6,8,10,�����һ����������
//������������,������±�,�м��±�,�ұ��±�,�����ĺô��Ƿ����ߺϲ�����������Ե���
void merge_two_array(vector<int> & nums,int l,int m,int r)
{
	if(nums.empty()) return;
	vector<int> v;
	auto left = l;
	auto right = m+1;
	

	while (left <= m && right <= r)
	{
		if (nums[left] <= nums[right]) {
			v.push_back(nums[left]);
			left++;
		}
		else {
			v.push_back(nums[right]);
			right++;
		}

	}
	while (right <= r) {
		v.push_back(nums[right]);
		right++;
	}

	while (left <= l) {
		v.push_back(nums[left]);
		left++;
	}

	v.swap(nums);

}

//�鲢����,a�����׵�ַ
//l:���Ԫ���±�  m:�м�Ԫ���±�   r:�ұ�Ԫ���±�
void merge_sort(int* a, int l, int m, int r)
{
	/*
	���һ��:l-----m
	�ұ�һ��:m+1---r
	*/
	//1.׼����ʱ����
	int len = r - l + 1;
	int* pTemp = new int[len];
	int k = 0;//��ʱ�����±�
	int left = l;//��������һ��Ԫ���±�
	int right = m + 1;//�ұ�����Ԫ���±�
	//2.���������ԭ���������ʱ������
	//2.1ͨ��ѭ������һ��,����һ���п��ܷ�����Ҳ����û����
	while (left <= m && right <= r)
	{
		if (a[left] < a[right])
			pTemp[k++] = a[left++];
		else
			pTemp[k++] = a[right++];
	}
	//2.2��û�з���� ������	
	while (right <= r)
		pTemp[k++] = a[right++];
	while (left <= m)
		pTemp[k++] = a[left++];
	//3.���ݴ���ʱ���鿽����ԭ����,�ͷ���ʱ�����ڴ�
	memcpy(a + l, pTemp, sizeof(int) * len);
	delete[]pTemp;
	pTemp = NULL;
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
	vector<int> nums{ 1,3,5,7,9,2,4,6,8,10 };
	p(nums);

	merge_two_array(nums, 0, 5, 9);

	p(nums);



}
void test02()
{

	
	int arr[]{ 1,10,6,14,20,18,7,40,20 ,43};
	int arr2[]{1,3,5,7,9,2,4,6,8,10 };

	merge_sort(arr2, 0, 5, 10);

	for (auto iter : arr2)
	{
		std::cout << iter << " ";
	}
	cout << endl;
}
int main()
{
	//test01();
	test02();//֮ǰ�ĺϲ������������ ����,��������ָ������
	system("pause");
	return 0;
}
#endif