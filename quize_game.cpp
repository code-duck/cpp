#include <iostream>
#include <cctype>

int main()
{
    std::string questions[] = {{"1. what year was c++ got created?: "},
                             {"2. who invented c++?: "},
                            {"3. c++ is based on what language?: "},
                           {"4. is earth flat?: "}};

    std::string options[][4] = {{"A. 1969 ", "B. 1975 ", "C. 1985 ", "D. 1989 "},
                                {"A. Guido van rossum", "B. Bjarne stroustrup", "C. John carmack", "D. Mark zukerberg"},
                                {"A. C", "B. C+", "C. C--", "D. B++"},
                                {"A. yes", "B. no", "C. sometimes", "D. what's earth"}};    

    char Answerkey[] = {'C', 'B', 'A', 'B'};    
    
    int size = sizeof(questions)/sizeof(questions[0]);

    char guess;
    int score = 0 ;

    for(int i = 0; i < size; i++)
    {
        std::cout << questions[i] << "\n";

        for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]) ; j++)
        {
            std::cout << options[i][j] << "\n";
        }

        std::cin >> guess; 
        guess = toupper(guess); // makes the lower case user input automatically uppercase

        if(guess == Answerkey[i])
        {
            std::cout << "CORRECT\n";
            score++;
        }
        else{
            std::cout << "WRONG\n";
            std::cout<< "Answer: " << Answerkey[i] << '\n';
        }
        std::cout << '\n';
    }

    std::cout << "CORRECT GUESSES: " << score << '\n';
    std::cout << "no. of QUESTIONS: " << size << '\n';
    std::cout << "SCORE:" << (score/(double)size)*100 << "%";

    return 0;
}