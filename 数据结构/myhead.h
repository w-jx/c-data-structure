#pragma once
#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <memory>
#include <set>
#include <map>
#include <list>
#include <functional>

using namespace std;

template<class T>
void printVector(vector<T> v) {
	for (auto iter : v) {
		cout << iter << " ";
	}
	cout << endl;
}

void printvectorvector(vector<vector<int>>& nums) {
	for (auto iter : nums) {
		for (auto iter2 : iter) {
			cout << iter2 << " ";
		}
	}
	cout << endl;;
}

void printChar(char ch) {
	cout << ch << " ";
}
//Definition for singly - linked list. leetcode�������㶨��
struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(NULL) {}

};
//����ͷ�ڵ�,��ӡ����
void printNode(ListNode* temp) {

	while (temp) {
		cout << temp->val << " ";
		temp = temp->next;
	}
	cout << endl;
}