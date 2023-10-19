//
// Created by Kamal Ghimire on 10/13/23.
//

#include "CounterTest.h"
#include "Counter.h"
#include <iostream>

bool CounterTest::runAllTest() {
    bool allTestsPassed = true;

    if (!testCreateCounter()) {
        allTestsPassed = false;
        std::cout << "testCreateCounter failed" << std::endl;
    }

    if (!testIncrementCounter()) {
        allTestsPassed = false;
        std::cout << "testIncrementCounter failed" << std::endl;
    }

    if (!testGetCurrentValue()) {
        allTestsPassed = false;
        std::cout << "testGetCurrentValue failed" << std::endl;
    }

    // Add more test cases here and update allTestsPassed accordingly

    return allTestsPassed;
}

bool CounterTest::testCreateCounter() {
    Counter& instance = Counter::getInstance();
    return true;
}

bool CounterTest::testIncrementCounter() {
    Counter& instance1 = Counter::getInstance();
    Counter& instance2 = Counter::getInstance();

    instance1.incrementCounter();
    instance2.incrementCounter();

    // Increment two instances and check if the counter is 102 because counter was incremented 100 times before executing this test case
    return instance2.get() == 102;
}

bool CounterTest::testGetCurrentValue() {
    Counter& instance1 = Counter::getInstance();
    Counter& instance2 = Counter::getInstance();
    Counter& instance3 = Counter::getInstance();

    instance1.incrementCounter();
    instance2.incrementCounter();

    // Get the counter from instance3 and check if it's 104, because counter was incremented 102 times before executing this test case
    return instance3.get() == 104;
}





// Add more test methods as needed



