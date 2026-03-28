#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

std::mutex m;
int counter = 0;

void t1() { //count up from 0
	for (int i = 0; i <=20; ++i) {
		{std::lock_guard<std::mutex> lock(m);
		counter = i;
		std::cout << "t1: " << counter << "\n";
		} //mutex unlock here automatically (out of scope)
		std::this_thread::sleep_for(std::chrono::milliseconds(50)); //pause for gradual counting
	}
}

void t2() {
	for (int i = 20; i >= 0; --i) {
		{std::lock_guard<std::mutex> lock(m);
		counter = i;
		std::cout << "t2: " << counter << "\n";
		} //mutex unlock here automatically (out of scope)
		std::this_thread::sleep_for(std::chrono::milliseconds(50)); //pause for gradual counting
	}
}

int main() {
	std::thread a(t1);
	a.join(); //waits until t1 finishes
	std::thread b(t2);
	b.join(); //waits until t2 finishes to exit
	return 0;
}
