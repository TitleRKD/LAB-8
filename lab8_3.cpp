/*
c
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/

#include<iostream>
using namespace std;

int main(){
string name;
int age;
int height;
int Bounty;
cout << "Enter your age: ";
cin >> age;
if(age <= 25){
cout << "Enter your height: ";
cin >> height;
if(height < 100) name = "Chopper";
else if(height < 180) name = "Usopp";
else {cout << "Enter your bounty: ";
cin >> Bounty;
if (Bounty > 11e8)
name = "Zoro";
else name = "Sanji";}
}else if(age <= 60){ cout << "Enter your bounty: ";
cin >> Bounty;
if(Bounty > 5e8) name = "Jinbe";
else name = "Franky";}
else name = "Brook";

cout << "Your character = " << name ;

return 0;
}