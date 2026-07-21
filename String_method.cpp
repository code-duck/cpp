#include<iostream>

int main_1()
{
    std::string name;

    std::cout<<"enter your name: ";
    std::getline(std::cin, name);

    if(name.length()>12)   //counts the lenght of a string first leter being index 0
    {
        std::cout<<"your name can't be 12 character long"<< std::endl;

    }
    else{

        std::cout<< "welcome "<< name ;

    }
}

int main_2()
{
    std::string name;

    std::cout<<"enter your name: ";
    std::getline(std::cin, name);

    if( name.empty())   //is a based on boolean concept it checks wether the user has enterd a string or not
    
    {
        std::cout<< "you didn't enter your name"<< std::endl;

    }
    else{
        std::cout<< "hello "<< name;
    }
}

int main_3()
{
    std::string name;

    std::cout<<"enter your name: ";
    std::getline(std::cin, name);

    name.clear(); // It deletes all characters from the string making string size 0 it oleaves an empty sting "".

    std::cout<< "hello "<< name;

}

int main_4()
{
    std::string name;

    std::cout<< "enter your name: ";
    std::getline(std::cin, name);

    name.append("@gmail.com"); // it attaches a string to any other string, what has been written between its brackets with double quotes.

    std::cout<<"your user name is "<< name;

}

int main_5()
{
    std::string name;

    std::cout<< "enter your name: ";
    std::getline(std::cin, name);

    std::cout<< name.at(3)<<std::endl; //returns whatever string character that is on the mentioned index of this function's bracklet
    // the string index starts with 0.
}

int main_6()
{
     std::string name;

    std::cout<< "enter your name: ";
    std::getline(std::cin, name);

    name.insert(0, "@");// inserts caracter at mentioned index that is written in those brackets.

    std::cout<< "hello user "<< name;
}

int main_7()
{
    std::string name;

    std::cout<< "enter your name: ";
    std::getline(std::cin, name);

    std::cout<<name.find("y"); //this will find certain character in that string and will retrun their index number.
}    

int main()
{
    std::string name;

    std::cout<< "enter your name: ";
    std::getline(std::cin, name);
    
    name.erase(0, 6); //it removes string character from the first mentioned index to the 2nd mentioned index in those brackets.

    std::cout<< " hello MR."<< name<<'\n';

}