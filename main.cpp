#include <iostream>
#include <fstream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
string input;
int a = 0;
fstream file;
cin >> input;
file.open(input);
string str;
while (!file.eof())
{
file >> str;
cout << str;
}
file.close();
return 0;
}