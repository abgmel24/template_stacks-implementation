#ifndef MONOSTACK_TEMPLATE
#define MONOSTACK_TEMPLATE

#include <iostream>
#include <exception>

template <class T>
class TMonoStack {
    public:
        TMonoStack(char o) {
            size = 64;
            top = -1;
            array = new T[size];

            if(o == 'i') isIncreasing = true;
            else if(o == 'd') isIncreasing = false;
            else throw std::runtime_error("Stack has to be increasing (i) or decreasing (d)");
        }

        TMonoStack(int maxSize, char o) {
            size = maxSize;
            top = -1;
            array = new T[size];

            if(o == 'i') isIncreasing = true;
            else if(o == 'd') isIncreasing = false;
            else throw std::runtime_error("Stack has to be increasing (i) or decreasing (d)");          
        }

        ~TMonoStack() {
            std::cout << "garbage collection" << std::endl;
            delete[] array;
        }

        void push(T data) {
            if(isFull()) {
                throw std::runtime_error("Stack is full");
            }
            if(isEmpty()) {
                array[++top] = data;
                return;
            }

            while(isIncreasing && this->peek() >= data && getSize() > 0) { //comparable?
                this->pop();
            }
            while(!isIncreasing && this->peek() <= data && getSize() > 0) {
                this->pop();
            }

            array[++top] = data;
        }

        T pop() {
            if(isEmpty()) {
                throw std::runtime_error("Stack is empty, nothing to pop");
            }
            return array[top--];            
        }

        T peek() {
            return array[top];
        }

        int getSize() {
            return top + 1;
        }

        bool isFull() {
            return getSize() == size;
        }

        bool isEmpty() {
            return top == -1;
        }

        void printStack() {
            std::cout << "Stack: ";
            for(int i = top; i >= 0; i--) {
                std::cout << array[i] << " ";
            }
            std::cout << std::endl;
        }


    private:
        T *array;
        int size;
        int top;

        bool isIncreasing;
};

#endif