#pragma once

//对应链表



//单链表节点的定义
template<class T>
struct Node
{
	Node() { link = nullptr; }
	Node(T e,Node *next):element(e),link(next){}
	T element;
	Node* link;
};