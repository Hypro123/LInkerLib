#pragma once
#include "ListNode.h"

template
<typename T>
class LinkedList
{
public:
	LinkedList()
	{
		start = new ListNode<T>();
		end = new ListNode<T>();

		start->next = end;
		start->prev = nullptr;

		end->next = nullptr;
		end->prev = start;
	}

	~LinkedList()
	{
		delete start;
		delete end;
	}

	void insert(T value, ListNode<T>* prev, ListNode<T>* next)
	{
		ListNode<T> NewNode = new ListNode<T>();
		
		NewNode->Data = value;
		
		NewNode->next = next;
		NewNode->prev = prev;
		
		prev->next = NewNode;
		next->prev = NewNode;
		NewNode->prev = prev;
	}

	void pushBack(T value)
	{
		insert(value, end->prev, end);
	}

	void pushFront(T value)
	{
		insert(value, start, start->next);
	}

	void IndexInsert(T value, int index)
	{
		ListNode<T> NewNode = new ListNode<T>();
		NewNode->next = T
	}
	
	ListNode<T>* start;
	ListNode<T>* end;
};