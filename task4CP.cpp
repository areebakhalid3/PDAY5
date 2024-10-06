#include<iostream>
#include<string>
using namespace std;
string projectTimeCalculation(int hours,int days,int workers);
int main()

{
int hours,days,workers;
cout<<"Enter the needed hours to finish the project:";
cin>> hours;
cout<<"Enter the days that the firm has:";
cin>>days;
cout<<"Enter the number of all workers:";
cin>>workers;


cout << projectTimeCalculation(hours,days,workers) <<endl;

return 0;
}
string projectTimeCalculation(int hours,int days,int workers)
{
  string output;
  float time, timeav,hrsreq,days0,train;
  days0=days;
  int inthrsreq;

  train=days*0.1;
  days0=days0-train;

  timeav=days0*10*workers;

  hrsreq=hours-timeav; 
  inthrsreq=hrsreq;

  if(timeav>hours)
  {
    output= "Yes! "+to_string(-inthrsreq) + " hours left.";
    return output;
  }
  else if(timeav<hours)
  {  
    output= "Not enough time! "+to_string(inthrsreq) + " hours needed.";
    return output;
  }  
}