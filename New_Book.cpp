#include "std_lib_facilities.h"



int Permutation (int,int);
int Combination (int ,int);
int Factorial(int);

int main()
{





int user_number_1 = 0,user_number_2 = 0;
int user_choice = -1;
int final_result = -1;
char error_input = '0';
cout << "Please type 2 integer numbers\n";

try{
if(!(cin >> user_number_1 >> user_number_2))
throw runtime_error("w");
}

catch(...)
{

cout <<"wrong input ... program is now terminating\n";
return 0;
}


cout << "Please type '1' for Permutation and '2' for Combination \n";

cin >> user_choice;







if( user_choice == 1)
{

final_result = Permutation(user_number_1,user_number_2);
cout << "The result for Permutation is " << final_result << "\n";


}

else if (user_choice == 2)
{
final_result = Combination(user_number_1,user_number_2);
cout << "The result for Combination is " <<final_result <<"\n";

}

else
{
cout <<"Not correct input ... Programm is now terminating\n";
return 0;
}
return 0;

}

int Permutation (int a,int b)

{

b = Factorial (a-b);
try
{
a = Factorial(a);
}
catch(runtime_error &e)
{
cout << "too big number for Factorial\n";
exit(1);
}

return a/b;

}

int Combination (int a ,int b)
{

a = Permutation(a,b);
try
{

b = Factorial(b);

}
catch(runtime_error &e)
{

cout <<"too big number for Factorial \n";
exit(1);
}

return a/b;
}

int Factorial(int number)
{
if(number > 10)
{

throw runtime_error("To big number\n");
}

int result = 1;
for(int i =1; i<= number; ++i)
result = result *i;

return result ;

}
