
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h> 
using namespace std;


int
main()
{
	int Cost = 0, demand, NumPC_sold, Profit[500], Gross_Profit, PC_Stock, sum =
		0, Weekly_Profit[2];
	srand(time(0));
	for (int i = 1; i <= 2; i++)
	{
		for (int j = 1; j <= 500; j++)
		{
			demand = rand() % 5;
			PC_Stock = PC_Stock + i;
			if (demand > PC_Stock)
			{
				Cost = (demand - PC_Stock) * 100;
			}
			else
			{
				Cost = (PC_Stock - demand) * 50;
			}
			NumPC_sold = min(PC_Stock, demand);
			Gross_Profit = NumPC_sold * 450;
			Profit[j] = Gross_Profit - Cost;
			sum = sum + Profit[j];
			PC_Stock = PC_Stock - NumPC_sold;
		}
		Weekly_Profit[i] = sum / 500;
	}
	std::cout << "when demand = 1 ,the average profit equal  "<< Weekly_Profit[1] << std::endl;
	cerr<< "when demand = 2 ,the average profit equal  " << Weekly_Profit[2] << endl;
	return 0;
}

