
/* ################################# HANG MAN ################################## */
/* DATE CREATED : 05/10/19 ##################################################### */
/* ############################################################################# */




#include<iostream>
#include<string>
using namespace std;
string player1,player2;
char word[5],line[5]={'_','_','_','_','_'};
int z,wrong=0,correct=0,b,c,d,numChar;



void checkGuess(char a)                        /* Checking of the guessed letter */
{   
   for(z=0;z<=numChar-1;z++)                   /* numChar-1 to avoid exceeding of array for array always starts with [0]. */
    {
      if(a==line[z])
      {
       b++;
       break;
      }
     else if(a==word[z])
      { 
        line[z]=word[z];
        c++;
        correct++;
      }
     else 
      d++;      
    }
   
   if(b>0)
    {cout<<"Already Entered";}
   else if(c>0)
    {cout<<"Correct";}
   else if(d==numChar)
    {
      cout<<"Incorrect";
     wrong++;
    }

 b=0;
 c=0;
 d=0;
} 

void draw()                                    
{
system("clear");                  

for(z=1;z<=4;z++)                                /* Spacing */
 {
   cout<<endl;
 } 

if(wrong==1)                                     /* The hangman */
{
cout << "||" << endl;
cout << "||" << endl;
cout << "||" << endl;
cout << "||" << endl;
cout << "||" << endl;
}
else if(wrong==2)
{
cout << "||===" << endl;
cout << "||  O" << endl;
cout << "||" << endl;
cout << "||" << endl;
cout << "||" << endl;
}

else if(wrong==3)
{
cout << "||===" << endl;
cout << "||  O" << endl;
cout << "||  |" << endl;
cout << "||" << endl;
cout << "||" << endl;
}

else if(wrong==4)
{
cout << "||===" << endl;
cout << "||  O" << endl;
cout << "|| /|\\"<< endl;
cout << "||" << endl;
cout << "||" << endl;
}

else if(wrong==5)
{
cout << "||===" << endl;
cout << "||  O" << endl;
cout << "|| /|\\"<< endl;
cout << "|| / \\"<< endl;
cout << "||" << endl;
}

cout<<endl<<endl;

for(z=0;z<=numChar-1;z++)
   
   {
     cout<<line[z]<<"  ";
   }

  cout<<endl;
 }




int main()
{
 char guess;

cout<<endl<<"_________WELCOME TO HANGMAN GAME________"<<endl;
cout<<endl<<"• Maximum of 5 letters)"<<endl<<"• Common noun only"<<endl;
cout<<endl<<"Enter your name PLAYER 1 : ";
cin>>player1;
cout<<endl<<"Enter your name PLAYER 2 : ";
cin>>player2;
cout<<endl<<endl<<player1<<" enter the word you want "<<player2<<" to guess :  ";
cin>>word;
numChar=strlen(word);

draw();

cout<<endl;

while(wrong!=5 && correct!=numChar)
 {
   cout<<endl<<"Enter your guess : ";
   cin>>guess;
   checkGuess(guess);
   draw();
}
if(wrong==5)
{ cout<<endl<<"YOU LOSE TRY AGAIN "<<endl; }
else if (correct==numChar)
{  cout<<endl<<"CONGRATS YOU WIN"<<endl;   }

}