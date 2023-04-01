#include<iostream>
#include<windows.h>
#include<string>
using namespace std;
int main(){
    char input,Y,N;
    string name,end;
    int age;


   cout<<"         WELCOME TO CHATBOX "<<endl;
   cout<<" TO CONTINUE THE PROGRAM PRESS 'Y' OR TO END THE PROGRAM PRESS 'N' "<<endl;
   cin>>input;

   if(input=='Y'){

   }
   else{
   cout<<"THANKS FOR USING CHATBOX"<<endl;
   return -1;
   }

  system("cls"); //to clear the screen & new terminal is open
  
  while(end!="stop"){
       cout<<"    HELLO USER "<<endl;
       cout<<"   What is your name ? "<<endl;
       cin>>name;
       cout<<name<<" what is your age ?"<<endl;
       cin>>age;




  }
 




    return 0;
}