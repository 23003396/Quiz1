#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  const double Meters_Per_Foot = 0.3048;
  const double Meters_Per_Inch = 0.0254;

  double height_in_meters,distance_in_meters,distance_in_meters2, measured_angle;
  cout<<" Welcome to Birthday preparation"<<endl;
  cout<<"Enter your height in meters: ";
  cin>>height_in_meters;
  cout<< "Enter the distance from the tree: ";
  cin>>distance_in_meters1>> distance_in_meters2;
  cout<<"Enter the measured angle in degrees: ";
  cin>>measured_angle;

  double height_In_Inches = height_in_meters / Meters_Per_Inch;
  double distance_feet1 = distance_in_meters / Meters_Per_Foot;
  double distance_feet2 = distance_in_meters2/Meters_Per_Inch;
  double total_d_in_inches = distance_feet2 + distance_feet1 * 12;
  // to find the height of the tree we use the formula below
  double Height = height_In_Inches + total_d_in_inches * tan(measured_angle)/12;

   cout<<"The height of the tree in feet is: " << Height<<endl;

    return 0;
}

