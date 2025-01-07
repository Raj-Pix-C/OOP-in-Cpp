#include<iostream>

using namespace std;

class Constructor_and_ClassMethods
{
private:
    /* data */
public:
    string BookName;
    string Author;
    int Weight;
    int PageCount;


    Constructor_and_ClassMethods(string name, string author)  // this is a contructor of the class Constructor_and_ClassMethods
    {
        BookName = name;
        Author = author;
        Weight = 0;
        PageCount = 0;
    }


    void PrintInfo() // This demonstrates a class method which is a function or simply put a method of this class that shows output of the class members.
    {
        cout << BookName << " by ";
        cout << Author << endl;
        cout << "The book is " << Weight << " pounds and consists of " << PageCount << " pages.\n";
    }
};


int main()
{
    Constructor_and_ClassMethods MyBook("Sherlock Holmes", "Sir. Arthur Conan Doyle");
    
    MyBook.Weight = 256;
    MyBook.PageCount = 1024;

    MyBook.PrintInfo();

    return 0;
}