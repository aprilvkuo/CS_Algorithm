# Some Algorithms

# 0. UNIT TEST

Please see [main script](./main.cpp)

# 1. Trie

[Trie Code](./include/Trie.h): ./include/Trie.h

```cpp
bool delete_word(const string &s); // 当单词不在字典中， 返回false
bool insert_word(const string &s); // 当单词已经在字典中， 返回false
bool search_word(const string &s, int mode=0);  // mode: 0 表示字典查询， 1 表示前缀查询
```

# 2. Sort
[Sort Code](./include/Sort.h): ./include/Sort.h

## 2.1. Quick Sort

```cpp
static void quick_sort(std::vector<int>& nums, int mode=0); // 快排， mode 0、1表示不同的实现方式
```



