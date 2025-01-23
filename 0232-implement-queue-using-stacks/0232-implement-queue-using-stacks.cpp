#include <iostream>
#include <queue>
#include <vector>
#include <string>

using namespace std;


class MyQueue {
public:
    
    void push(int val) {
        q.push(val);
    }

    
    int pop() {
        if (q.empty()) {
            throw runtime_error("Queue is empty");
        }
        int front = q.front();
        q.pop();
        return front;
    }

   
    bool empty() {
        return q.empty();
    }

    
    int peek() {
        if (q.empty()) {
            throw runtime_error("Queue is empty");
        }
        return q.front();
    }

private:
    queue<int> q;  
};

// A helper function that works with MyQueue
string __helperSelectMethod__(const string& method, const vector<string>& params_cur, MyQueue* obj) {
    if (method == "push") {
        int value = stoi(params_cur[0]);
        obj->push(value);
        return "Value pushed: " + to_string(value);
    }
    else if (method == "pop") {
        try {
            int poppedValue = obj->pop();
            return "Popped value: " + to_string(poppedValue);
        }
        catch (const runtime_error& e) {
            return string("Error: ") + e.what();
        }
    }
    else if (method == "empty") {
        return obj->empty() ? "Queue is empty" : "Queue is not empty";
    }
    else if (method == "peek") {
        try {
            int frontValue = obj->peek();
            return "Front value: " + to_string(frontValue);
        }
        catch (const runtime_error& e) {
            return string("Error: ") + e.what();
        }
    }
    else {
        return "Unknown method";
    }
}