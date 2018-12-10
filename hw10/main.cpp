/*
 * main.cpp
 *
 *  Created on: Apr 9, 2017
 *      Author: Brian Clinkenbeard
 */

#include "header.h"
#include "queue.h"

int main()
{
	/* B. */
	std::cout << "Character queue:" << std::endl;
	Queue<char> charQueue(7);

	std::cout << "Enqueuing chars 'a' through 'f'..." << std::endl;
	for (int i = 97; i < 103; ++i) {
		charQueue.enqueue(static_cast<char>(i));
		charQueue.print();
	}

	std::cout << "Dequeuing 3 times..." << std::endl;
	for (int i = 0; i < 3; ++i) {
		charQueue.dequeue();
		charQueue.print();
	}

	std::cout << "Enqueuing chars 'g' through 'j'..." << std::endl;
	for (int i = 103; i < 107; ++i) {
		charQueue.enqueue(static_cast<char>(i));
		charQueue.print();
	}


	/* E. 1. isEmpty fail */
	charQueue.isEmpty() ? std::cout << "Empty" : std::cout << "Not empty";
	std::cout << std::endl;

	std::cout << "Dequeuing 8 times..." << std::endl;
	for (int i = 0; i < 8; ++i) {
		charQueue.dequeue();
		charQueue.print();
	}
	/* E. 1. isEmpty pass */
	charQueue.isEmpty() ? std::cout << "Empty" : std::cout << "Not empty";
	std::cout << std::endl;

	std::cout << std::endl;

	/* C. */
	std::cout << "Integer queue:" << std::endl;
	Queue<int> intQueue(7);

	std::cout << "Enqueuing 1 through 6..." << std::endl;
	for (int i = 1; i < 7; ++i) {
		intQueue.enqueue(i);
		intQueue.print();
	}


	std::cout << "Dequeuing twice..." << std::endl;
	for (int i = 0; i < 2; ++i) {
		intQueue.dequeue();
		intQueue.print();
	}


	std::cout << "Enqueuing 7 through 9..." << std::endl;
	for (int i = 7; i < 10; ++i) {
		intQueue.enqueue(i);
		intQueue.print();
	}

	/* E. 1. isFull pass */
	intQueue.isFull() ? std::cout << "Full" : std::cout << "Not full";
	std::cout << std::endl;

	std::cout << "Dequeuing 5 times..." << std::endl;
	for (int i = 0; i < 5; ++i) {
		intQueue.dequeue();
		intQueue.print();
	}
	/* E. 1. isFull fail */
	intQueue.isFull() ? std::cout << "Full" : std::cout << "Not full";
	std::cout << std::endl;

	std::cout << std::endl;

	/* D. */
	std::cout << "Double queue:" << std::endl;
	Queue<double> doubleQueue(7);

	std::cout << "Enqueuing 1.1 through 6.6..." << std::endl;
	for (double i = 1.1; i < 7; i += 1.1) {
		doubleQueue.enqueue(i);
		doubleQueue.print();
	}

	std::cout << "Dequeuing once..." << std::endl;
	doubleQueue.dequeue();
	doubleQueue.print();

	std::cout << "Enqueuing 7.7 through 8.8..." << std::endl;
	for (double i = 7.7; i < 9; i += 1.1) {
		doubleQueue.enqueue(i);
		doubleQueue.print();
	}

	std::cout << "Dequeuing 5 times..." << std::endl;
	for (int i = 0; i < 5; ++i) {
		doubleQueue.dequeue();
		doubleQueue.print();
	}

	/* E. 2. */
	std::cout << "Front: " << doubleQueue.front() << std::endl;

	/* E. 3. */
	std::cout << "Testing copy constructor with second double queue..." << std::endl;
	Queue<double> newQueue = doubleQueue;

	std::cout << std::endl << std::endl;

	/* F. */
	std::cout << "EXTRA CREDIT" << std::endl;

	/* F. B. */
	std::cout << "Character queue:" << std::endl;
	std::queue<char> ecCharQueue;

	/* F. E. 1. isEmpty pass */
	ecCharQueue.empty() ? std::cout << "Empty" : std::cout << "Not empty";
	std::cout << std::endl;

	std::cout << "Enqueuing chars 'a' through 'f'..." << std::endl;
	for (int i = 97; i < 103; ++i) {
		ecCharQueue.push(static_cast<char>(i));
	}

	std::cout << "Dequeuing 3 times..." << std::endl;
	for (int i = 0; i < 3; ++i) {
		ecCharQueue.pop();
	}

	std::cout << "Enqueuing chars 'g' through 'j'..." << std::endl;
	for (int i = 103; i < 107; ++i) {
		ecCharQueue.push(static_cast<char>(i));
	}


	/* F. E. 1. empty fail */
	ecCharQueue.empty() ? std::cout << "Empty" : std::cout << "Not empty";
	std::cout << std::endl;

	std::cout << "Dequeuing 8 times..." << std::endl;
	for (int i = 0; i < 8; ++i) {
		ecCharQueue.pop();
	}

	std::cout << std::endl;

	/* F. C. */
	std::cout << "Integer queue:" << std::endl;
	std::queue<int> ecIntQueue;

	std::cout << "Enqueuing 1 through 6..." << std::endl;
	for (int i = 1; i < 7; ++i) {
		ecIntQueue.push(i);
	}

	std::cout << "Dequeuing twice..." << std::endl;
	for (int i = 0; i < 2; ++i) {
		ecIntQueue.pop();
	}

	std::cout << "Enqueuing 7 through 9..." << std::endl;
	for (int i = 7; i < 10; ++i) {
		ecIntQueue.push(i);
	}

	std::cout << "Dequeuing 5 times..." << std::endl;
	for (int i = 0; i < 5; ++i) {
		ecIntQueue.pop();
	}

	std::cout << std::endl;

	/* F. D. */
	std::cout << "Double queue:" << std::endl;
	std::queue<double> ecDoubleQueue;

	std::cout << "Enqueuing 1.1 through 6.6..." << std::endl;
	for (double i = 1.1; i < 7; i += 1.1) {
		ecDoubleQueue.push(i);
	}

	std::cout << "Dequeuing once..." << std::endl;
	ecDoubleQueue.pop();

	std::cout << "Enqueuing 7.7 through 8.8..." << std::endl;
	for (double i = 7.7; i < 9; i += 1.1) {
		ecDoubleQueue.push(i);
	}

	std::cout << "Dequeuing 5 times..." << std::endl;
	for (int i = 0; i < 5; ++i) {
		ecDoubleQueue.pop();
	}

	/* F. E. 2. */
	std::cout << "Front: " << ecDoubleQueue.front() << std::endl;

	/* F. E. 3. */
	std::cout << "Testing copy constructor with second double queue..." << std::endl;
	std::queue<double> ecNewQueue = ecDoubleQueue;

	return 0;
}
