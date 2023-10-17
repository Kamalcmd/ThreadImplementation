#include <iostream>
#include "IncCounter.h"
#include "Counter.h"
#include "CounterTest.h"
#include <thread>

void incCounter(int n){
    IncCounter inc(n);
    inc.execute();
}
int main() {
//    std::thread thread1(incCounter, 50);
//
//    IncCounter inc(50);
//    std::thread thread2(&IncCounter::execute, &inc);
//
//    thread1.join();
//    thread2.join();
//
//    Counter& counter = Counter::getInstance();
//    std::cout<<"Counter Value: "<<counter.get()<<std::endl;
//    std::cout << "Hello, World!" << std::endl;

     CounterTest test;
     bool allTestPassed = test.runAllTest();

 if (allTestPassed) {
        std::cout << "All tests passed!" << std::endl;

        std::thread thread1(incCounter, 50);

        IncCounter inc(50);
        std::thread thread2(&IncCounter::execute, &inc);

        thread1.join();
        thread2.join();

        Counter& counter = Counter::getInstance();
        std::cout << "Counter value: " << counter.get() << std::endl;
    } else {
        std::cout << "Some tests failed. Aborting." << std::endl;
    }
//

    return 0;
}
