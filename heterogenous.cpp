#include <tuple>
#include <string>
#include <iostream>

template<typename T, typename ... Types>
auto dynamically_construct(Types... args) {
    return new T(args...);
}

struct Date {
    Date(int year, int month, int day): year(year), month(month), day(day) {}
    int year, month, day;
};

bool is_less(Date d1, Date d2) {
    return std::make_tuple(d1.year, d1.month, d1.day) <
    std::make_tuple(d2.year, d2.month, d2.day);
}

int main() {
    Date d1{2020, 12, 3};
    Date d2{2020, 11, 5};
    std::cout << std::boolalpha << is_less(d1, d2) << std::endl;

    Date* date_ptr = dynamically_construct<Date>(2022, 02, 11);
    std::cout << date_ptr->year << std::endl;

    delete date_ptr;

}

