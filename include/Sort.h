#ifndef SORT_H
#define SORT_H
#include <iostream>
#include "vector"

class Sort
{
    public:
        Sort();
        static void quick_sort(std::vector<int>& nums, int mode=0); // 快排， mode表示不同的实现方式
        static void partition(std::vector<int>& nums, int left, int right);
        static void quick_sort(std::vector<int>& nums, int left, int right);
        virtual ~Sort();

    protected:

    private:
};

#endif // SORT_H
