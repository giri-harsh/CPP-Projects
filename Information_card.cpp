#include <iostream>
#include <string>
using namespace std;
class u1
{
private:
    string name = "Harsh_user";
    int age = 18;
    string gender = "male";
    string blood_group = "B+";
    int height = 165;
    int weight = 60;

public:
    //*****************getters*********************
    void getname()
    {
        cout << "name : " << name << endl;
    }
    void getage()
    {
        cout << " age : " << age << endl;
    }
    void getgender()
    {
        cout << "gender : " << gender << endl;
    }
    void getbg()
    {
        cout << "Blood group : " << blood_group << endl;
    }
    void getheight()
    {
        cout << "height = " << height << endl;
    }//
    void getweight()
    {
        cout << "weight = " << weight << endl;
    }

    //****************************************setters*************************
    void setname(char n1)
    {
        name = n1;
    }
    void setage(int a)
    {
        age = a;
    }
    void setgender(string g)
    {
        gender = g;
    }
    void setbloodg(string bg)
    {
        blood_group = bg;
    }
    void setheight(int h)
    {
        height = h;
    }
    void setweight(int w)
    {
        weight = w;
    }
};
class u2{
    private:
    string name = "Harshita_user";
    int age = 23;
    string gender = "Female";
    string blood_group = "a+";
    int height = 155;
    int weight = 55;

public:
    //*****************getters*********************
    void getname()
    {
        cout << "name : " << name << endl;
    }
    void getage()
    {
        cout << " age : " << age << endl;
    }
    void getgender()
    {
        cout << "gender : " << gender << endl;
    }
    void getbg()
    {
        cout << "Blood group : " << blood_group << endl;
    }
    void getheight()
    {
        cout << "height = " << height << endl;
    }
    void getweight()
    {
        cout << "weight = " << weight << endl;
    }

    //****************************************setters*************************
    void setname(char n1)
    {
        name = n1;
    }
    void setage(int a)
    {
        age = a;
    }
    void setgender(string g)
    {
        gender = g;
    }
    void setbloodg(string bg)
    {
        blood_group = bg;
    }
    void setheight(int h)
    {
        height = h;
    }
    void setweight(int w)
    {
        weight = w;
    }
};

