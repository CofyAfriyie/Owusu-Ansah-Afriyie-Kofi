#include <iostream>
using namespace std;

int main()
{
float grade;
cout << "Input Score\n";
cout << "NB: Include decimals";
cin >> grade;

if ( (grade >= 80) && (grade <= 100) )
{
 cout << "Grade A";
}
else if ( (grade >= 75) && (grade < 80) )
{
 cout << "Grade B+";
}
else if ( (grade >= 70) && (grade < 75) )
{
 cout << "Grade B";
}
else if ( (grade >= 65) && (grade < 70) )
{
 cout << "Grade C+";
}
else if ( (grade >= 60) && (grade < 65) )
{
 cout << "Grade C";
}
else if ( (grade >= 55) && (grade < 60) )
{
 cout << "Grade D+";
}
else if ( (grade >= 50) && (grade < 55) )
{
 cout << "Grade D";
}
else if ( (grade >= 40) && (grade < 50) )
{
 cout << "Grade E";
}
else if ( (grade >= 0) && (grade < 40) )
{
 cout << "Grade F";
}

return 0;
}




# Owusu-Ansah-Afriyie-Kofi
