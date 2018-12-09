# Natural order comparator for C++

It is a modified version of [this algorithm](http://www.davekoelle.com/alphanum.html)
originally known as "Alphanum Algorithm".

The original version is written by David Koelle in Java language and is ported by KI to C++.



# Requirements

- C++ compiler which supports C++ 11 or later.



# Usage

It is a header only library. Copy [this file](natural_order_comparator.hpp) to any directory you like
and add `#include` directive.

It is designed as a comparator object like `std::less`. Specify this object to a template argument of container or algorithms such as `std::set` and `std::sort()`.

There are several aliases for convenience:

- `natural_order_comparator` for `std::string`
- `wnatural_order_comparator` for `std::wstring`
- `u16natural_order_comparator` for `std::u16string`
- `u32natural_order_comparator` for `std::u32string`



# Example

```cpp
#include <natural_order_comparator.hpp>

int main()
{
    // Example 1:
    std::vector<std::string> words = {...};
    std::sort(std::begin(words), std::end(words), natural_order_comparator{});

    // Example 2:
    std::set<std::string, natural_order_comparator> words = {...};
}
```

`test.cpp` is prepared for testing and example.



# License

MIT License. See [the header file itself](natural_order_comparator.hpp) for details.