int main()
{

    cout<<"FOR EASE OF ACCES PLEASE ENTER 1. u1 OR u2 2. USER NAME-> Harsh_user or Harshita_user 3. PASSWORD-> 123456789 (for both cases)"<<endl; 
    string user;
    cout<<"Whose infomation would you like to see?"<<endl;
    cin>>user;
    if (user=="u1"){
        u1 harsh;
    cout << "Current information for user Harsh :" << endl;
    harsh.getname();
    harsh.getage();
    harsh.getgender();
    harsh.getbg();
    harsh.getheight();
    harsh.getweight();
    }
    else if (user =="u2"){
         u2 harshita;
    cout << "Current information for user Harshita :" << endl;
    harshita.getname();
    harshita.getage();
    harshita.getgender();
    harshita.getbg();
    harshita.getheight();
    harshita.getweight();
    }
    else 
    cout<<"username does not match"<<endl<<"please try again"<<endl;
    u1 harsh;
    u2 harshita;
    

    
    if (user != "u2"&& user !="u1"){
        cout<<"exiting application"<<endl;
    }
    else {
    char choice;
    cout << "do you wish to change any information (y/n) ?" << endl;
    cin >> choice;
    if (choice == 'n' || choice == 'N')
    {
        // when input is false
        cout << "exiting the application" << endl;
    }
    else if (choice == 'y' || choice == 'Y')
    // when input is true
    
    
    {
        cout << "To edit the information please follow the instructions" << endl;
        cout << "enter the username " << endl;
        string username;
        cin >> username;
        cout << "enter password" << endl;
        string password;
        cin >> password;

        //edit information for harsh user
        if (username == "Harsh_user" && password == "123456789")
        {
            
            cout << "you cannot edit username" << endl;
            cout << "do you wish to edit age (y/n) ?" << endl;
            cin >> choice;
            if (choice == 'y' || choice == 'Y')
            {
                int a;
                cout << "Enter new age " << endl;
                cin >> a;
                harsh.setage(a);
                cout << "displaying edited age " << endl;
                harsh.getage();
            }
            else
                cout << "moving to next section" << endl;

            cout << "do you wish to edit gender (y/n) ?" << endl;
            cin >> choice;
            if (choice == 'y' || choice == 'Y')
            {
                string g;
                cout << "enter new gender (m/f)" << endl;
                cin >> g;
                harsh.setgender(g);
                cout << "displaying new gender" << endl;
                harsh.getgender();
            }
            else
            {
                cout << "moving to next section" << endl;
            }

            cout << "do you wish to edit blood group (y/n) ?" << endl;
            // char choice;
            cin >> choice;
            if (choice == 'y' || choice == 'Y')
            {
                string bg;

                cout << "enter new blood group" << endl;
                cin >> bg;
                harsh.setbloodg(bg);
                cout << "displaying new blood group" << endl;
                harsh.getbg();
            }
            else
                cout << "moving to next section" << endl;

            cout << "do you wish to edit heigh (y/n) ?" << endl;
            cin >> choice;
            if (choice == 'y' || choice == 'Y')
            {
                int h;
                cout << "enter new height" << endl;
                cin >> h;
                harsh.setheight(h);
                cout << "displaying new height" << endl;
                harsh.getheight();
            }
            else
                cout << "moving to next section" << endl;
            cout << "do you wish to change weight ? (y/n) " << endl;
            cin >> choice;
            if (choice == 'y' || choice == 'Y')
            {
                int w;
                cout << "enter new weight" << endl;
                cin >> w;
                harsh.setweight(w);
                cout << "displaying new weight" << endl;
                harsh.getweight();
            }
            else
            {
                cout << "this is the end of information for user : " << username << endl;
             
            }
            cout << "displaying the information for " << username << endl;
                harsh.getname();
                harsh.getage();
                harsh.getgender();
                harsh.getbg();
                harsh.getheight();
                harsh.getweight();
            
        }
        else if (username == "Harshita_user" && password == "123456789"){
            cout << "you cannot edit username" << endl;
            cout << "do you wish to edit age (y/n) ?" << endl;
            cin >> choice;
            if (choice == 'y' || choice == 'Y')
            {
                int a;
                cout << "Enter new age " << endl;
                cin >> a;
                harshita.setage(a);
                cout << "displaying edited age " << endl;
                harshita.getage();
            }
            else
                cout << "moving to next section" << endl;

            cout << "do you wish to edit gender (y/n) ?" << endl;
            cin >> choice;
            if (choice == 'y' || choice == 'Y')
            {
                string g;
                cout << "enter new gender (m/f)" << endl;
                cin >> g;
                harshita.setgender(g);
                cout << "displaying new gender" << endl;
                harshita.getgender();
            }
            else
            {
                cout << "moving to next section" << endl;
            }

            cout << "do you wish to edit blood group (y/n) ?" << endl;
            // char choice;
            cin >> choice;
            if (choice == 'y' || choice == 'Y')
            {
                string bg;

                cout << "enter new blood group" << endl;
                cin >> bg;
                harshita.setbloodg(bg);
                cout << "displaying new blood group" << endl;
                harshita.getbg();
            }
            else
                cout << "moving to next section" << endl;

            cout << "do you wish to edit heigh (y/n) ?" << endl;
            cin >> choice;
            if (choice == 'y' || choice == 'Y')
            {
                int h;
                cout << "enter new height" << endl;
                cin >> h;
                harshita.setheight(h);
                cout << "displaying new height" << endl;
                harshita.getheight();
            }
            else
                cout << "moving to next section" << endl;
            cout << "do you wish to change weight ? (y/n) " << endl;
            cin >> choice;
            if (choice == 'y' || choice == 'Y')
            {
                int w;
                cout << "enter new weight" << endl;
                cin >> w;
                harshita.setweight(w);
                cout << "displaying new weight" << endl;
                harshita.getweight();
            }
            else
            {
                cout << "this is the end of information for user : " << username << endl;
             
            }
            cout << "displaying the information for " << username << endl;
                harshita.getname();
                harshita.getage();
                harshita.getgender();
                harshita.getbg();
                harshita.getheight();
                harshita.getweight();
        }
        else
            cout << "incorect username or password" << endl;
            
    }
    }
}


