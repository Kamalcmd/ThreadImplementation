//
// Created by Kamal Ghimire on 10/13/23.
//

#include "IncCounter.h"
#include "Counter.h"

IncCounter::IncCounter(){}

void IncCounter::execute(int n) {
    Counter& counter = Counter::getInstance();
    for(int count =0; count<n; ++count){
        counter.incrementCounter();
    }

}
