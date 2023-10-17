//
// Created by Kamal Ghimire on 10/13/23.
//

#include "Counter.h"

Counter &Counter::getInstance() {
    static Counter instance;
    return instance;
}

void Counter::incrementCounter() {
    counter_ ++;

}

int Counter::get() const {
    return counter_;
}

//Counter::Counter() {

//}
