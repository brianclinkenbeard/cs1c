/*
 * main.cpp
 *
 *  Created on: Feb 14, 2017
 *      Author: Brian Clinkenbeard
 */

#include "equipment.h"

int main()
{
	const double TAX = 0.0825;

	brian::Equipment stock[5];
	stock[0] = brian::Equipment("Nike basketball shoes", 52);
	stock[1] = brian::Equipment("Under Armour T-shirt", 23);
	stock[2] = brian::Equipment("Brooks running shoes", 8);
	stock[3] = brian::Equipment("Asics running shoes", 21);
	stock[4] = brian::Equipment("Under Armour shorts", 88);
	brian::Equipment stockCopy[5] = stock; /* to print stock before and after */

	/* 3. */
	brian::Equipment *receipt = new brian::Equipment[0];
	int receiptSize = 0;

	int choice;
	while (choice != 6) {
		std::cout << "Items available:" << std::endl;
		/* print items in stock */
		for (int i = 0; i < 5; ++i) {
			std::cout << i + 1 << ". " << std::setw(23) << stock[i].getName() << ": " << std::setw(8)
			<< stock[i].getCost() << " (Stock: " << stock[i].getQuantity() << ")" << std::endl;
		}
		std::cout << "Press 6 to conclude your purchase." << std::endl;

		/* get user input */
		std::cin >> choice;

		if (choice >= 0 && choice <= 5) {
			int purchaseCount;
			std::cout << "Enter the quantity you would like to purchase:" << std::endl;
			std::cin >> purchaseCount;

			if (purchaseCount > 0) {
				/* check if enough in stock */
				if (stock[choice - 1].getQuantity() - purchaseCount >= 0) {
					/* copy elements and increase receipt size*/
					brian::Equipment *tempReceipt = receipt;
					receipt = new brian::Equipment[receiptSize + 1];
					for (int i = 0; i < receiptSize; ++i) {
						receipt[i] = tempReceipt[i];
					}
					++receiptSize;

					/* free old receipt memory */
					delete[] tempReceipt;

					/* add new item */
					stock[choice - 1].sell(purchaseCount);
					receipt[receiptSize - 1] = brian::Equipment(stock[choice - 1].getName(), purchaseCount);
				} else {
					std::cout << "There are not enough of this item in stock." << std::endl;
				}
			} else {
				std::cin.clear();
				std::cin.ignore(256, '\n');
				std::cout << "Invalid quantity." << std::endl;
			}
		} else if (choice != 6) {
			std::cin.clear();
			std::cin.ignore(256, '\n');
			std::cout << "Invalid option." << std::endl;
		}
	}

	/* 2. */
	std::cout << std::endl << "INVENTORY:" << std::endl << "Before:" << std::endl;
	/* original stock */
	for (int i = 0; i < 5; ++i) {
		std::cout << std::setw(2) << stockCopy[i].getQuantity() << " * " << stockCopy[i].getName() << std::endl;
	}
	/* after purchase */
	std::cout << "After:" << std::endl;
	for (int i = 0; i < 5; ++i) {
		std::cout << std::setw(2) << stock[i].getQuantity() << " * " << stock[i].getName() << std::endl;
	}

	/* 1. */
	std::cout << std::endl << "RECEIPT:" << std::endl;
	/* list purchases */
	for (int i = 0; i < receiptSize; ++i) {
		std::cout << receipt[i].getQuantity() << " *" << std::setw(23) << receipt[i].getName()
				<< std::setw(8) << receipt[i].getCost() << ":" << std::fixed
				<< std::setw(8) << std::setprecision(2) << receipt[i].getTotal() << std::endl;
	}
	/* grand total */
	double subtotal;
	for (int i = 0; i < receiptSize; ++i) {
		subtotal += receipt[i].getTotal();
	}
	double receiptTax = subtotal * TAX;
	std::cout << "Subtotal:    " << std::fixed << std::setprecision(2) << subtotal << std::endl << "Tax:       + "
			<< std::fixed << std::setprecision(2) << receiptTax << std::endl << "           ----------" << std::endl
			<< "Total:       " << std::fixed << std::setprecision(2) << subtotal + receiptTax << std::endl;

	/* free memory */
	delete[] receipt;

	return 0;
}
