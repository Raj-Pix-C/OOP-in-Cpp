#include<iostream>
#include<list>

using namespace std;

class def_cls  // this is a class definition
{
private:
    
public:        // this is a public access specifier which allows the members of the class to be accessed from outside the class.
    string Name;
    long long ID;
    string BloodGroup;
    string LevelSemester;
    string Dept;
    list <string> CourcesCodes;
};


int main()
{
    def_cls StdInfo; // this is an object of the class def_cls
    string temp;

    cin >> StdInfo.Name >> StdInfo.ID >> StdInfo.BloodGroup >> StdInfo.LevelSemester >> StdInfo.Dept;

    for (int i = 0; i < 6; i++)
    {
        
        getline(cin, temp);
        StdInfo.CourcesCodes.push_back(temp);
        temp.clear();
    }
    
    cout << StdInfo.Name <<" "<< StdInfo.ID <<" "<< StdInfo.BloodGroup <<" "<< StdInfo.LevelSemester <<" "<<StdInfo.Dept << endl;
    for(auto& x : StdInfo.CourcesCodes) cout << x << endl;

    return 0;
}