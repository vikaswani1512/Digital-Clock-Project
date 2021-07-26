
 //VIKAS KUMAR WANI PROJECT ON DIGITAL CLOCK

#include<bits/stdc++.h>
#include<windows.h>

using namespace std;

int main()
{
    int hour, min, sec;
    cout << "Enter Current time"<<endl;


    cout << "HH ";
    cin >> hour;
    cout << "MM ";
    cin >> min;
    cout << "SS ";
    cin >> sec;



    if (hour > 23)
        {
        cout << "Time Error";
    }
    else if (min > 60)
        {
        cout << "Time Error";
    }
    else if (sec > 60)
    {
        cout << "Time Error";
    }


    else {
        while (1)

        {
           system("cls");


            for (hour; hour <24; hour++)
                {

                for (min; min <=59; min++)
                    {

                    for (sec; sec <=59; sec++)
                        {
                        system("cls");

                        cout <<"Current Time = "<< hour << ":" << min << ":"<< sec ;


                            Sleep(1000);
                    }
                    sec = 0;
                }
                min = 0;
            }
            hour=0;

        }
    }
    return 0;
}
