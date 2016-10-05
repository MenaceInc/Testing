#include <iostream>
#include <vector>
#include <thread>
#include <mutex>

using std::cout;
using std::endl;
using std::vector;
using std::thread;
using std::string;
using std::to_string;
using std::mutex;

mutex mtx;

void printString(string output) {
    mtx.lock();
    cout << output << endl;
    mtx.unlock();
}

int main() {
    vector<thread> workers;

    for (int i = 0; i < 20; i++) {
        workers.emplace_back(thread(printString, "This is thread " + to_string(i)));
    }

    for (auto &a: workers) {
        a.join();
    }

    return 0;
}
