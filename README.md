# casino_game_c
This game is simply a casino game where we have to deposit some amount, place a bet out of that amount and then choose a number. 
If the number chosen by us is same as the computer, then we win otherwise we lose the sum of money which we placed on bet out of the deposit amount. 
To make the game interesting there are four risk categories as follows:
1.	Where winner gets 2x the amount he/she betted but loses 1x amount when lost
2.	Where winner gets 4x the amount he/she betted but loses 2x amount when lost
3.	Where winner gets 8x the amount he/she betted but loses 4x amount when lost
4.	Where winner gets 16x the amount he/she betted but loses 10x the amount when lost

After choosing the category of risk, the player selects the number and gets the result from the system.
Then the process of calculation of the new deposit balance happens (which is implemented by switch case and if-else) and according 
to which system lets us play or tells us to add money (in case of zero deposit or debt i.e. if the deposit amount < = 0).

After the user has appropriate amount of money to play, the system asks the user to play another round or not 
(if user doesn’t have appropriate funds to play then game makes the person choose whether to add more money to the deposit or automatically exit). 
If user agrees then the game continues or else depending on the deposit amount after the rounds a message is displayed. 
If there is no debt on user after rounds then the message is a thank you otherwise a warning to pay the debt.
