#pragma once

//��Ӧ����



//������ڵ�Ķ���
template<class T>
struct Node
{
	Node() { link = nullptr; }
	Node(T e,Node *next):element(e),link(next){}
	T element;
	Node* link;
};