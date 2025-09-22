#include <sycl/sycl.hpp>
#include <iostream>

using namespace std;

int main() {
    sycl::queue q;
    try {
        q = sycl::queue{sycl::gpu_selector_v};
        cout << "Using GPU: " << q.get_device().get_info<sycl::info::device::name>() << endl;
    } catch (...) {
        q = sycl::queue{sycl::default_selector_v};
        cout << "Fallback to GPU" << endl;
        cout << "Default: " << q.get_device().get_info<sycl::info::device::name>() << endl;
    }
    return 0;
}