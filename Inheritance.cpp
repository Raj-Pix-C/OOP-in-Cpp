#include<iostream>

using namespace std;

class Library{                                                     // this is the base class
    private:
        unsigned int book_shelf_count;
        unsigned int book_capacity_per_shelf;
        unsigned int total_book_capacity;
        unsigned int total_book_count;
    
    
    public:
        Library(unsigned Shelf_count, unsigned Shelf_capasity){    // this is the constructor of this class
            book_shelf_count = Shelf_count;
            book_capacity_per_shelf = Shelf_capasity;
            total_book_capacity = book_shelf_count * book_capacity_per_shelf;
            total_book_count = 0;
        }

        void get_info(){                                           // this is a class method for getting info about the class
            cout << book_shelf_count << endl;
            cout << book_capacity_per_shelf << endl;
            cout << total_book_capacity << endl;
            cout << total_book_count << endl;
        }

        void add_book(){                                           // this is a class method for adding books to the library class
            total_book_count++;
        }
        void remove_book(){                                        // this is a class method for removing books from the library clas{
            total_book_count -= (total_book_count > 0);
        }
        void borrow_book(){
            total_book_count -= (total_book_count > 0);
        }
        void return_book(){
            total_book_count++;
        }
};

class Public_library : public Library{                             // this is the derived class
    private:
        unsigned int lib_card_count;
    public:                          
        Public_library(unsigned Shelf_capacity, unsigned Shelf_count) : Library(Shelf_count, Shelf_capacity){ // this is the constructor of this class
        lib_card_count = 0;
        }

        void make_lib_card(){
            lib_card_count++;
        }

        void get_info_l(){                                           // this is a class method for getting info about the class
            cout << lib_card_count << endl;
        }
};

int main(){

    Library Lib(10, 45);
    Public_library Pub_lib(100, 6);
    for (int i = 0; i < 50; i++)
    {
        Pub_lib.add_book();
        if(i % 3 == 2) {Pub_lib.make_lib_card(); Pub_lib.borrow_book();}
    }    

    Lib.get_info();
    cout << endl;
    Pub_lib.get_info();
    Pub_lib.get_info_l();
    

    return 0;
}