#ifndef HASH_H
#define HASH_H

#include <unordered_map>
#include <mutex>
#include <iostream>

class Hash {
	std::unordered_map<int, int> myHash;
	std::mutex mu;

public:
	Hash();
	void StoreDigit(int, int);
	void DisplayDigits();
};

#endif