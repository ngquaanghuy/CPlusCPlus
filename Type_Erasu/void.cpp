#include <iostream>

using namespace std;

class Hoder {
    void* data;
    type_info const* type;

    public:
        template<typename T> Hoder(T const& value) : data(new T(value)), type(&typeid(T)) {}
        template<typename T>
        T* get() {
            if (typeid(T) == *type) {
                return static_cast<T*>(data);
            }
            return nullptr;
        }
        ~Hoder() {};
};