#include<iostream>
 using namespace std;
 int main ( )
 {  
 	int score;
 	cout<<"Please enter your exam score."<<endl;
 	cin>>score;
 	cout<<"Your grade is "<<endl;
 	if(score<=100 && score >79)
 	cout<<"\"A\""<<endl;
 	else if(score<89 && score>74)
 	cout<<"\"B+\""<<endl;
 	else if(score<75 && score>69)
 	cout<<"\"B\""<<endl;
 	else if (score<70 && score>64)
 	cout<<"\"C+\""<<endl;
 	else if (score<65 && score>59)
 	cout<<"\"C\""<<endl;
 	else if (score<60 && score> 54)
 	cout<<"\"D\""<<endl;
 	else if (score<55 && score> 49)
 	cout<<"\"E\""<<endl;
 	else if (score<50 )
 	cout<<"\"F\""<<endl;
 return 0;
 }