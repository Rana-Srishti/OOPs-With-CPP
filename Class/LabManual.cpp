// 2

// #include <vector>
// #include <iostream>
// #include <algorithm>

// using namespace std;

// template<typename T>
// class Vector {
// private:
//     vector<T> elements;

// public:
//     Vector(initializer_list<T> initList) : elements(initList) {}

//     T findSmallest() {
//         if (elements.empty()) {
//             throw runtime_error("Vector is empty.");
//         }
//         return *min_element(elements.begin(), elements.end());
//     }

//     bool search(const T& element) {
//         return find(elements.begin(), elements.end(), element) != elements.end();
//     }

//     double findAverage() {
//         if (elements.empty()) {
//             throw runtime_error("Vector is empty.");
//         }
//         double sum = 0.0;
//         for (const T& elem : elements) {
//             sum += elem;
//         }
//         return sum / elements.size();
//     }
// };

// int main() {
//     Vector<int> vec = {5, 2, 8, 1, 9, 3, 7};
    
//     cout << "Smallest element: " << vec.findSmallest() << endl;
    
//     int searchElement;
//     cout<<"Enter the element you want to search: ";cin>>searchElement;
//     cout << "Is " << searchElement << " present in vector? " << (vec.search(searchElement) ? "Yes" : "No") << endl;
    
//     cout << "Average of elements: " << vec.findAverage() << endl;
    
//     return 0;
// }


//3
#include <iostream>
using namespace std;

template<typename T>
T findLargest(T a, T b, T c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    int intResult = findLargest(5, 10, 3);
    cout << "Largest integer: " << intResult << endl;

    double doubleResult = findLargest(3.5, 1.2, 7.8);
    cout << "Largest double: " << doubleResult << endl;

    return 0;
}


//1

// #include <iostream>
// #include <fstream>
// #include <sstream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// class Book {
// public:
//     string book_id;
//     string author_name;
//     float price;
//     int no_of_pages;
//     string publisher;
//     int year_of_publishing;

//     Book(const string& id, const string& author, float p, int pages, const string& pub, int year)
//         : book_id(id), author_name(author), price(p), no_of_pages(pages), publisher(pub), year_of_publishing(year) {}

//     // Default constructor
//     Book() {}

//     // Member function to parse book details from a string
//     static Book parseBookDetails(const string& line) {
//         istringstream iss(line);
//         Book book;
//         iss >> book.book_id >> book.author_name >> book.price >> book.no_of_pages >> book.publisher >> book.year_of_publishing;
//         return book;
//     }
// };

// bool compareBooks(const Book& book1, const Book& book2) {
//     return book1.author_name < book2.author_name;
// }

// int main() {
//     ifstream inputFile("books.txt");
//     ofstream outputFile("sorted_books.txt");

//     if (!inputFile.is_open()) {
//         cerr << "Error: Unable to open input file." << endl;
//         return 1;
//     }

//     vector<Book> books;
//     string line;
//     while (getline(inputFile, line)) {
//         books.push_back(Book::parseBookDetails(line));
//     }

//     inputFile.close();

//     sort(books.begin(), books.end(), compareBooks);

//     for (const auto& book : books) {
//         outputFile << book.book_id << " " << book.author_name << " " << book.price << " " << book.no_of_pages << " " << book.publisher << " " << book.year_of_publishing << endl;
//     }

//     outputFile.close();

//     cout << "Books sorted successfully and saved to 'sorted_books.txt'." << endl;

//     return 0;
// }


