#include <iostream>

using namespace std;

static int add(int a, int b) {
    return a + b;
}

int main() {
    cout << add(100, 300) << endl;
    return 0;
}

// With static, it will limit your function to only the file containing it, even if you use extern, it will still report an error and be limited to the file containing it. This helps reduce function conflicts in large projects.