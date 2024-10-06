#include<iostream>
#include<iomanip>
using namespace std;

double volume(float l,float w,float h,string unit);

int main(){
float l,w,h;
double result;
string unit;

cout << "Enter the length of pyramid(in metres): ";
cin >> l;
cout << "Enter the width of pyramid(in metres): ";
cin >> w;
cout << "Enter the height of pyramid(in metres): ";
cin >> h;
cout << "Enter the desired output unit(mm,cm,m,km):";
cin >> unit;

result = volume(l,w,h,unit);
cout << "The volume of pyramid is: "<< fixed << setprecision(6) << result << " cubic " << unit ;

return 0;

}

double volume(float l,float w,float h,string unit)

{
double volume;
volume=(l*w*h)/3;

if (unit == "mm"){
    volume = volume*1000; 
}
   
if (unit == "cm"){
    volume = volume*100; 
}

if (unit == "m"){
   volume = volume;
}

if (unit == "km"){
    volume = volume/1000;  
} 

return volume;

}