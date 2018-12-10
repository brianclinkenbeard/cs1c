/*
 * main.cpp
 *
 *  Created on: May 17, 2017
 *      Author: Brian Clinkenbeard
 */

#include "list.h"

int main()
{
	std::cout << "WITH INTS:" << std::endl;
	List<int> list1;
	List<int> list2;

	/* 1 */
	list1.add(88);
	list1.add(78);
	list1.add(62);
	list1.add(123);
	list1.add(60);

	std::cout << "Part 1:" << std::endl;
	list1.print();

	/* 2 */
	/* reverse list1 */
	for (int i = list1.getSize() - 1; i >= 0; --i) {
		list2.add(list1.getIndex(i));
	}

	std::cout << "Part 2:" << std::endl;
	list2.print();

	/* 3 */
	list1.deleteIndex(2);
	list2.deleteIndex(2);

	std::cout << "Part 3:" << std::endl;
	list1.print();
	list2.print();

	/* 4 */
	list1.insert(2, 70);
	list2.insert(2, 70);

	std::cout << "Part 4:" << std::endl;
	list1.print();
	list2.print();

	/* 5 */
	std::cout << std::endl << "WITH DOUBLES:" << std::endl;
	List<double> list3;
	List<double> list4;

	list3.add(88.1);
	list3.add(78.1);
	list3.add(62.1);
	list3.add(123.1);
	list3.add(60.1);

	std::cout << "Part 1:" << std::endl;
	list3.print();

	for (int i = list3.getSize() - 1; i >= 0; --i) {
		list4.add(list3.getIndex(i));
	}

	std::cout << "Part 2:" << std::endl;
	list4.print();

	list3.deleteIndex(2);
	list4.deleteIndex(2);

	std::cout << "Part 3:" << std::endl;
	list3.print();
	list4.print();

	list3.insert(2, 70.1);
	list4.insert(2, 70.1);

	std::cout << "Part 4:" << std::endl;
	list3.print();
	list4.print();

	return 0;
}
