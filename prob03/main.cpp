// This program calculates a person's height in feet (') and inches (").
# include <iostream>
int main()
{
  int height_input; //height in inches input
  int feet;
  int inches;

  std::cout<< "Please enter the person's height in inches: ";
  std::cin>> height_input;
  std::cout<< "That person is ";
  
  feet=height_input/12;
  inches=height_input%12;

  std::cout<< feet <<'\'' << inches <<"\"\n";
  return 0;
}
