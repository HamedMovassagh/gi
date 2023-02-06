// Hamed movassagh
// daneshgah nabi akram
// 1401/09/06
//TODO if person dosent have lesson can give himself grade

//
#include <ctype.h>
#include <string>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class daneshjo
{

public:
   string name;
   string number;

   string lesson_canpick[6]{"farsi", "riazi", "fizic", "mabani", "tarikh"};
   double test[3]{2,3,1};
   string lesson[3]{};
   double grade[3]{};
   bool   take_listen=false;
   bool   take_grade=false;
};

void show_karname(daneshjo name,string a);
int search_num(string search, string students[],string stdnname[] ,int number); // give index number
daneshjo select_lesson(daneshjo name);//loop the class
void show_list(string students[10],string students_number[10]);
void show_S_list(daneshjo name);
daneshjo Give_Grade(daneshjo name);

int main()
{
   string students[10] = {"ali", "mohammad", "reza"};
   string students_number[10] = {"1", "2", "3"};

   string chooser;
   daneshjo ali;
   daneshjo mohammad;
   daneshjo reza;
   int select;
while(true){
cout<<"-----------------------------"<<endl;   

cout<<"press (L) to show the student list "<<endl;
cout<<"press (E) to exit "<<endl;
cout<<endl;
cout<<endl;
cout<<" please enter the ID "<<endl;
cout<<"-----------------------------"<<endl;   
cin>>chooser;

if (chooser=="E"||chooser=="e")
{
   cout<<"thanks for visiting :) "<<endl;
   break;
}


if (chooser=="L"||chooser=="l"){
  show_list(students,students_number);
  continue;
}


cin.clear();
cin.ignore();
   switch (search_num(chooser,students_number,students,3))
   {
  //ali
   case 0:
while(true){
   
    cout<<"student ali : "<<endl; 
cout<<"-------------------------------------"<<endl;
cout<<"1-take lesson."<<endl;
cout<<"2-give your self grade ."<<endl;
cout<<"3-show  the lesson student pick."<<endl;
cout<<"4-show  the result of grades."<<endl;
cout<<"5-exit"<<endl;
cout<<"-------------------------------------"<<endl;

cin>>select;

   std::cin.clear();
   cin.ignore();

if (select==5)
{
   cout<<"Back"<<endl;
   break;
}
      switch (select)
      {
      case 1:
            ali=select_lesson(ali);
         break;

      case 2:
            ali=Give_Grade(ali);
         break;

      case 3:
            show_S_list(ali);
         break;            
      case 4:
            show_karname(ali,"ali");
         break;   
 
      default:
         cout<<"not valid selection please try agane : "<<endl;
         break;
      } 
     
}
      break;
//mohammad
   case 1:
while(true){
    cout<<"student mohammad : "<<endl;  
cout<<"-------------------------------------"<<endl;
cout<<"1-take lesson."<<endl;
cout<<"2-give your self grade ."<<endl;
cout<<"3-show  the lesson student pick."<<endl;
cout<<"4-show  the result of grades."<<endl;
cout<<"5-exit"<<endl;
cout<<"-------------------------------------"<<endl;

cin>>select;

   std::cin.clear();
   cin.ignore();

if (select==5)
{
   cout<<"Back"<<endl;
   break;
}
      switch (select)
      {
      case 1:
            mohammad=select_lesson(mohammad);
         break;

      case 2:
            mohammad=Give_Grade(mohammad);
         break;

      case 3:
            show_S_list(mohammad);
         break;            
      case 4:
            show_karname(mohammad,"mohammad");
         break;   
 
      default:
         cout<<"not valid selection please try agane : "<<endl;
         break;
      } 
      break;
     
}  
//reza    
 case 2:
while(true){
   cout<<"student reza : "<<endl;
cout<<"-------------------------------------"<<endl;
cout<<"1-take lesson."<<endl;
cout<<"2-give your self grade ."<<endl;
cout<<"3-show  the lesson student pick."<<endl;
cout<<"4-show  the result of grades."<<endl;
cout<<"5-exit"<<endl;
cout<<"-------------------------------------"<<endl;

cin>>select;

   std::cin.clear();
   cin.ignore();

if (select==5)
{
   cout<<"Back"<<endl;
   break;
}
      switch (select)
      {
      case 1:
            reza=select_lesson(reza);
         break;

      case 2:
            reza=Give_Grade(reza);
         break;

      case 3:
            show_S_list(reza);
         break;            
      case 4:
            show_karname(reza,"reza");
         break;   
 
      default:
         cout<<"not valid selection please try agane : "<<endl;
         break;
      } 
     
}  
      break;   
   default:cout<<"not vlaid choice"<<endl;
      break;
   }


}







   return 0;
}




