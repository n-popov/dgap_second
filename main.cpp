#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

#include <array>
#include <deque>

#include <list>

class Fraction {
public:
    Fraction(int numerator, unsigned denominator):
        numerator(numerator), denominator(denominator) {}
private:
    int numerator;
    unsigned denominator;
};

int main() {
//    std::vector<int> numbers;
//    for(auto i = 0; i < 30; i++) {
//        numbers.push_back(i);
//        std::cout << "Size is " << numbers.size() <<
//            ", capacity is " << numbers.capacity() << std::endl;
//    }

//    std::array<int, 5> static_array = {}; // Инициализация по умолч.
//    std::array<int, 5> another_static_array{}; // Инициализация по умолч.
//    std::array<int, 5> third_static_array(); // Объявление функции
//
//    static_array[3] = 42;
//    for(auto number: static_array) {
//        std::cout << number << ' ';
//    }

//    std::deque<Fraction> deque;
//    deque.emplace_front(1, 25u);
//    std::cout << deque.size() << std::endl;


    std::list<int> numbers = {1, 3, 2, 42, -255};
    std::list<int> other_numbers = {25, -1, 30};

    numbers.splice(std::next(numbers.begin()),
                   other_numbers,
                   other_numbers.begin(),
                   std::prev(other_numbers.end()));

    numbers.sort();

    for(auto item: numbers) {
        std::cout << item << ' ';
    }
    std::cout << std::endl;

    for(auto item: other_numbers) {
        std::cout << item << ' ';
    }
    std::cout << std::endl;

    numbers.merge(other_numbers);

    std::cout << "Merged:" << std::endl;

    std::copy(numbers.begin(), numbers.end(),
              std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    return 0;
}
