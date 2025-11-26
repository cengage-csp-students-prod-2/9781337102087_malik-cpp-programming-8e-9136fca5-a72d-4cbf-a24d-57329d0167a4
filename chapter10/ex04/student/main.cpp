// Main program

#include <iostream>

using namespace std;

class counterType {
 private:
  int counter;

 public:
  counterType(int initialValue) { counter = initialValue; };
  counterType() { counter = 0; };
  void print();
  int incrementCounter();
  int decrementCounter();
  int setCounter(int newValue);
  int getCounter();
};

void counterType::print() { cout << counter << endl; }

int counterType::incrementCounter() {
  counter++;
  return counter;
}

int counterType::decrementCounter() {
  counter--;
  return counter;
}

int counterType::setCounter(int newValue) {
    counter = newValue;
    return counter;
}

int counterType::getCounter() { return counter; }

int main() {
  counterType counter1;
  counterType counter2(5);

  counter1.print();

  cout << endl;

  counter1.incrementCounter();
  cout << "After Increment counter1: " << counter1.getCounter() << endl;

  cout << "Counter2 = " << counter2.getCounter() << endl;

  counter2.decrementCounter();
  cout << "After decrement counter2 = " << counter2.getCounter() << endl;

  counter1.setCounter(-6);
  cout << "After resetting counter1: " << counter1.getCounter() << endl;

  return 0;
}
