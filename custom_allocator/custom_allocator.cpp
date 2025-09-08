#include <iostream>
#include <vector>
#include <memory>

using namespace std;
template <typename T>
struct Allocator {
    using value_type = T;
    Allocator() = default;

    template<typename U>
    Allocator(const Allocator<U>&) {}

    T* allocate(size_t n) {
        cout << "[Allocator] Allocating " << n * sizeof(T) << " bytes" << endl;
        return static_cast<T*>(::operator new(n * sizeof(T)));
    }
    void deallocate(T* p, size_t n) {
        cout << "[Allocator] Deallocate " << n * sizeof(T) << " bytes" << endl;
        ::operator delete(p);
    }
};

template<class T, class U>
bool operator==(const Allocator<T>&, Allocator<U>&) {
    return true;
}


template <class T, class U>
bool operator!=(const Allocator<T>&, Allocator<U>&) {
    return false;
}

int main() {
    vector<int, Allocator<int>> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    return 0;
}