#include<iostream>
using namespace std;

//like a matrix row &columns
char space[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'} };
int row=0;
int col=0;
char token='x';
string s1=" ";
string s2=" ";
bool tie=false;
void func()
{
//boxes structure

cout<<"       |        |"<<endl;
cout<<"  "<<space[0][0]<<"    | "<<"  "<<space[0][1]<<"    | "<<"  "<<space[0][2]<<endl;
cout<<"_______|________|_______"<<endl;
cout<<"       |        |"<<endl;
cout<<"  "<<space[1][0]<<"    | "<<"  "<<space[1][1]<<"    | "<<"  "<<space[1][2]<<endl;
cout<<"_______|________|_______"<<endl;
cout<<"       |        |"<<endl;
cout<<"  "<<space[2][0]<<"    | "<<"  "<<space[2][1]<<"    | "<<"  "<<space[2][2]<<endl;
cout<<"       |        |"<<endl;

}

void func2(){
int digit=0;

if(token=='x'){
cout<<s1<<" please enter ";
cin>>digit;
}
if(token=='0'){
cout<<s2<<" please enter ";
cin>>digit;
}
if(digit==1){
    row=0;
    col=0;
}
if(digit==2){
    row=0;
    col=1;
}
if(digit==3){
    row=0;
    col=2;
}
if(digit==4){
    row=1;
    col=0;
}
if(digit==5){
    row=1;
    col=1;
}
if(digit==6){
    row=1;
    col=2;
}
if(digit==7){
    row=2;
    col=0;
}
if(digit==8){
    row=2;
    col=1;
}
if(digit==9){
    row=2;
    col=2;
} 

else if(digit<1 || digit>9){
    cout<<"INVALID!!!"<<endl;
   
    
}
if(token=='x' && space[row][col]!='x' && space[row][col]!='0'){
    space[row][col]='x';
    token='0';
}
else if(token=='0' && space[row][col]!='x' && space[row][col]!='0'){
    space[row][col]='0';
    token='x';
}
else{
    cout<<"there is no empty space "<<endl;
    func2();
}
}
bool func3(){
    //for checking row,column wise
    for(int i=0; i<3; i++){
   if((space[i][0]==space[i][1] && space[i][0]==space[i][2]) || (space[0][i]==space[1][i] && space[0][i]==space[2][i]))
   { return true; }
    }
   //checking diagnol wise
    if((space[0][0]==space[1][1] && space[1][1]==space[2][2]) ||(space[0][2]==space[1][1] && space[1][1]==space[2][0]))
  {
    return true;
  }
  //to check wheter game is still going on or not 
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++)
    {
     if(space[i][j]!='x' && space[i][j]!='0')
     {return false;}
    }
  }
    tie=true;
    return true;
}


int main(){
cout<<"Enter the name of 1st player "<<endl;
cin>>s1;
cout<<"Enter the name of 2nd player "<<endl;
cin>>s2;

while(!func3())
{
    func();
    func2();
    func3();
}
if( token=='x' && tie==false){
    cout<<s2<<" wins the game "<<endl;
}
else if(token=='0' && tie==false){
    cout<<s1<<" wins the game "<<endl;
}
else{
    cout<<"the game is tie"<<endl;
}

    return 0;
}