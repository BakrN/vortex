#ifndef MAT_HELPER_H
#define MAT_HELPER_H

enum class layout_t : int{
    ROW_MAJOR=0,
    COL_MAJOR
};

template<int i, int i_end, typename Func, typename... Args>
inline void unrolled_for_func(Func&& func, Args&&... args)  {
    if constexpr (i < i_end) {
        func(args...);
        unrolled_for_func<i+1, i_end>(func, args...);
    }
}


//template<int i, int i_end, typename Func, typename... Args>
//inline void unrolled_for_func(Func&& func, Args&&... args) {
//    if constexpr (i < i_end) {
//        func(std::forward<Args>(args)...);
//        unrolled_for_func<i+1, i_end>(std::forward<Func>(func), std::forward<Args>(args)...);
//    }
//}


#endif
