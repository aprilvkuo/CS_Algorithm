#include <iostream>
#include <Sort.h>
#include "Trie.h"
#include "vector"
#include "KMP.h"
#include "Utility.h"

using namespace std;

void test_quick_sort() {
    Sort s_item = Sort();
    vector<int> a = {3, 5, 1, 3};
    s_item.quick_sort(a, 1);
    print_vector<int>(a);
//    for (auto &item: a) {
//        cout << item << endl;
//    }
}

void test_kmp() {
    KMP kmp_itesm = KMP();
    string query = "BBCABCDABABCDABCDABDE";
    string word = "AB";
    printf("Kmp result is [%d]\n", kmp_itesm.kmp_match(query, word));
    auto res = kmp_itesm.kmp_match_all(query, word);
    printf("Kmp all result is: ");
    print_vector<int>(res);

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
//    test_trie();
    test_kmp();
    return 0;
}