daneshjo select_lesson(daneshjo name)
{
   string choose;
   name.take_listen=true;
   bool invalid_test = true;
   for (size_t i = 0; i < 3; i++)
   {
      for (size_t i = 0; i < 5; i++)
      {
         std::cout << i + 1 << "-"
                   << "( " << name.lesson_canpick[i] << ")" << endl;
      }
      std::cout << endl;

      std::cout << "please enter the lesson you want to pick (" << i + 1 << "/3) : ";



      while (true)
      {  
         getline(cin, choose);
         if (!isdigit(choose[0]))
         {
            std::cout << "invalid inpute option pick another one : "<<endl;
            cin.clear();
            fflush(stdin);
            continue;
         }
         else if (((stoi(choose)) > (5)) || ((stoi(choose)) <= (0)))
         {
            std::cout << "the number in not an option pick another one : "<<endl;
            cin.clear();
            fflush(stdin);
            continue;
         }
         else if (name.lesson_canpick[stoi(choose) - 1] == "entekhab shod")
         {
            std::cout << "this lesson already has been taken option pick another one : "<<endl;
            cin.clear();
            fflush(stdin);
            continue;
         }
         else
         {
            break;
         }
      }
      stoi(choose);

      name.lesson[i] = name.lesson_canpick[stoi(choose) - 1];
      name.lesson_canpick[stoi(choose) - 1] = "entekhab shod";
   }
   return name;
}

void show_S_list(daneshjo name){
   string bob;
   if (!(name.take_listen)){
      cout<<"(((the Student did not take lesson ! please choose the lesson you want to take)))"<<endl;
      return;  
    
   }

   cout<<"      ::doros entakhabi shoma::"<<endl;
   for (size_t i = 0; i < 3; i++)
   {
      cout<<i+1<<"- "<<name.lesson[i]<<endl;
   }
   
   cout<<endl;
   cout<<" please  enter somthing to go to the menue"<<endl;
   cin>>bob;
   
}

void show_list(string students[10],string students_number[10]){
   for (size_t i = 0; i < 3; i++)
   {
      cout<<i+1<<"- "<<students[i]<<"        shomare daneshjo : "<<students_number[i]<<endl;

   }
   

}


daneshjo Give_Grade(daneshjo name){
string grade_number;
name.take_grade=true;

for (size_t i = 0; i < 3; i++)
{
   
cout << "Enter the grade lesson "<<name.lesson[i] <<endl;
   
cin.clear();
fflush(stdin);

   while (true)
   {
   getline(cin,grade_number);

           if (!isdigit(grade_number[0]))
         {
            std::cout << "invalid inpute option pick another one "<<endl;
            cin.clear();
            fflush(stdin);
            continue;
         }else if(stod(grade_number)>20||stod(grade_number)<0){
            std::cout << "the grade is wrong amount enter the correct one "<<endl;
            cin.clear();
            fflush(stdin);
            continue;

         }
         else{
            break;
         }

   }
   name.grade[i]=stod(grade_number);

}

double miangin;
for (size_t i = 0; i < 3; i++)
{
   miangin+=name.grade[i];

}
cout<<"your avereg is : "<<miangin/3<<endl;

return name;

}

int search_num(string search, string students[],string stdname[],int number) // give index number
{
   int b = 0;
   for (size_t i = 0; i < number; i++)
   {
      if (search == students[i])
      {
         cout<<" the name is : "<<stdname[i]<<endl;
         return i;
      }
   }
   cout<<"there is no one with this ID "<<endl;
   return 404 ;

}


void show_karname(daneshjo name,string a){
double miangin;
double safe;
if (!(name.take_grade))
{
   cout<<"you did not give grade to your self please make yourself comfortable :) "<<endl;
   return;
}







cout<< a << "result is : "<<endl;
cout<<endl;
for (size_t i = 0; i < 3; i++)
{
   cout<<name.lesson[i]<<"_______"<<name.grade[i]<<endl;
   miangin+=name.grade[i];

}
cout<<endl;
cout<<"your avreg is : "<<miangin/3<<endl;
cout<<endl;
cout<<"enter somthing to close the page"<<endl;
cin>>safe;


}




