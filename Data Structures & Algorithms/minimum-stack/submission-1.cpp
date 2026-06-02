class MinStack {
    stack<int> st1;
    stack<int> stMin;

public:
    void push(int val) {
        st1.push(val);

        if (stMin.empty() || val <= stMin.top()) {
            stMin.push(val);
        }
    }

    void pop() {
        if (st1.top() == stMin.top()) {
            stMin.pop();
        }
        st1.pop();
    }

    int top() {
        return st1.top();
    }

    int getMin() {
        return stMin.top();   // ✅ O(1)
    }
};
