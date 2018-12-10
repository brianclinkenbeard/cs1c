/*
 * list.cpp
 *
 *  Created on: May 17, 2017
 *      Author: Brian Clinkenbeard
 */

#ifndef LIST_H_
#define LIST_H_

#include "header.h" /* NULL */

template<class T>
struct item {
	T data;
	item *next;
};

template<class T>
class List {
public:
	List();
	~List();
	void add(const T&);
	void insert(int, const T&);
	void deleteIndex(int);
	int getSize();
	T getIndex(int);
	bool isEmpty();
	void print();
private:
	item<T> *first;
	item<T> *last;
	int size;
};

template<class T>
List<T>::List()
{
	first = NULL;
	last = NULL;
	size = 0;
}

template<class T>
List<T>::~List()
{
	item<T> *currentItem;
	item<T> *tempItem = first;

	for (int i = 0; i < size; ++i) {
		currentItem = tempItem->next;
		delete tempItem;
		tempItem = currentItem;
	}
}

template<class T>
void List<T>::add(const T& newData)
{
	item<T> *newItem = new item<T>;

	newItem->data = newData;
	newItem->next = NULL;

	if (size == 0)
		first = newItem;
	else
		last->next = newItem;

	last = newItem;

	size++;
}

template<class T>
void List<T>::insert(int index, const T& newData)
{
	/* get one node before index */
	item<T> *currentItem = first;
	for (int i = 0; i < index - 1; ++i) {
		currentItem = currentItem->next;
	}

	item<T> *newItem = new item<T>;
	newItem->data = newData;
	newItem->next = currentItem->next;

	currentItem->next = newItem;

	size++;
}

template<class T>
void List<T>::deleteIndex(int index)
{
	if (index == 0 && size == 1) {
		delete first;
		first = NULL;
		last = NULL;
		size--;
		return;
	}

	/* get one node before index */
	item<T> *currentItem = first;
	item<T> *deleteItem;
	for (int i = 0; i < index - 1; ++i) {
		currentItem = currentItem->next;
	}

	deleteItem = currentItem->next;
	currentItem->next = deleteItem->next;
	delete deleteItem;

	size--;
}

template<class T>
int List<T>::getSize()
{
	return size;
}

template<class T>
T List<T>::getIndex(int index)
{
	item<T> *currentItem = first;
	for (int i = 0; i < index; ++i) {
		currentItem = currentItem->next;
	}

	return currentItem->data;
}

template<class T>
void List<T>::print()
{
	item<T> *currentItem = first;
	for (int i = 0; i < size; ++i) {
		if (currentItem != first)
			std::cout << " ";

		std::cout << currentItem->data;
		currentItem = currentItem->next;
	}

	std::cout << std::endl;
}


#endif /* LIST_H_ */
