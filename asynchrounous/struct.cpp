#include <iostream>
#include <future>

using namespace std;

int main() {
    struct Worker {
        auto worker(int abc) {
            cout << "Number: " << abc << endl;
        }
    };

    Worker work;
    auto asyncc = async(launch::async, &Worker::worker, &work, 500);
    return 0;
}