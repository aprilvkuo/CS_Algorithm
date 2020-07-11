#include <iostream>
#include <Sort.h>
#include "Trie.h"
#include "vector"

using namespace std;

void test_quick_sort() {
    Sort s_item = Sort();
    vector<int> a = {3, 5, 1, 3};
    s_item.quick_sort(a, 1);
    for (auto &item: a) {
        cout << item << endl;
    }
}

void test_trie() {
    Trie tree = Trie();
    int ret = tree.insert_word("hello");
    cout << "insert `hello` result is:" << ret<< endl;
    ret = tree.search_word("hello");
    cout << "find `hello` result is:" << ret << endl;
    ret = tree.search_word("he", 0);
    cout << "find `hel` result is:" << ret << endl;
    ret = tree.search_word("he", 1);
    cout << "find prefix `hel` result is:" << ret << endl;
    ret = tree.delete_word("hel");
    cout << "find delete `hel` result is:" << ret << endl;
    ret = tree.delete_word("hello");
    cout << "find delete `hello` result is:" << ret << endl;
    ret = tree.search_word("hel", 1);
    cout << "find prefix `hel` result is:" << ret << endl;
}

int main()
{
    test_quick_sort();
    test_trie();
    return 0;
}
