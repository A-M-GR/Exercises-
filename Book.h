


#include <string>
#include <vector>
#include <iostream>

using std::string;
using std::vector;
using std::cin;
using std::cout;
using namespace std;




class Book
{
    public:
        Book();


  enum Genre{

    fiction = 1,nonficion,periodical,biography,children

    };



        void set_ISBN(string ISBN);
        void set_title(string title);
        void set_author(string author);
        void set_copyright_date(string copyright_date);
        void set_checked_out(int checked_out);
        bool operator == (Book b1);
       bool operator !=(Book b1);

        string get_ISBN()
        {
            return ISBN;
        }

        string get_title()
        {

            return title;
        }

        string get_author()
        {
            return author;
        }

        string get_copyright_date()
        {

            return copyright_date;
        }


        int get_checked_out()
        {
        return checked_out;
        }


        void set_Genre(int number);

        Genre get_Genre(void)
        {
        return g1;
        }


    protected:

    private:

    string ISBN;
    string title;
    string author;
    string copyright_date;
    int checked_out = 0;
    Genre g1 = fiction;

};


