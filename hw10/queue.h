/*
 * queue.h
 *
 *  Created on: Apr 9, 2017
 *      Author: Brian Clinkenbeard
 */

#ifndef QUEUE_H_
#define QUEUE_H_

#include <iostream>

template <class QueueTemplate>
class Queue {
public:
	/* constructor */
	Queue(int);
	/* copy constructor */
	Queue(const Queue<QueueTemplate> &copyQueue);
	/* destructor */
	~Queue();
	/* queue functions */
	void enqueue(QueueTemplate);
	QueueTemplate dequeue();
	QueueTemplate front();
	int size();
	bool isEmpty();
	bool isFull();
	void print();
private:
	QueueTemplate *queue;
	int max, first, back;
};

template <class QueueTemplate>
Queue<QueueTemplate>::Queue(int initMax)
{
	std::cout << "Creating new queue of size " << initMax << "..." << std::endl;
	try {
		if (initMax < 0) {
			throw initMax;
		}
	} catch (int e) {
		std::cout << "Max " << e << "is less than 0. Setting max to 1." << std::endl;
		initMax = 1;
	}

	max = initMax;
	first = 0;
	back = -1;
	queue = new QueueTemplate[max];
}

template <class QueueTemplate>
Queue<QueueTemplate>::Queue(const Queue<QueueTemplate> &copyQueue)
{
	std::cout << "Calling copy constructor..." << std::endl;
	max = copyQueue.max;
	first = copyQueue.first;
	back = copyQueue.back;
	queue = new QueueTemplate[max];
	/* copy all elements */
	for (int i = 0; i < max; ++i) {
		queue[i] = copyQueue.queue[i];
	}
}

template <class QueueTemplate>
Queue<QueueTemplate>::~Queue()
{
	delete [] queue;
}

template <class QueueTemplate>
void Queue<QueueTemplate>::enqueue(QueueTemplate toQueue)
{
	if (!isFull()) {
		if (back == max - 1)
			back = 0;
		else
			back++;

		queue[back] = toQueue;
	} else {
		std::cout << "The queue is full." << std::endl;
	}
}

template <class QueueTemplate>
QueueTemplate Queue<QueueTemplate>::dequeue()
{
	if (!isEmpty()) {
		QueueTemplate dequeued = queue[first];
		queue[first] = NULL;

		if (first == max - 1)
			first = 0;
		else
			first++;

		return dequeued;
	} else {
		std::cout << "The queue is empty." << std::endl;
	}
}

template <class QueueTemplate>
QueueTemplate Queue<QueueTemplate>::front()
{
	if (!isEmpty())
		return queue[first];
	else
		std::cout << "The queue is empty." << std::endl;
}

template <class QueueTemplate>
int Queue<QueueTemplate>::size()
{
	int count = 0;
	for (int i = 0; i < max; ++i) {
		if (queue[i] != NULL) {
			count++;
		}
	}

	return count;
}

template <class QueueTemplate>
bool Queue<QueueTemplate>::isEmpty()
{
	return (size() == 0);
}

template <class QueueTemplate>
bool Queue<QueueTemplate>::isFull()
{
	return (size() == max);
}

template <class QueueTemplate>
void Queue<QueueTemplate>::print()
{
	if (!isEmpty()) {
		std::cout << "Queue:";
		for (int i = 0; i < max; ++i) {
			if (queue[i] == NULL)
				std::cout << " -";
			else
				std::cout << " " << queue[i];
		}
		std::cout << std::endl;
	} else {
		std::cout << "The queue is empty." << std::endl;
	}
}

#endif /* QUEUE_H_ */
