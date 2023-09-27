#include "TStack.h"
using namespace std;

int main(int argc, char **argv) {
    TStack<char> *charStack = new TStack<char>();

    try {
        charStack->push('p');
        charStack->push('o');
        charStack->push('t');
        charStack->push('a');
        charStack->push('t');
        charStack->push('o');
        charStack->push('e');
        charStack->push('s');

        cout << "Peak: " << charStack->peek() << endl;
        cout << "Popping: " << charStack->pop() << endl;
        cout << "Peak: " << charStack->peek() << endl;

        while(!charStack->isEmpty()) {
            cout << "Popping: " << charStack->pop() << endl;
        }

        cout << "Size: " << charStack->getSize() << endl;
        cout << "Popping: " << charStack->pop() << endl;

    } catch(runtime_error &excpt) {
        cout << excpt.what() << endl;
    }

    cout << endl << endl;

    TStack<int> *intStack = new TStack<int>();

    try {
        intStack->push(0);
        intStack->push(1);
        intStack->push(2);
        intStack->push(3);
        intStack->push(4);
        intStack->push(5);
        intStack->push(6);
        intStack->push(7);

        cout << "Peak: " << intStack->peek() << endl;
        cout << "Popping: " << intStack->pop() << endl;
        cout << "Peak: " << intStack->peek() << endl;

        while(!intStack->isEmpty()) {
            cout << "Popping: " << intStack->pop() << endl;
        }

        cout << "Size: " << intStack->getSize() << endl;
        cout << "Popping: " << intStack->pop() << endl;

    } catch(runtime_error &excpt) {
        cout << excpt.what() << endl;
    }
}