#include "TMonoStack.h"
using namespace std;

int main(int argc, char **argv) {
    TMonoStack<double> *doubleStack = new TMonoStack<double>('d');

    doubleStack->push(54.4);
    doubleStack->printStack();
    doubleStack->push(89.9);
    doubleStack->printStack();
    doubleStack->push(60.3);
    doubleStack->printStack();
    doubleStack->push(75.3);
    doubleStack->printStack();

    // TMonoStack<char> *charStack = new TMonoStack<char>('d');

    // try {
    //     charStack->push('g');
    //     charStack->printStack();
    //     charStack->push('f');
    //     charStack->printStack();
    //     charStack->push('e');
    //     charStack->printStack();
    //     charStack->push('d');
    //     charStack->printStack();
    //     charStack->push('c');
    //     charStack->printStack();
    //     charStack->push('b');
    //     charStack->printStack();
    //     charStack->push('a');
    //     charStack->printStack();
    //     charStack->push('h');
    //     charStack->printStack();



    //     cout << "Peek: " << charStack->peek() << endl;
    //     cout << "Popping: " << charStack->pop() << endl;
    //     cout << "Peek: " << charStack->peek() << endl;

    //     while(!charStack->isEmpty()) {
    //         cout << "Popping: " << charStack->pop() << endl;
    //     }

    //     cout << "Size: " << charStack->getSize() << endl;
    //     cout << "Popping: " << charStack->pop() << endl;

    // } catch(runtime_error &excpt) {
    //     cout << excpt.what() << endl;
    // }

    // cout << endl << endl;
}