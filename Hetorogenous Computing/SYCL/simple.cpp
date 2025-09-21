#include <sycl/sycl.hpp>
#include <iostream>

using namespace std;
int main() {
    sycl::queue q;
    try {
        q = sycl::queue{sycl::gpu_selector_v};
        cout << "Using GPU: " << q.get_device().get_info<sycl::info::device::name>() << endl;
    } catch (...) {
        cout << "Fallback to GPU" << endl;
        q = sycl::queue{sycl::cpu_selector_v};
        cout << "Using CPU: " << q.get_device().get_info<sycl::info::device::name>() << endl;
    }
    return 0;
}