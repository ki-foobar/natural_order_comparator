#include <set>
#include <vector>
#include "natural_order_comparator.hpp"


int main()
{
    using set_type = std::multiset<std::string, natural_order_comparator>;
    using vector_type = std::vector<std::string>;

    set_type set = {
        "dazzle2",
        "dazzle2",
        "dazzle10",
        "dazzle1",
        "dazzle2.7",
        "dazzle2.10",
        "2",
        "10",
        "10",
        "1",
        "EctoMorph6",
        "EctoMorph62",
        "EctoMorph7",
    };

    vector_type vector = {
        "dazzle2",
        "dazzle2",
        "dazzle10",
        "dazzle1",
        "dazzle2.7",
        "dazzle2.10",
        "2",
        "10",
        "10",
        "1",
        "EctoMorph6",
        "EctoMorph62",
        "EctoMorph7",
    };
    std::sort(std::begin(vector), std::end(vector), natural_order_comparator{});

    std::vector<std::string> expected = {
        "1",
        "2",
        "10",
        "10",
        "EctoMorph6",
        "EctoMorph7",
        "EctoMorph62",
        "dazzle1",
        "dazzle2",
        "dazzle2",
        "dazzle2.7",
        "dazzle2.10",
        "dazzle10",
    };

    assert(std::equal(std::begin(set), std::end(set), std::begin(expected)));
    assert(std::equal(std::begin(vector), std::end(vector), std::begin(expected)));

    return 0;
}
