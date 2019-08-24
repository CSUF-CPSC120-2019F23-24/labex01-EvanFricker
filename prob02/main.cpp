// This program calculates the profit from candy bar sales.

#include <iostream>

int main()
{
  double bars, profit, pay;

  // Get the number of bars sold.
  std::cout << "How many candy bars did you sell? ";
  std::cin >> bars;

  // Get the profit from sales.
  std::cout << "How much does your organization earn for each candy bar sold? ";
  std::cin >> profit;

  // Calculate the pay.
  pay = bars * profit;

  // Display the pay.
  std::cout << "You have earned $" << pay << std::endl;

  return 0;
}
