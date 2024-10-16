#ifndef MYTINYSTL_VECTOR_H_
#define MYTINYSTL_VECTOR_H_

#include "memory.h"
#include "algoCopy.h"

namespace my_stl_copy{
    template <class T>
    class vector {
    public:
        //vector嵌套性别定义
        typedef mystl::allocator<T> allcator_type;

        typename allcator_type::size_type size_type;
        typename allcator_type::const_pointer const_pointer;
        typename allcator_type::value_type value_type;
        typedef typename allcator_type::const_reference const_reference;

    private:

    public:
        //构造，复制，移动，析构函数
        explicit vector(size_type n) {
            fill_init(n, value_type());
        }
    };

    template <class T>
    vector<T>::fill_init(size_type n, const value_type& value) {
        const size_t max_size = my_stl_copy::max();
    }
}

#endif
