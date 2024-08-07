

class Stack {
private:
    char* arr;         // Pointer to the array for storing stack elements
    int top;           // Index of the top element in the stack
    int capacity;      // Maximum capacity of the stack

public:
    // Constructor to initialize stack
    Stack(int size) {
        arr = new char[size];
        capacity = size;
        top = -1;
    }

    // Destructor to clean up memory
    ~Stack() {
        delete[] arr;
    }

    // Function to add an element to the stack
    void push(char value) {
        if (isFull()) {
            throw std::overflow_error("Stack Overflow");
        }
        arr[++top] = value;
    }

    // Function to remove an element from the stack
    char pop() {
        if (isEmpty()) {
            throw std::underflow_error("Stack Underflow");
        }
        return arr[top--];
    }

    // Function to get the top element of the stack
    char peek() const {
        if (isEmpty()) {
            throw std::underflow_error("Stack is Empty");
        }
        return arr[top];
    }

    // Function to check if the stack is empty
    bool isEmpty() const {
        return top == -1;
    }

    // Function to check if the stack is full
    bool isFull() const {
        return top == capacity - 1;
    }

    // Function to get the current size of the stack
    int size() const {
        return top + 1;
    }
};

class Solution {
public:
    bool isValid(string s) {
        // Create a stack with the maximum possible size, which is the length of the string
        Stack st(s.length());

        if (s.length() <= 1)
            return false;

        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else if (st.isEmpty()) {
                return false;
            } else {
                char top = st.peek();
                if ((top == '(' && c == ')') ||
                    (top == '{' && c == '}') ||
                    (top == '[' && c == ']')) {
                    st.pop();
                } else {
                    return false;
                }
            }
        }
        return st.isEmpty();
    }
};

