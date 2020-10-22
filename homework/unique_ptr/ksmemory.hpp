

namespace ks{

template<typename T>
class unique_ptr{
public:
    unique_ptr(T* ptr = nullptr) : ptr_(ptr){}
    unique_ptr(unique_ptr<T>&) = delete;

    unique_ptr(unique_ptr<T>&& moved) : ptr_(moved.ptr_) {
        moved.reset();
    }

    ~unique_ptr(){
        delete ptr_;
    }

    T* release(){
        T* ptr = ptr_;
        delete ptr_;
        return ptr;
    }

    void reset(T* ptr = nullptr){
        delete ptr_;
        ptr_ = ptr;
    }

    T* operator->(){
        return ptr_;
    }

    T& operator*(){
        return *ptr_;
    }

    T* get(){
        return ptr_;
    }

private:
    T* ptr_;
};


}