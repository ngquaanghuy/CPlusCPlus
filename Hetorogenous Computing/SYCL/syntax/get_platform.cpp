#include <sycl/sycl.hpp>
#include <iostream>

using namespace std;

int main() {
    auto platforms = sycl::platform::get_platforms();
    for (auto& platform : platforms) {
        cout << "Platform: " << platform.get_info<sycl::info::platform::name>() << endl;
    }
    return 0;
}