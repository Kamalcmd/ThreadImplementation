**Programming Project #4**

INTRODUCTION

The goal of this programming project is to give the student practice of writing a C++ std::threads, using the
Singleton design pattern.
PROJECT TASKS
1. Read the problem definition below and write a C++ program that implements your solution. Readability of
   the program will be graded based on; 
   1. variable naming, 
   2. indentation, 
   3. There should be comments at the following points:
         1. At the beginning of the main to describe the purpose of the program
         2. In the header files: before every public method and class to describe task, parameters, return
         values.
         3. Throughout the code to discuss any complex logic. 
   4. spacing,
   5. consistency
   6. styling in general including choice of methods
   7. If a method overrides a base class method the override key word must be used.
2. Compile and test your program
3. Run the code and write test code.
4. All classes will be in separate cpp and h files.


***GOALS (or why are we doing this project)***


   The following are the things to be learned or show you have learned by this project.

    • The Singleton Pattern

    • Learning how to use C++ std::threads

    • Designing for testing.

   **PROBLEM**

   You are going to write a program using std::threads. Run the finished program ten or more times noting the
   number printed out. It should be 100, is it? Turn in the number you observed.

   **REQUIREMENT**

   Write a Class (lets call it Counter) using the Singleton pattern that keeps track of a integer counter.

    • The counter starts at zero and is incremented via a call to a method in the Singleton class, in this method
    after incrementing the counter sleep for 10 milisecountds. (#include <thread>)
    std::this_thread::sleep_for(std::chrono::milliseconds(10));

    • The class also has a method to let you get the current value of the counter (lets call the method int
    get() const;)

   **IncCounter**

    Create a class IncCounter with a method execute that will call Counter and increment it N times in a loop where
    N is a parameter of execute.

   
   **main**

    Create a function incCounter (in main.cpp) to call Counter and increment it 50 times in a loop.

    Create two threads one for the incCounter function and one for calling IncCounter::execute passing in 50

    When the two threads finish running get the current value of Counter and print it out.

    Run the program at least 15 times, noting the final value of Counter each time.



   **TESTING**

    Write a test class CounterTest using the Arrange/Act/Assert design.
    Call the test class from your main program
    Insure that it has the following test cases:
    Create Counter
    Increment Counter
    Get the current value of Counter, test for 1.
    Counter& instance1 = Counter::instance();
    Counter& instance2 = Counter::instance();
    Counter& instance3 = Counter::instance();
    Increment instance1
    Increment instance2
    Get the current value of Counter (from instance3), test for 3.
    Add some of your own test
   