// single line comment
/* multi
line
comment*/

#include<iostream>

using namespace std; 

//prisha(T) prisha(S) prisha(N)
 
class Student{
    char name[30];
    int maths,sci,eng;
    float perc;

    public:
        void getData(){
            cout<<"Enter name and marks three subject";
            //insertion operator -> print 
            //cout -> console out 
            cin>>name;
            cin>>maths;
            cin>>sci;
            cin>>eng;
            //cascading 
            //cin>>name>>maths>>sci>>eng; 
        }

        void printData(){
            cout<<"\nName  Maths Sci Eng";
            cout<<endl;
            cout<<name<<"\t";
            cout<<maths<<"  "<<sci<<"  "<<eng;
        }

        void printData2(){
            cout<<"Name => "<<name<<" "<<"Maths => "<<maths<<" Sci"<<sci;
        }
    private :
        void iamprivate(){

        }
        
};

int main(){
    Student s; //name,maths,sci,eng , *printData(),*printData2()
    Student s1;// name,maths,sci,eng ,

    s.getData();
    s.printData();

    return 0;
}