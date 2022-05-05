#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <ctime>

using namespace std;

void wishme()
{
    time_t now = time(0);
    tm *time = localtime(&now);

    if (time->tm_hour < 12)
    {
        cout << "<====GOOD MORNING BOSS====>" << endl;
        string phrase = "GOOD MORNING BOSS";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
    else if (time->tm_hour >= 12 && time->tm_hour <= 16)
    {
        cout << "<====GOOD AFTERNOON BOSS====>" << endl;
        string phrase = "GOOD AFTERNOON BOSS";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
    else if (time->tm_hour > 16 && time->tm_hour < 24)
    {
        cout << "<====GOOD EVENING BOSS====>" << endl;
        string phrase = "GOOD EVENING BOSS";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
}

void datetime()
{
    time_t now = time(0);
    char *dt = ctime(&now);
    cout << "The Date and Time is:- " << endl
         << dt << endl;
    string phrase = "The Date and Time is";
    string command = "espeak \"" + phrase + "\"";
    const char *charCommand = command.c_str();
    system(charCommand);
}

int main()
{
    system("cls");
    cout << "\t\t<=====================================   W E L C O M E           =========================================>" << endl;
    cout << "\t\t<=====================================   I'M A VIRTUAL ASSISTANT =========================================>" << endl;
    cout << "\t\t<=====================================   MY NAME IS JARVIS       =========================================>" << endl;
    cout << "\t\t<=====================================   I'M HERE TO HELP YOU !  =========================================>" << endl
         << endl;
    string phrase = "WELCOME to the varvis world  I'M A VIRTUAL ASSISTANT  MY NAME IS JARVIS  I'M HERE TO HELP YOU";
    string command = "espeak \"" + phrase + "\"";
    const char *charCommand = command.c_str();
    system(charCommand);

    char password[20];
    char ch[100];

    do
    {
        cout << "| =================== |" << endl;
        cout << "| ENTER YOUR PASSWORD |" << endl;
        cout << "| =================== |" << endl
             << endl;
        string phrase = "enter your password";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);

        gets(password);
        cout << endl;

        STARTUPINFO startInfo = {0};
        PROCESS_INFORMATION processInfo = {0};

        if (strcmp(password, "jarvis") == 0)
        {
            cout << "\n<=================================================================================>\n\n";
            wishme();
            do
            {
                cout << "\n<=================================================================================>\n\n";
                cout << endl
                     << "How can i help you boss......" << endl
                     << endl;
                cout << "Your query ===> ";
                string phrase = "How can i help you boss.......";
                string command = "espeak \"" + phrase + "\"";
                const char *charCommand = command.c_str();
                system(charCommand);
                gets(ch);
                cout << endl;
                cout << "Here is the result for you query ===>";

                if (strcmp(ch, "hi") == 0 || strcmp(ch, "hey") == 0 || strcmp(ch, "hello") == 0)
                {
                    cout << "Hello Boss...." << endl;
                    string phrase = "Hello Boss....";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

                else if (strcmp(ch, "bye") == 0 || strcmp(ch, "exit") == 0 || strcmp(ch, "stop") == 0 || strcmp(ch, "close") == 0 || strcmp(ch, "cls") == 0)
                {
                    cout << "Bye Boss, Have a nice day !!!!" << endl;
                    string phrase = "Bye Boss, Have a nice day";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    exit(0);
                }

                else if (strcmp(ch, "who are you") == 0 || strcmp(ch, "tell me about yourself") == 0 || strcmp(ch, "kon") == 0)
                {
                    cout << "I'm JARVIS a virtual assistant created by HIMANSHU THAKUR" << endl;
                    string phrase = "I'm JARVIS a virtual assistant created by HIMANSHU THAKUR";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

                else if (strcmp(ch, "how are you") == 0 || strcmp(ch, "whatsup") == 0 || strcmp(ch, "how is your day") == 0)
                {
                    cout << "I'm good Boss, tell me how can i help you...." << endl;
                    string phrase = "I'm good Boss.........";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

                else if (strcmp(ch, "time") == 0 || strcmp(ch, "date") == 0)
                {
                    datetime();
                }

                else if (strcmp(ch, "open notepad") == 0)
                {
                    cout << "opening notepad.........." << endl;
                    string phrase = "opening notepad..........";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Windows\\notepad.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }

                else if (strcmp(ch, "open google") == 0)
                {
                    cout << "opening google.........." << endl;
                    string phrase = "opening google..........";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.google.com");
                }

                else if (strcmp(ch, "open facebook") == 0)
                {
                    cout << "opening facebook.........." << endl;
                    string phrase = "opening facebook..........";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.facebook.com");
                }

                else if (strcmp(ch, "open instagram") == 0)
                {
                    cout << "opening instagram.........." << endl;
                    string phrase = "opening instagram..........";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.instagram.com");
                }

                else if (strcmp(ch, "open youtube") == 0)
                {
                    cout << "opening youtube.........." << endl;
                    string phrase = "opening youtube..........";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.youtube.com");
                }

                else
                {
                    cout << "Sorry could not understant you query please type again !!!!" << endl;
                    string phrase = "Sorry could not understant you query please type again.....";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

            } while (1);
        }
        else
        {
            cout << "Incorrect password" << endl;
            string phrase = "Incorrect password";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
        }

    } while (1);

    return 0;
}