// This program calculates the user's pay.

#include <iostream>

int main()
{
  double bars, profit, pay;

  // Get the number of hours worked.
  std::cout << "How many candy bars did you sell? ";
  std::cin >> bars;

  // Get the hourly pay rate.
  std::cout << "How much does your organization earn for each candy bar sold? ";
  std::cin >> profit;

  // Calculate the pay.
  pay = bars * profit;

  // Display the pay.
  std::cout << "You have earned $" << pay << std::endl;

  return 0;
}
