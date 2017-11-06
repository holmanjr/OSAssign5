#include "Hash.h"

Hash::Hash() {}

void Hash::StoreDigit(int key, int value) {
	std::lock_guard<std::mutex> lock(mu);
	myHash[key] = value;
}

void Hash::DisplayDigits() {
	std::cout << std::endl;
	std::cout << "3.";
	for (int i = 1; i <= myHash.size(); i++) {
		std::cout << myHash[i];
	}
	std::cout << std::endl;
}