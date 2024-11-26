#include <iostream>
#include <list>

class Member {
public:
    std::string name;
    int age;

    Member(const std::string& _name, int _age) : name(_name), age(_age) {}
};

int main() {
    std::list<Member> memberList;

    // Add 5 members to the list
    memberList.push_back(Member("Alice", 30));
    memberList.push_back(Member("Bob", 25));
    memberList.push_back(Member("Charlie", 28));
    memberList.push_back(Member("David", 22));
    memberList.push_back(Member("Eve", 27));

    // Display the members
    std::cout << "Members in the list:" << std::endl;
    for (const auto& member : memberList) {
        std::cout << "Name: " << member.name << ", Age: " << member.age << std::endl;
    }

    
    return 0;
}