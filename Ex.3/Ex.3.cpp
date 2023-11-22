#include <iostream>
#include <string>
#include <stack>
#include <cctype>

using namespace std;

int getPrecedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

double applyOp(double a, double b, char op) {
    switch (op) {
    case '+': return a + b;
    case '-': return a - b;
    case '*': return a * b;
    case '/': return a / b;
    }
    return 0;
}

double evaluate(string expression) {
    stack<double> values;
    stack<char> ops;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == ' ') {
            continue;
        }
        else if (isdigit(expression[i])) {
            string val = "";
            while (i < expression.length() && (isdigit(expression[i]) || expression[i] == '.')) {
                val += expression[i];
                i++;
            }
            values.push(stod(val));
            i--;
        }
        else if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/') {
            while (!ops.empty() && getPrecedence(ops.top()) >= getPrecedence(expression[i])) {
                double val2 = values.top();
                values.pop();

                double val1 = values.top();
                values.pop();

                char op = ops.top();
                ops.pop();

                values.push(applyOp(val1, val2, op));
            }
            ops.push(expression[i]);
        }
    }

    while (!ops.empty()) {
        double val2 = values.top();
        values.pop();

        double val1 = values.top();
        values.pop();

        char op = ops.top();
        ops.pop();

        values.push(applyOp(val1, val2, op));
    }

    return values.top();
}

int main() {
    string expression1 = "2 + 3 * 4 - 6 / 2";
    string expression2 = "2 * 3 + 4 - 6 / 2";
    std::cout << "Expression 1: " << expression1 << std::endl;
    std::cout << "Result: " << evaluate(expression1) << std::endl;
    std::cout << "Expression 2: " << expression2 << std::endl;
    std::cout << "Result: " << evaluate(expression2) << std::endl;
    return 0;
}