#ifndef MAT_HELPER_H
#define MAT_HELPER_H

enum class layout_t : int{
    ROW_MAJOR=0,
    COL_MAJOR
};

template<int i, int i_end, typename... Args>
inline void unrolled_for_func(void (*func)(Args...), Args... args)  {
    if constexpr (i < i_end) {
        func(args...);
        unrolled_for_func<i+1, i_end>(func, args...);
    }
}



#endif
