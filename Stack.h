#include<iostream>

#ifndef Stack_H
#define Stack_H

template <typename T>
class Node
{
public:

	T data;
	Node<T>* next;

	Node()
	{
		next = nullptr;
		data = 0;
	}
};


template <typename T>
class Stack
{
private:
	Node<T> * head;
	int numnodes;
public:
	Stack();
	Stack(const Stack& l);
	Stack(Node<T> * node);
	int size()const;
	void printList()const;
	bool isEmpty()const;
	void push(T item);
	T pop();
	T peak()const;
};

template<typename T>
bool Stack<T>::isEmpty()const
{
	return numnodes == 0;
}
template <typename T>
Stack<T>::Stack()
{
	head = nullptr;
	numnodes = 0;
}
template<typename T>
Stack<T>::Stack(const Stack& l)
{
	if (l.head == nullptr)
	{
		head = nullptr;
		numnodes = 0;
	}
	    
	else
	{
		numnodes = 0;
		Node<T>* p = l.head;
		head = nullptr;
		Node<T>* current = head;
		while (p)
		{
			Node<T>* newNode = new Node;
			newNode->data = p->data;
			newNode->next = nullptr;
			current = newNode;
			p = p->next;
			++numnodes;
		}
	}
}
template<typename T>
Stack<T>::Stack(Node<T>* node)
{
	head = node;
	head->next = nullptr;
	numnodes = 1;
}
template <typename T>
int Stack<T>::size()const
{
	return numnodes;
}
template<typename T>
void Stack<T>::printList()const
{
	if (head == nullptr)
		std::cout << "the list is empty\n";
	else
	{
		Node<T>* current = head;
		while (current)
		{
			std::cout << current->data << "\t";
			current = current->next;
		}
		std::cout << "\n";
	}
}
template<typename T>
void Stack<T>::push(T item)
{
	
		Node<T>* newNode = new Node<T>;
		newNode->data = item;
		if(head==nullptr)
		{
			head = newNode;
			newNode->next = nullptr;
		}
		else
		{
			
			newNode->next = head;
			head = newNode;

	     }
		++numnodes;
}
template<typename T>
T Stack<T>::pop()
{
	if (head == nullptr)
		std::cout << "The list is empty\n";
	else
	{
	    Node<T>* top = head;
		head = head->next;
		T item = top->data;
		delete top;
		--numnodes;
		return item;
	}
}
template <typename T>
T Stack<T>::peak()const
{
	if (head == nullptr)
		std::cout << "The list is empty\n";
	else
		return head->data;

}
#endif