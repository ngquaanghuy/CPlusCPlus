#include <iostream>
#include <sycl/sycl.hpp>

using namespace std;
int main() {
    sycl::queue q;
    try {
        q = sycl::queue{sycl::cpu_selector_v};
        cout << "Using CPU: " << q.get_device().get_info<sycl::info::device::name>() << endl;
    } catch (...) {
        cout << "Fallback to CPU" << endl;
    }
    return 0;
}