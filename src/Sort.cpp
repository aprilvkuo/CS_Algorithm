#include "Sort.h"

Sort::Sort()
{
    //ctor
}

void Sort::partition(std::vector<int>& nums, int left, int right){
    if (left >= right) {
        return;
    }
    int pivot = nums[left], l = left, r = right;
    while(l < r){
        while (l < r && nums[r] >= pivot)
            --r;
        std::swap(nums[l], nums[r]);
        while (l < r && nums[l] < pivot)
            ++l;
        std::swap(nums[l], nums[r]);
    }
    partition(nums, left, r-1);
    partition(nums, r+1, right);
    return;
}

void Sort::quick_sort(std::vector<int>& nums, int left, int right) {
     if (left >= right){
         return;
     }
     int pivot = nums[right], have_seen = left - 1;
     for (int i = left; i < right; i++) {
         if (nums[i] < pivot) {
             have_seen ++;
             std::swap(nums[i], nums[have_seen]);
         }
     }
     have_seen++;
     std::swap(nums[right], nums[have_seen]);
     quick_sort(nums, left, have_seen-1);
     quick_sort(nums, have_seen+1, right);
     return;

 }

void Sort::quick_sort(std::vector<int>& nums, int mode) {
    if (mode == 0) {
        partition(nums, 0, nums.size()-1);
    }
    else {
        quick_sort(nums, 0, nums.size()-1);
    }
    return;
}

Sort::~Sort()
{
    //dtor
}
