#include <string>
#include <vector>
#include <iostream>
#include "Book.h"

using std::string;
using std::vector;
using std::cin;
using std::cout;


ostream  &operator <<( ostream & os,Book & b1);

int main()
{

int number = 0;
Book b1,b2;
string user_input,user_input_2;
cout << "please input an ISBN number";
cin >> user_input;

b1.set_ISBN(user_input);

cout << "please input an ISBN number";
cin >> user_input_2;

b2.set_ISBN(user_input_2);


if(b1!=b2)
cout << "they are not equals\n";

else
cout <<"they are equals\n";



b1.set_author("eminem");
b1.set_title("LP1");

b2.set_author("Dr dre");
b2.set_title("chronic");


cout << "Please Give me a number between 1-5\n";
cin >> number;

if((number <1) || (number >5))

{
cout <<"Wrong number\n";
return 0;

}

b1.set_Genre(number);
cout << b1.get_Genre();


return 0;
}

bool Isbn_check(string ISBN);


Book::Book()
{


}




void Book::set_ISBN(string ISBN)
{

// must be in form of n-n-n-x

string second_string;
int check = 0;
int counter =0;
for(int i =0;i< ISBN.size();i++)
{
{
if(ISBN[i] == '-')
counter ++;

}

}

if(counter !=3)
{
cout<<"Not valid ISBN";
return ;
}


bool corect = Isbn_check(ISBN);

if(corect)
Book::ISBN = ISBN;


}


ostream & operator <<(ostream & os, Book & b1)
{

 return os << b1.get_title() <<"\n" << b1.get_author() << "\n" <<b1.get_ISBN() <<"\n";

 }






void Book::set_title(string title)
{
Book::title = title;

}

void Book::set_author(string author)
{
Book::author = author;

}

void Book:: set_copyright_date(string copyright_date)
{
Book::copyright_date = copyright_date;

}


void Book:: set_checked_out(int checked_out)
{
Book::checked_out = checked_out;

}


bool Isbn_check(string ISBN)
{



int last_postiiton =0;
int last_numbers =0;

while(1)
{


string second_string ;
for(int i =last_postiiton; i<ISBN.size();i++)
{


if(ISBN[i] == '-')
{
last_postiiton = i+1;
break;

}
second_string.push_back(ISBN[i]);


}

if(second_string.size() == 0)
{
cout <<"Wrong ISBN";
return false;
}



for(int i =0; i< second_string.size();i++)
{

cout <<second_string;

if((second_string[i]>122) || (second_string[i] < 97 ))
{

cout <<" Wrong ISBN value";
return false;
}

}


last_numbers++;
if(last_numbers ==3 )
break;

}

string second_string;

for(int i =last_postiiton; i < ISBN.size();i++)

{

second_string.push_back(ISBN[i]);

}

cout <<second_string;

for(int i=0; i<second_string.size();i++)
{

if((second_string[i] > 57) || (second_string[i]< 48))
{

cout << "ISBN is not correct";
return false;
}

}




return true;
}






 bool Book:: operator ==(Book b1)
 {

if(b1.get_ISBN() == get_ISBN())
return true;

else
return false;

 }
bool Book:: operator !=(Book b1)
{

if(b1.get_ISBN() != get_ISBN())
return true;

else
return false;

}


void Book:: set_Genre(int number)
{
    switch(number)
{
    case 1 :
    Book::g1 = fiction;
    break;

    case 2:
    Book::g1 = nonficion;
    break;

    case 3:

    Book::g1 = periodical;
    break;

    case 4:

    Book::g1 = biography;
    break;


    case 5:

      Book::g1 = children;
    break;

}

}
