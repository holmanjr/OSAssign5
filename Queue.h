#ifndef QUEUE_H
#define QUEUE_H

#include <queue>
#include <mutex>

class Queue {
	std::queue<int> q;
	std::mutex mu;

public:
	Queue();
	int GetDigit();
	bool Empty();
};

#endif