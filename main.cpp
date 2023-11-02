#include <iostream>
#include "IncCounter.h"
#include "Counter.h"
#include "CounterTest.h"
#include <thread>

void incCounter(int n){
    Counter& counter = Counter::getInstance();
    for(int loopCounter=0; loopCounter<n; loopCounter++)
        counter.incrementCounter();
}
int main() {
    std::thread thread1(incCounter, 50);

    IncCounter inc;
    std::thread thread2(&IncCounter::execute, &inc,50);

    thread1.join();
    thread2.join();

    Counter& counter = Counter::getInstance();
    std::cout<<"Counter Value: "<<counter.get()<<std::endl;

     CounterTest test;
     bool allTestPassed = test.runAllTest();
     if(allTestPassed){
         std::cout<<"All test passed";
     }

    return 0;
}
