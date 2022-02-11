#include <iostream>
#include <iterator>
#include <iomanip>

#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>

#include <vector>

#define RANGE(container) container.begin(), container.end()

int main() {
//    std::vector<int> nums{42, 5, -433, 80, 8080};
//    std::sort(RANGE(nums), [](auto lhs, auto rhs) {
//        return std::abs(lhs) < std::abs(rhs);
//    });
//
//    std::copy(RANGE(nums),
//              std::ostream_iterator<int>(std::cout, " "));

//    auto x = 4.l;

//    std::unordered_map<std::string, unsigned> grades;
//
//    grades["Denis"] = 3u;
//
//    std::pair<std::string, unsigned> ilya_grade("Ilya", 9);
//
//    grades.insert(ilya_grade);
//
//    auto victoria_grade = std::make_pair("Victoria", 8);
//
//    grades.insert(victoria_grade); // Приводится тип пары! к <string, unsigned>
//
//    grades.insert({"Roman", 7});
//
//    std::cout << grades["Nikita"] << std::endl;

//    for(const auto& student_grade: grades) {
//        std::cout << student_grade.first << ": "
//            << student_grade.second << std::endl;
//    }

//    for(const auto& [student, grade]: grades) {
//        std::cout << student << ": " << grade << std::endl;
//    }

    std::multimap<int, std::string> groups;
    groups.emplace(831, "Nikita");
    groups.insert({831, "Victor"});
    groups.insert({831, "Alex"});
    groups.insert({002, "Johnny"});
    groups.insert({002, "Valery"});
    groups.insert({001, "Pyotr"});

    for(const auto& [group, student]: groups) {
        std::cout << std::setw(3) << std::setfill('0') << group
        << ": " << student << std::endl;
    }

    auto [left, right] =
            groups.equal_range(831);
    std::cout << "Students in 831:" << std::endl;
    for(auto it = left; it != right; it++) {
        std::cout << it->second << ' ';
    }
    std::cout << std::endl;

}