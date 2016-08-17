#include <iostream>

class Report{
    private:
        int adno, avg;
        char name;
        int grades;
        int getavg(int &grades);
        
    public:
        int getno(){
            std::cout<<"Admissions #: ";
            std::cin>>adno;
        }
        //char getname();
        int* getgrades(){
            char newgrade;
            int arraysize = 0;
            int allgrades = 0;
            int* oldarr = new int[arraysize];
            while(allgrades == 0){
                std::cout<<"input a grade, or a period to continue: ";
                std::cin>>newgrade;
                if (newgrade == '.'){
                    break;
                }
                else{
                    arraysize++;
                    int* gradearr = new int[arraysize];
                    if (arraysize > 1){
                        for (int i=0; i<(arraysize-1); i++){
                        gradearr[i]=oldarr[i];
                        }
                        gradearr[arraysize] = newgrade;
                    }
                }
            }
            return 0;
        }
        void display(){
            std::cout<<"Admissions #: "<<adno;
        }
};

int main(){
    Report student;
    student.getno();
    //student.getname();
    student.getgrades();
    student.display();
    return 0;
}