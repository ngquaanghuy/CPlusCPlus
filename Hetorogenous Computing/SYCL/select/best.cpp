#include <sycl/sycl.hpp>
#include <iostream>

using namespace std;

int main() {
    sycl::queue q;
    q = sycl::queue{sycl::default_selector_v};
    cout << "Best: " << q.get_device().get_info<sycl::info::device::name>() << endl;
    return 0;
}