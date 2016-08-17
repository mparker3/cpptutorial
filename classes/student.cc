#include <iostream>

class Student{
    private:
        char name;
        float math, sci, hist;
    public:
        void Takedata(){
            std::cout<<"\nEnter name: ";
            std::cin>>name;
            std::cout<<"\nEnter math grade: ";
            std::cin>>math;
            std::cout<<"\nEnter science grade: ";
            std::cin>>sci;
            std::cout<<"\nEnter history grade: ";
            std::cin>>hist;
        }
        void Showdata(){
            std::cout<<"Name: "<<name<<"\nMath: "<<math<<"\nHistory: "<<hist<<"\nScience: "<<sci;
        }
        
};

int main(){
    Student news;
    news.Takedata();
    news.Showdata();
    return 0;
}