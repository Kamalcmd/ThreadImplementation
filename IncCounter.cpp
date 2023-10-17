//
// Created by Kamal Ghimire on 10/13/23.
//

#include "IncCounter.h"
#include "Counter.h"

IncCounter::IncCounter(int n): n_(n) {}

void IncCounter::execute() {
    Counter& counter = Counter::getInstance();
    for(int count =0; count<n_; ++count){
        counter.incrementCounter();
    }

}
