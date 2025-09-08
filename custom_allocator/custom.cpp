#include <iostream>
#include <memory>

using namespace std;
template<typename T>
struct Allocator {
    using value_type = T;
    Allocator() = default;
    template<typename U> Allocator(const Allocator<U>&) {}
    T *allocate(size_t n)  {
        cout << "[Allocator] Allocating " << n * sizeof(T) << "bytes" << endl;
        return static_cast<T*>(::operator new(n * sizeof(T)));
    }

    void dellocate(T* p, size_t n) {
        cout << "[Allocator] Deallocatinng " << n * sizeof(T) << endl;
        ::operator delete(p);
    }
};

struct Data {
    int value;
    Data(int v) : value(v) {
        cout << "   -> Data: " << value << "Constructor" << endl;
    }
    ~Data() {
        cout << "   -> Data: " << value << "Destructor" << endl;
    }
};

int main() {
    Allocator<Data> allo;
    Data* data = allo.allocate(1);
    new (data) Data(10);
    data->value = 369;
    data->~Data();
    allo.dellocate(data, 1);
    return 0;
}