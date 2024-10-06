#include<iostream>
using namespace std;
float taxcalc(char type,float price);

main(){

char type;
float price,result;

cout << "Enter the vehicle type code(M,E,S,V,T): ";
cin >>type;
cout << "Enter the price of vehicle: $";
cin >>price;
result= taxcalc(type,price);
cout << "The final price of vehicle of type " << type << " after adding the tax is $" << result<<endl; 

}

float taxcalc(char type,float price)
{

float tax,taxrate,finalprice;
if(type=='M'){
    taxrate=6.0;
}
if(type=='E'){
    taxrate=8.0;
}
if(type=='S'){
    taxrate=10.0;
}
if(type=='V'){
    taxrate=12.0;
}
if(type=='T'){
    taxrate=15.0;
}
tax=price*(taxrate/100);
finalprice=price+tax;

return finalprice;
}