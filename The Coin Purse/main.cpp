//
//  main.cpp
//  The Coin Purse
//
//  Created by Damien Hosea on 10/2/18.
//  Copyright © 2018 Damien Hosea. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
     
     // This is the input from the user in pennies.
     int Coins = 0,
     TotalPennies = 0,
     TotalQuarters = 0,
     TotalDimes = 0,
     TotalNickels = 0;
     
     // Constants That I need for each coin denomination
    const int QUARTER = 25;
    const int DIME = 10;
    const int NICKEL = 5;
    const int PENNY = 1;
     
     
     // These variables are so I can decide if it's singular or plural
     string QuarterStr;
     string DimeStr;
     string NickelStr;
     string PennyStr;
     string IntialPenny;
     string AmountOfCoins;
     
     //Let's collect data from the user
     cout << " Welcome to the Coin Purse!" << endl;
     cout << " My name is Counting Cambio \n ";
     cout << "and I will be counting them coins \n";
     cout << " in yo Coin Purse ^_^ \n" << endl;
     cout << "Lets start off with you telling me \n";
     cout << "a positive amount of pennies ... \n";

     getline(cin, AmountOfCoins);
     
     AmountOfCoins.length();
     int counter = 0;
     while(counter < AmountOfCoins.length() || AmountOfCoins.length() == 0)
     {
          if(!isnumber(AmountOfCoins[counter]) ) {
               
               cout << " Incorrect Intry, Try Again!"<<endl;
               getline(cin, AmountOfCoins);
               AmountOfCoins.length();
               counter = 0;
          }
          else
          {
               counter ++;
          }
     }
     
     Coins = stoi(AmountOfCoins);
     // A nested if statement to validate the entry of Negative Numbers
     if (Coins > 0 )
     {
          cout << "Let's see now... \n";

          cout << "WOW!!! You have..." <<endl;
          cout << "Press <ENTER> for Results";
          cin.get();
          
          
          
          
          // an if statement just to keep up with proper grammer
          if  (Coins > 2 )
          {
               cout << " " << Coins << " pennies \n" <<endl;
          }
          else
          {
               cout << " " << Coins << " penny \n" <<endl;
          }
          cout << " Which is equivalant to... \n" << endl;
          
          
          
          // an if statement for Quarters
          if (Coins >= QUARTER)
          {
               TotalQuarters = Coins / QUARTER;
               Coins = Coins % QUARTER;
               
               if (TotalQuarters > 1)
               {
                    QuarterStr = "Quarters\n ";
               }
               else
               {
                    QuarterStr =  "Quarter\n ";
               }
          }
          
          // an if statement for Dimes
          if (Coins >= DIME)
          {
               TotalDimes = Coins / DIME;
               Coins = Coins % DIME;
          }
          
          if (TotalDimes > 1)
               
          {
               DimeStr = "Dimes\n ";
          }
          else
          {
               DimeStr = "Dime\n ";
          }
          
          
          
          
          // an if statement for Nickels
          if (Coins >= NICKEL)
          {
               
               TotalNickels = Coins / NICKEL;
               Coins = Coins % NICKEL;
          }
          if (TotalNickels > 1)    {NickelStr = "Nickels\n ";}
     
          else {NickelStr = "Nickel\n ";}
          
          
          
          // an if statmenet for Penny
          if (Coins >= PENNY)
          {
               TotalPennies = Coins / PENNY;
               Coins = Coins % PENNY;
          }
          
          if (TotalPennies > 1)
          {
               PennyStr = "Pennies\n ";
          }
          else
          {
               PennyStr = "Penny\n ";
          }
          
          // Below is all the outputs for each coin denomination.
          if (TotalQuarters > 0)
          {
               cout << TotalQuarters << " " << QuarterStr << endl;
          }
          
          if (TotalDimes > 0)
          {
               cout << TotalDimes << " " << DimeStr << endl;
          }
          
          if (TotalNickels > 0)
          {
               cout << TotalNickels << " " << NickelStr << endl;
          }
          
          if (TotalPennies > 0)
          {
               cout << TotalPennies << " " << PennyStr << endl;
          }
          cout << "*Thank You for using The Coin Purse!*" <<endl;
          
     }
     // The condition for when a negative number is entered.
     else if (Coins < 0)
     {
          cout << "You entered " <<Coins<< " ,which is a negative number \n";
          cout << "Negative Numbers are Invalid inputs \n";
          cout << "Rerun the Program using a Positive Number \n";
          cout << "of Pennies" <<endl;
     }
     
     return 0;
}
