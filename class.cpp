// #include <iostream>
// #include <string.h>
// #include <math.h>
// using namespace std;
// class hero
// {

//     int health = 70;
// };

// int main()
// {
//     hero shree;
//     //shree.health = 30;
//     cout << sizeof(shree);  //when class have properties all get added to size n when it is empty then 1 byte get allocated for identification or rectification
// }

// accessing  private elements/data members by setting public getter and setters
// #include <iostream>
// using namespace std;
// class hero
// {
// private:
//     int health = 50;
//     char ch;

// public: // we have to declare them as public getters and setters
//     int gethealth()
//     {
//         return health;
//     }
//     void sethealth(int h)
//     {
//         health = h;
//     }
// };

// int main()
// {
//     hero shree;
//     cout << shree.gethealth()<<"\n";
//     shree.sethealth(70);
//     cout << shree.gethealth()<<"\n";
//     cout<<sizeof(shree);//o\p eight and not 5
// }

// padding and greedy allignment
//  class hero {
//      char c;
//      double d;
//      int i;
//      short s;
//  };
//  int main(){
//  hero shree;
//      cout<<sizeof(shree);
//  }//o/p 24 bytes

// class Example {
//     double d;
//     int i;
//     short s;
//     char c;
// };
// int main(){
//     Example shree;
//     cout<<sizeof(shree);
// }//o/p 16 bytes coz of  greedy allignment is done here by rearranging elements in descending order

// dynamically allocation
//  #include <iostream>
//  using namespace std;
//  class hero
//  {
//  private://public:
//      int health = 50;
//      char ch;

// public: // we have to declare them as public getters and setters
//     int gethealth()
//     {
//         return health;
//     }
//     void sethealth(int h)
//     {
//         health = h;
//     }
// };

// int main()
// {
//  //static allocation   hero shree;
//  hero *shree=new hero;

// //dynamic allocation

//  //second method cout<<(*shree).health;
//  //cout<<shree->health; if members of class are public
//  //cout<<(*shree).health;
// cout<<(*shree).gethealth()<<"\n";//if  members of class are private
//  cout<<shree->gethealth();
// }

// constructor
//  class hero{
//      private:
//      int health;
//      public:
//      hero(){
//          cout<<"constructor called" ;
//      }
//  };
//  int main(){

// hero shree;
// }

// parameterized constructor
//  class hero{
//      private:
//      int health;
//      public:
//      hero(int h){
//          this->health=h ;
//      }
//      int gethealth(){
//          return health;
//      }
//  };
//  int main(){

// hero shree(10);
// cout<<shree.gethealth() ;
// }

// default/simple  copy constructor it directly copies the values
//

// parameterized constructor
//  class hero
//  {
//  private:
//      int health;

// public:
//      hero(int h)//parameterized )
//      {
// this->health=h;//this is stroring the adress of current object
//      }

//     void print()
//     {
//         cout << this->health << "\n";
//     }

//     int gethealth()
//     {
//         return health;
//     }
//     void sethealth(int h)
//     {
//         this->health = h;
//     }
// };
// int main()
// {

//     // static allocation
//     hero shree(10); //passing this values

//     hero suresh(shree);
//     cout<<suresh.gethealth();
//     // hero naveen(shree);
//     // cout<<naveen.gethealth();//copy constructor

//     // dynamic allocation
//     //  hero *suraj=new hero(20);
//     //  cout<<(*suraj).gethealth();
// }

// shallow copy
// class hero
// {
// private:
//     int health;

// public:
//     char *name;
//     hero()
//     {
//         name = new char[100]; // allocating memory on heap is good practic thats why we are declaring int his way
//     }

//     void print()
//     {
//         cout << this->name << "\n";
//     }

//     void setName(char name[])
//     {
//         strcpy(this->name, name);
//     }
// };
// int main()
// {

//    hero shree;
//    hero suraj(shree);
//    char name[7]="babbar";
//    shree.setName(name);
//    shree.print();
//    cout<<"\n";

//    shree.name[0]='h';
//    shree.print();
//    cout<<"\n";

//    suraj.print();//but we didnt change anything in surajs name but in automatically reflects shree name because it uses same memory location
// }
// o\p
// babbar gabbar gabbar

// deep copy
// class hero
// {
// private:
//     int health;

// public:
//     char *name;

//     hero()
//     {
//         name = new char[100]; // allocating memory on heap is good practic thats why we are declaring int his way
//     }

//     void print()
//     {
//         cout << this->name << "\n";
//     }

//     void setName(char name[])
//     {
//         strcpy(this->name, name);
//     }

//     hero(hero& temp)
//     {
//         char *ch = new char[strlen(temp.name) + 1];
//         strcpy(ch, temp.name);
//         this->name = ch;
//     }
// };
// int main()
// {

//     hero shree;
//     hero suraj(shree);
//     char name[7] = "babbar";
//     shree.setName(name);
//     shree.print();
//     cout << "\n";

//     shree.name[0] = 'g';
//     shree.print();
//     cout << "\n";

//     suraj.print();

// }

// copy assignment operator
//  shree=suraj;

// static member belongs to class not to object and initialize with
//  class hero{
//      public:
//      static int name;

// };
// int hero::name=10;
// int main(){
//     cout<<hero::name;

// }

// static function only access static member
//  no need to create objct simply use class name
//  no this keyword coz no object
//  only access static members
//  class hero{
//      public:
//      static int name;
//      static int random(){
//  cout<<name;
//      }

// };
// int hero::name=10;
// int main(){
//     hero::random();

// }

// Encapsulation
// WRAPPING UP DATA MEMBERS / STATE PROPERTIES AND FUNCTONS / BEHAVIOURS METHODS

// class hero
// {
// private: // encapsulation
//     int age = 5;
//     string name = "shree";

// public:
//     int getage()
//     {
//         cout << this->age;
//     }
// };
// int main()
// {
//     //    hero shree;
//     //    shree.getage();

//     //  hero *bheem=new hero;
//     //    bheem->getage();
// }

// inheritance
// class human
// {
// public:
//     int height;
//     int weight;
//     private:
//     int age;
//     public:
//     int getheight()
//     {
//         return this->height ;
//     }
//     void setheight(int h)
//     {
//         this->height = h;
//     }
// };
// class male : public human
// { public:
//     int color=25;
//     int sleep()
//     {
//         cout << "sleeping";
//     }
// };
// int main(){
//     male object1;
//     cout<<object1.getheight()<<endl;
//     cout<<object1.height<<endl;
//     cout<<object1.age<<endl;//not accessible;
//     cout<<object1.weight<<endl;
//     cout<<object1.color;

// }
// hello world
// hello world