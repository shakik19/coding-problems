#include <iostream>

using namespace std;

class Person{
    public:
        string name;
        int age;
        string nationality;
    };
int main()
{
    int n;
    cout<<"Total Persons : ";
    cin>>n;

    Person person[n];
    for(int i = 0; i < n; i++)
    {
        cout<<"Enter Person"<<i+1<<"'s name : ";
        cin>>person[i].name;

        cout<<"Enter Person"<<i+1<<"'s age : ";
        cin>>person[i].age;

        cout<<"Enter Person"<<i+1<<"'s nationality : ";
        cin>>person[i].nationality;
    }

    for(int i = 0; i < n; i++)
    {
        cout<<person[i].name<<'\n'<<person[i].age<<'\n'<<person[i].nationality<<endl;
    }
    return 0;
}