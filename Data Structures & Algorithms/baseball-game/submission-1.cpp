class Solution {
public:
    int calPoints(vector<string>& operations) {

    stack<string> st;

    for (int i = 0; i < operations.size(); i++) {

        if (operations[i] == "+") {

            int num1 = stoi(st.top());
            st.pop();
            int num2 = stoi(st.top());

            
            st.push(to_string(num1));

            
            st.push(to_string(num1 + num2));
        }

        else if (operations[i] == "C") {
            st.pop();
        }

        else if (operations[i] == "D") {
            int num = stoi(st.top());
            st.push(to_string(num * 2));
        }

        else {
            st.push(operations[i]);  
        }
    }


    int sum = 0;
    while (!st.empty()) {
        sum += stoi(st.top());
        st.pop();
    }

    return sum;
}
};