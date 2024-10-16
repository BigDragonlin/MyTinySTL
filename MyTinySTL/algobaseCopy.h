
# ifndef  MY_TINY_STL_ALGOBASE_COPY_H
#define MY_TINY_STL_ALGOBASE_COPY_H

namespace mystl_copy{
    //比较大小
    template <class T>
    T& max(const T&a,const T&b)
    {return a < b ? b : a;}
}

#endif