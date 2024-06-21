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


template<int i, int i_end, template<int, int...> class Func, int... Is>
inline void unrolled_flush_it(float*& reg, int& r) {
    if constexpr (i < i_end) {
        Func<i, Is...>{}(reg,r);
        unrolled_flush_it<i + 1, i_end, Func, Is...>(reg,r);
    }
}


template<int i, int i_end, template<int, int...> class Func, int... Is>
inline void unrolled_coop_store_it(float*& dest, float*&reg, int tc_reg, int thread_id, int mat_n) {
    if constexpr (i < i_end) {
        Func<i, Is...>{}(dest,reg,tc_reg, thread_id,mat_n);
        unrolled_coop_store_it<i + 1, i_end, Func, Is...>(dest,reg,tc_reg, thread_id, mat_n);
    }
}


#endif
