#include <iostream>
using namespace std;

class Time
{
  private:
  int hours;
  int minutes;
  int seconds;
  public:
  friend Time operator<<(ostream &os,Time X);
  friend Time operator>>(istream &os,Time X);
  friend bool operator==(Time temp,Time X);

};
Time operator>>(istream &os, Time X)
{
  static int count=0;
  count++;
  Time temp;
  if(count==1)
  cout<<"Enter First Time";
  else
  cout<<"\nEnter Second Time";
  cout<<"\n--------------------"<<endl;
  cout<<"Enter Hours   :  ";
  cin>>X.hours;
  temp.hours = X.hours;
  cout<<"\nEnter Minutes :  ";
  cin>>X.minutes;
  temp.minutes = X.minutes;
  cout<<"\nEnter Seconds :  ";
  cin>>X.seconds;
  temp.seconds = X.seconds;
  return temp;
}
Time operator<<(ostream &os,Time X)
{
  Time temp;
  static int count = 0;
  count++;
  if(count==1)
  cout<<"\nFirst Time";
  else
  cout<<"\nSecond Time";
  cout<<"\nHours    :  "<<temp.hours;
  cout<<"\nMinutes  :  "<<temp.minutes;
  cout<<"\nSeconds  :  "<<temp.seconds<<endl;
  return temp;
}
bool operator==(Time temp,Time X)
  {
    if(temp.hours == X.hours && temp.minutes == X.minutes && temp.seconds==X.seconds)
    {
      return true;
    }
    else
    {
      return false;
    }
  }

int main()
{
  Time t1,t2;
  cin>>t1;
  cout<<t1;
  cin>>t2;
  cout<<t2;

  if(t1==t2)
  cout<<"\nTimes are same"<<endl;
  else
  cout<<"\nTimes are not same"<<endl;
  return 0;
}