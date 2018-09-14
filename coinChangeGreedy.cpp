/*********************************************
*                                            *
*                Otto Bismark                *
*                                            *
*       - Coin Changing Greedy Algorithm -   *
*                                            *
*                                            *
**********************************************/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/*
Function MinCoin
*/
void minCoin(int [], int , int );

/*
Main Program
*/
int main()
{
   int i, j, n, amount;
   cout <<"Insert money to change... " << endl;
   cin >> amount;
   
   cout << "Insert all type of coin... " << endl;
   cin >> n;
   
   int coin[n];
   
   for(i = 0; i < n; i++)
   {
   	   cout << "Insert " << i+1 <<  "^ coin " << endl;
   	   cin >>coin[i];
   }
   
   sort(coin, coin+n, greater <int >());
   
   cout << "Coin Change Algorithm Greedy" << endl;
   minCoin(coin, n, amount);
}

void minCoin(int coin[], int n, int amount)
{
	int count = 0;
	cout << "Type of coins used " << endl;
	for(int i = 0; i < n; i++)
	{
		while(amount >= coin[i])
		{
			count++;
			amount -= coin[i];
			cout << coin[i] << " ";
		}
	}
	cout << endl;
	cout << "Coins used " << count << endl;
}
