#include "Queue.h"

Queue::Queue() {
	for (int i = 1; i <= 1000; i++) {
		q.push(i);
	}
}

int Queue::GetDigit() {
	std::lock_guard<std::mutex> lock(mu);
	int temp = q.front();
	q.pop();
	return temp;
}

bool Queue::Empty() { return q.empty(); }