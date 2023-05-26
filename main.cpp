#include <iostream>
#include <cstdio>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

using namespace std;

class Primary
{
public:
    char sex, month[15], zodiac[20], choice;
    string name;
    int day, year,c;

    menu(){
        system("cls");
        cout<<"\t\t\t*----------------------------------------------*\t\t\t\n"<<endl;
        cout<<"\t\t\t             Welcome to Divination            \t\t\t\n"<<endl;
        cout<<"\t\t\t             The premier application\t\n            \t\t          For all your Horoscopic needs! \t\t\t\n"<<endl;
        cout<<"\t\t\t                   To begin\n             \t\t\t   Please view the Instructions \t\n"<<endl;
        cout<<"\t\t\t*----------------------------------------------*\t\t\t\n\n\n"<<endl;


        cout<<"\t\t\t*----------------------------------------------*\t\t\t\n"<<endl;
        cout<<"\t\t\t             Please select an option            \t\t\t\n"<<endl;
        cout<<"\t\t\t*----------------------------------------------*\t\t\t\n\n\n"<<endl;
        cout<<"\t A. Instructions \t"<<"\t B. Check Horoscope\t\n"<<endl;
        cout<<"\t C. Horoscope Traits \t"<<"\t D. Daily Horoscope \t\n"<<endl;
        cout<<"\t E. Compatibility \t"<<"\t F. Chinese Zodiac  \t\n"<<endl;
        cout<<"\t G. Lucky Number \t"<<"\t H. Exit \t\n"<<endl;
        cin>>choice;
        return choice;
}


         i_name(){
         cout<<"\tPlease enter your first name \t\n"<<endl;
         cin>>name;}

        i_sex (){
         cout<<"\tPlease enter your sex (M/F)? \t\n"<<endl;
         cin>>sex;
        if (sex != 'M' && sex != 'F')
         {cout<<"\tYour entered gender is incorrect. Please try again!\t\n"<<endl; i_sex();}
        else
        {return sex;}}

        i_month(){
         {cout<<"\tPlease enter your birth month \t\n"<<endl;
         cin>>month;
         if (strcmp(month, "January") != 0 && strcmp(month, "February") != 0  && strcmp(month, "March") != 0  && strcmp(month, "April") != 0  && strcmp(month, "May") != 0  &&
            strcmp(month, "June") != 0  && strcmp(month, "July") != 0  && strcmp(month, "August") != 0  && strcmp(month, "September") != 0  && strcmp(month, "October") != 0  &&
            strcmp(month, "November") != 0  && strcmp(month, "December") != 0)
         { cout<<"\tYour entered birth month is incorrect. Please try again!\t\n"<<endl;
            i_month();
         }
          else {return month[15];}}}

        i_day()
         {cout<<"\tPlease enter your birth day in numerals\t\n"<<endl;
         cin>>day;
         if (day <= 0 || day>31)
         {cout<<"\tYour entered day in numerals is incorrect. Please try again!\t\n"<<endl;
         i_day();}
         else {return day;}}

     findzodiac()
    {

        if (strcmp(month, "March") == 0 && day >=21 || strcmp(month, "April") == 0 && day <= 19 )

        {strcpy(zodiac, "Aries");}

        else if (strcmp(month, "April") == 0 && day >= 20 || strcmp(month, "May") == 0 && day <= 20 )

        {strcpy(zodiac, "Taurus");}

        else if (strcmp(month, "May") == 0 && day >=21 || strcmp(month, "June") == 0 && day <= 20 )

        {strcpy(zodiac, "Gemini");}

        else if (strcmp(month, "June") == 0 && day >=21 || strcmp(month, "July") == 0 && day <= 22 )

        {strcpy(zodiac, "Cancer");}

        else if (strcmp(month, "July") == 0 && day >=23 || strcmp(month, "August") == 0 && day <= 22 )

        {strcpy(zodiac, "Leo");}

        else if (strcmp(month, "August") == 0 && day >=23 || strcmp(month, "September") == 0 && day <= 22 )

        {strcpy(zodiac, "Virgo");}

        else if (strcmp(month, "September") == 0 && day >=23 || strcmp(month, "October") == 0 && day <= 22 )

        {strcpy(zodiac, "Libra");}

        else if (strcmp(month, "October") == 0 && day >=23 || strcmp(month, "November") == 0 && day <= 21 )

        {strcpy(zodiac, "Scorpio");}

        else if (strcmp(month, "November") == 0 && day >=22 || strcmp(month, "December") == 0 && day <= 21 )

        {strcpy(zodiac, "Sagittarius");}

        else if (strcmp(month, "December") == 0 && day >=22 || strcmp(month, "January") == 0 && day <= 19 )

        {strcpy(zodiac, "Capricorn");}

        else if (strcmp(month, "January") == 0 && day >=20 || strcmp(month, "February") == 0 && day <= 18 )

        {strcpy(zodiac, "Aquarius");}

        else if (strcmp(month, "February") == 0 && day >=19 || strcmp(month, "March") == 0 && day <= 20 )

        {strcpy(zodiac, "Pisces");}
        else {cout<<"Error! Incorrect Entry. Please try again."<<endl;}
    }

    display1()
    {
        cout<<"\tEnter birth year\t"<<endl;
        cin>>year;
        system("cls");
        cout<<"\n\t "<<name<<endl;
        cout<<"\n\t "<<sex<<endl;
        cout<<"\n\t "<<"Born "<<day<< "/" <<month<< "/" <<year<< endl;
        cout<<"\n\tYour zodiac is "<<zodiac<<endl;
        return zodiac[20];
        getch();
    }


};

class Chinese
{
public:

int year;
    chi()
    {
        cout<<"\tReady to see your Chinese Zodiac counterpart?"<<endl;
        cout<<"\n\tFirst, Enter the year of your birth."<<endl;
        cin>>year;
        if (year ==1948 || year ==1960 || year ==1972 || year ==1984 || year ==1996 || year ==2008)
        {
            cout<<"\n\tYou were born under the sign of the Rat."<<endl;
            getch();
            cout<<"\n\tStrengths : \n\tAdaptable, Smart, Cautious, Acute, Alert, Positive, Flexible, Outgoing, Cheerful."<<endl;
            getch();
            cout<<"\n\tWeaknesses : \n\tTimid, Unstable, Stubborn, Picky, Lack of persistence, Querulous."<<endl;
            getch();
        }
        else if (year ==1949 || year ==1961 || year ==1973 || year ==1985 || year ==1997 || year ==2009)
        {
            cout<<"\n\tYou were born under the sign of the Ox."<<endl;
            getch();
            cout<<"\n\tStrengths : \n\tHonest, Industrious, Patient, Cautious, Level-headed, Strong-willed, Persistent. "<<endl;
            getch();
            cout<<"\n\tWeaknesses : \n\tTimid, Unstable, Stubborn, Picky, Lack of persistence, Querulous."<<endl;
            getch();
        }
        else if (year ==1950 || year ==1962 || year ==1974 || year ==1986 || year ==1998 || year ==2010)
        {
            cout<<"\n\tYou were born under the sign of the Tiger."<<endl;
            getch();
            cout<<"\n\tStrengths : \n\tTolerant, Loyal, Valiant, Courageous, Trustworthy, Intelligent, Virtuous."<<endl;
            getch();
            cout<<"\n\tWeaknesses : \n\tArrogant, Short-tempered, Hasty, Traitorous."<<endl;
            getch();
        }
        else if (year ==1951 || year ==1963 || year ==1975 || year ==1987 || year ==1999 || year ==2011)
        {
            cout<<"\n\tYou were born under the sign of the Rabbit."<<endl;
            getch();
            cout<<"\n\tStrengths : \n\tGentle, Sensitive, Compassionate, Amiable, Modest, Merciful. "<<endl;
            getch();
            cout<<"\n\tWeaknesses : \n\tAmorous, Hesitant, Stubborn, Timid, Conservative."<<endl;
            getch();
        }
        else if (year ==1952 || year ==1964 || year ==1976 || year ==1988 || year ==2000 || year ==2012)
        {
            cout<<"\n\tYou were born under the sign of the Dragon."<<endl;
            getch();
            cout<<"\n\tStrengths : \n\tDecisive, Inspiring, Magnanimous, Sensitive, Ambitious, Romantic."<<endl;
            getch();
            cout<<"\n\tWeaknesses : \n\tEccentric, Tactless, Fiery, Intolerant, Unrealistic."<<endl;
            getch();
        }
        else if (year ==1953 || year ==1965 || year ==1977 || year ==1989 || year ==2001 || year ==2013)
        {
            cout<<"\n\tYou were born under the sign of the Snake."<<endl;
            getch();
            cout<<"\n\tStrengths : \n\tSoft-spoken, Humorous, Sympathetic, Determined, Passionate, Smart."<<endl;
            getch();
            cout<<"\n\tWeaknesses : \n\tJealous, Suspicious, Sly, Fickle, Nonchalant."<<endl;
            getch();
        }
        else if (year ==1954 || year ==1966 || year ==1978 || year ==1990 || year ==2002 || year ==2014)
        {
            cout<<"\n\tYou were born under the sign of the Horse."<<endl;
            getch();
            cout<<"\n\tStrengths : \n\tNice personalities, Warm-hearted, Upright, Easygoing, Independent, Positive attitude."<<endl;
            getch();
            cout<<"\n\tWeaknesses : \n\tSpender, Frank, Materialistic, Open, Lack of Persistence."<<endl;
            getch();
        }
        else if (year ==1955 || year ==1967 || year ==1979 || year ==1991 || year ==2003 || year ==2015)
        {
            cout<<"\n\tYou were born under the sign of the Ram."<<endl;
            getch();
            cout<<"\n\tStrengths : \n\tGentle, Softhearted, Considerate, Attractive, Hardworking, Persistent, Thrift."<<endl;
            getch();
            cout<<"\n\tWeaknesses : \n\tTindecisive, Timid, Vain, Pessimistic, Moody, Weak-willed."<<endl;
            getch();
        }
        else if (year ==1956 || year ==1968 || year ==1980 || year ==1992 || year ==2004 || year ==2016)
        {
            cout<<"\n\tYou were born under the sign of the Monkey."<<endl;
            getch();
            cout<<"\n\tStrengths : \n\tEnthusiastic, Self-assured, Sociable, Innovative."<<endl;
            getch();
            cout<<"\n\tWeaknesses : \n\tJealous, Suspicious, Cunning, Selfish, Arrogant."<<endl;
            getch();
        }
         else if (year ==1957 || year ==1969 || year ==1981 || year ==1993 || year ==2005 || year ==2017)
        {
            cout<<"\n\tYou were born under the sign of the Rooster."<<endl;
            getch();
            cout<<"\n\tStrengths : \n\tIndependent, Capable, Warm-hearted, Self-respect, Quick minded."<<endl;
            getch();
            cout<<"\n\tWeaknesses : \n\tImpatient, Critical, Eccentric, Narrow-minded, Selfish."<<endl;
            getch();
        }
        else if (year ==1958 || year ==1970 || year ==1982 || year ==1994 || year ==2006 || year ==2018)
        {
            cout<<"\n\tYou were born under the sign of the Dog."<<endl;
            getch();
            cout<<"\n\tStrengths : \n\tValiant, Loyal, Responsible, Clever, Courageous, Lively."<<endl;
            getch();
            cout<<"\n\tWeaknesses : \n\tSensitive, Conservative, Stubborn, Emotional."<<endl;
            getch();
        }
          else if (year ==1959 || year ==1971 || year ==1983 || year ==1995 || year ==2007)
        {
            cout<<"\n\tYou were born under the sign of the Pig."<<endl;
            getch();
            cout<<"\n\tStrengths : \n\tWarm-hearted, Good-tempered, Loyal, Honest, Gentle."<<endl;
            getch();
            cout<<"\n\tWeaknesses : \n\tNaive, Gullible, Sluggish, Short-tempered."<<endl;
            getch();
        }
    }


};

class Traits
{
public:

    char zodiac[20];

    FindTraits()
    {
        cout<<"\tPlease enter your previously obtained Zodiac : "<<endl;
        cin>>zodiac;

        if(strcmp(zodiac, "Aries") == 0)
           {
                cout<<"\n\tAries is the most courageous and ambitious sign, the leader of every pack."<<endl;
                getch();
                cout<<"\n\tTheir determination is unmatched when it comes to getting what they want."<<endl;
                getch();
                cout<<"\n\tThey work hard but also play hard, The life of every party!"<<endl;
                getch();
                cout<<"\n\tThey are easygoing and enjoys the company of all kinds of people."<<endl;
                getch();
                cout<<"\n\tThey are Impulsive and sometimes acting first and thinking later is risky,\n\tbut more often than not, it leads to a once-in-a-lifetime opportunity."<<endl;
                getch();
            }

        else if(strcmp(zodiac, "Taurus") == 0)
           {

               cout<<"\n\tTaurus are strong and with great stamina for physical and mental tasks."<<endl;
               getch();
               cout<<"\n\tThey can be stubborn and unwilling to give ground."<<endl;
               getch();
               cout<<"\n\tThey are Materialistic and love the finer things in life."<<endl;
               getch();
               cout<<"\n\tThey appreciate beauty."<<endl;
               getch();
               cout<<"\n\tThey may appear selfish at times, but are generous with possessions and money. "<<endl;
               getch();

           }
        else if(strcmp(zodiac, "Gemini") == 0)
           {
                cout<<"\n\tGemini are versatile, adaptable and easily bored. "<<endl;
                getch();
                cout<<"\n\tThey love to chat and share knowledge. "<<endl;
                getch();
                cout<<"\n\tThey are sociable and enjoy variety as well as change. "<<endl;
                getch();
                cout<<"\n\tThey rely on mental analysis more than gut feeling. "<<endl;
                getch();
                cout<<"\n\tThey are intelligent and quick-witted, and can read a room or situation in an almost supernatural way. "<<endl;
                getch();

              }

        else if(strcmp(zodiac, "Cancer") == 0)
           {
                cout<<"\n\tFamily and friends are at the top of a Cancer's list of most valuable possessions followed by home. "<<endl;
                getch();
                cout<<"\n\tThey have a deep appreciation for family history and exploring family trees. "<<endl;
                getch();
                cout<<"\n\tTheir emotions are difficult to hide since Cancer lives by their gut feelings and instinct. "<<endl;
                getch();
                cout<<"\n\tThey crave a stable home life in order to feel secure, safe and comfortable. "<<endl;
                getch();
                cout<<"\n\tThey are very complex, sometimes appearing extremely strong and at other times to be as vulnerable as a child. "<<endl;
                getch();

             }

        else if(strcmp(zodiac, "Leo") == 0)
           {
                cout<<"\n\tLeos know their self-worth and exerts will."<<endl;
                getch();
                cout<<"\n\tThey are always the center of attention, planned or not. Might as well learn to revel in it! "<<endl;
                getch();
                cout<<"\n\tAlthough they are one of the first signs to step up and speak out against injustice,\n\ttheir innately gentle spirit helps easily build trust with people. "<<endl;
                getch();
                cout<<"\n\tThey are passionate in all pursuits, including relationships,\n\tand take it upon themselves to be the best partner you've ever had. "<<endl;
                getch();
                cout<<"\n\tThey are good strong leaders."<<endl;
                getch();


            }

        else if(strcmp(zodiac, "Virgo") == 0)
           {
                cout<<"\n\tVirgos are hard workers and get things done, and someone every boss wants on their team. "<<endl;
                getch();
                cout<<"\n\tThey are kind and always willing to lend a hand to those who need it. "<<endl;
                getch();
                cout<<"\n\tThey never want to disappoint the people in their lives,\n\tso they may spread themselves too thin and put themselves last. "<<endl;
                getch();
                cout<<"\n\tThey have a rich inner life, and can sometimes seem shy at the first meeting.  "<<endl;
                getch();
                cout<<"\n\tThey can always talk their way out of sticky situations,\n\tand everyone is charmed by their wit and ability to put others at ease. "<<endl;
                getch();

           }
        else if(strcmp(zodiac, "Libra") == 0)
           {
                cout<<"\n\tLibras make others feel comfortable. People love being around them.\n\tA room full of people is your happy place. "<<endl;
                getch();
                cout<<"\n\tThey voice opinions only when provoked or passionate about a cause."<<endl;
                getch();
                cout<<"\n\tThey are fiercely attracted to intelligence, which is just as important \n\tas appearance when it comes to the partners they end up falling for. "<<endl;
                getch();
                cout<<"\n\tThey are never lonely. Their mind is an endless source of inspiration,\n\tand they can always keep themselves entertained even if their smart-phone is nowhere in sight. "<<endl;
                getch();
                cout<<"\n\tATheir eyes are unmatched. They see color combinations, patterns, and art \n\twhere other people can't,and their creative gifts pay off in big ways. "<<endl;
                getch();
           }
        else if(strcmp(zodiac, "Scorpio") == 0)
           {
                cout<<"\n\tScorpios enjoy big and bold lifestyle. "<<endl;
                getch();
                cout<<"\n\tThey know what they want and go after it with no questions asked."<<endl;
                getch();
                cout<<"\n\tThey don't get intimidated easily, and stand up for injustice when they see it. "<<endl;
                getch();
                cout<<"\n\tThey are passionate. When they decide to put their heart on full display, \n\tthere's no stopping them which is why you should do it more often!"<<endl;
                getch();
                cout<<"\n\tThey make passionate and often possessive lovers. "<<endl;
                getch();
           }
        else if(strcmp(zodiac, "Saggitarius") == 0)
           {
                cout<<"\n\tSaggitarians are super at home with the world, they are happy with a passport and a backpack."<<endl;
                getch();
                cout<<"\n\tTheir minds are an endless labyrinth; they love getting to know themselves and what makes them tick. "<<endl;
                getch();
                cout<<"\n\tThey are born leaders and never worry about what people think. \n\tTheir ideas are unique, and they do not second-guess themselves. "<<endl;
                getch();
                cout<<"\n\tThey have sharp intellects and enjoy mental challenges. "<<endl;
                getch();
                cout<<"\n\tThey do not hesitate to give an honest opinion, which can seem tactless. "<<endl;
                getch();
            }

        else if(strcmp(zodiac, "Capricorn") == 0)
           {
                cout<<"\n\tCapricorns are a serious individuals. "<<endl;
                getch();
                cout<<"\n\tThey plan each stage of their lives to create a blueprint they can follow. "<<endl;
                getch();
                cout<<"\n\tThey make great companions and life-long friends. "<<endl;
                getch();
                cout<<"\n\tOnce they fall in love and commit, they are typically unlikely to jeopardize the union. "<<endl;
                getch();
                cout<<"\n\tThey are a mixed bag of both greatness and evil. "<<endl;
                getch();

           }
        else if(strcmp(zodiac, "Aquarius") == 0)
           {
                cout<<"\n\tAquarians bring enthusiasm to the work they do, especially when it involves expression. "<<endl;
                getch();
                cout<<"\n\tWhen it comes to love, people best suited are those that are not thrown off by their frankness. "<<endl;
                getch();
                cout<<"\n\tThey enjoy art and a leisurely lifestyle. "<<endl;
                getch();
                cout<<"\n\tThey are interested in science's advanced achievements. For example - computers"<<endl;
                getch();
                cout<<"\n\tThey think for themselves and like to keep an open mind about things. "<<endl;
                getch();

           }
        else if(strcmp(zodiac, "Pisces") == 0)
           {
                cout<<"\n\tPisces are unassuming and deeply emotional "<<endl;
                getch();
                cout<<"\n\tThey are selfless to a fault "<<endl;
                getch();
                cout<<"\n\tUnlike Leo, they are content to remain in the shadows "<<endl;
                getch();
                cout<<"\n\tThey are devoted lovers and friends "<<endl;
                getch();
                cout<<"\n\tThey love to search out or investigate the unknown, the philosophical, or the mysterious. "<<endl;
                getch();
           }
        else
        {
            cout<<"Incorrect Entry, Please try again"<<endl;
            FindTraits();
        }
    }
};

class Daily
{
public:

char day_name[20], zodiac[20];

    D_H(){
        cout<<"\tPlease enter your previously obtained Zodiac : "<<endl;
        cin>>zodiac;
        cout<<"\tPlease enter the current day of the week : "<<endl;
        cin>>day_name;
     if (strcmp(day_name,"Saturday")==0)
    {
        cout<<"Saturday:";
        if(strcasecmp(zodiac,"Aries")==0){
        cout<<"\tAries: "<<endl;
        cout<<endl<<"\n\tIs there anything more irritating (or anxiety-inducing) than anticipation? Take a few deep breaths and enjoy what you two have now. \n\tToo much pressure on the outcome will remove the pleasure of your anticipated event.";
        }else if(strcasecmp(zodiac,"Taurus")==0){
        cout<<endl<<endl<<"Taurus:";
        cout<<endl<<"\n\tLet your conversations run deep today. Move forward fearlessly and make someone's dream come true. \n\tLearn something new about yourself -- you only live once, and today is a gift that needs to be unwrapped.";
        }else if(strcasecmp(zodiac,"Gemini")==0){
        cout<<endl<<endl<<"Gemini:";
        cout<<endl<<"\n\tSome say opposites attract, but you're drawn to smart, active folks -- just like you -- though maybe with a little twist. \n\tExploring similarities and differences can show your amazing curiosity.";
        }else if(strcasecmp(zodiac,"Cancer")==0){
        cout<<endl<<endl<<"Cancer:";
        cout<<endl<<"\n\tLook after yourself today -- in terms of your mind and body -- and try to let just love take care of itself. \n\tThe energy you put into revitalizing and recharging can pay off with a serious glow.";
        }else if(strcasecmp(zodiac,"Leo")==0){
        cout<<endl<<endl<<"Leo:";
        cout<<endl<<"\n\tIt's an awesome day to be near you. Everyone loves your sense of humor and that exciting aura you've got going. \n\tYour willingness to try new things is definitely an advantage when it comes to romance!";
        }else if(strcasecmp(zodiac,"Virgo")==0){
        cout<<endl<<"Virgo:";
        cout<<endl<<"\n\tIf you think this morning's deal or plan sounds too good to be true, you're probably right. Stick to your guns and speak up -- people will start to come around by the end of the day. \n\tAnd if they don't, let it go. Their naivete is not your problem.";
        }else if(strcasecmp(zodiac,"Libra")==0){
        cout<<endl<<endl<<"Libra:";
        cout<<endl<<"\n\tBig news may come in this morning that will send a thrill through your heart, while your coworkers groan. Where they see drudgery, you see opportunity. \n\tTry to make time later in the day to help them cope. This is where you shine as a peer!";
        }else if(strcasecmp(zodiac,"Scorpio")==0){
        cout<<endl<<"Scorpio:";
        cout<<endl<<"\n\tYou need to discipline yourself to stay on track, and it might be harder than you think -- at first. By the end of the day, \n\tthough, you'll find that all that hard work has really paid off. Yes! You're finally experiencing growth where you could only see stagnation.";
        }else if(strcasecmp(zodiac,"Sagittarius")==0){
        cout<<endl<<"Sagittarius:";
        cout<<endl<<"\n\tYou need to keep an open mind when it comes to adjustments in your workplace -- but that's your specialty. Big changes are coming, \n\tbut you won't be able to see any obvious signs for a while. Look for subtle messages this afternoon.";
        }else if(strcasecmp(zodiac,"Capricorn")==0){
        cout<<endl<<endl<<"Capricorn:";
        cout<<endl<<"\n\tHelp iron out the increasingly serious differences of opinion threatening to tear your workplace apart. If you're on one side or another, \n\tbeing unbiased will be more difficult. To be successful in this situation, find some common ground, quick.";
        }else if(strcasecmp(zodiac,"Aquarius")==0){
        cout<<endl<<endl<<"Aquarius:";
        cout<<endl<<"\n\tYou are thinking big right now. The day will continue to get better and better as your ideas come into play. Make sure you're not sidetracked by details. \n\tYou have larger issues to contend with and you'll only delay your progress.";
        }else if(strcasecmp(zodiac,"Pisces")==0){
        cout<<endl<<endl<<"Pisces:";
        cout<<endl<<"\n\tMake sure you're moving up -- or at least your place on the totem pole is secure. You'll find that often perceptions quickly become reality. \n\tSo ask around and take a temperature reading. It may be time to make some professional adjustments";
        }else
        {cout<<"Incorrect Zodiac! Please try again";
        D_H();}
    }
    else if(strcmp(day_name,"Sunday")==0)
    {
        cout<<"Sunday:"<<endl<<endl;
        if(strcasecmp(zodiac,"aries")==0){
        cout<<"Aries:";
        cout<<endl<<"\n\tSetting things in their proper order is crucial if you're going to get everything done today. \n\tEven if your project isn't large and your to-do list is rather szodiact, you'll appreciate an organized structure more than you realize. So as early as you can, get out a pen and paper and write it all down! There's no such thing as being too organized. Plus, it's a very good habit to get into before things get a lot more harried than they are right now";
        }else if(strcasecmp(zodiac,"taurus")==0){
        cout<<endl<<endl<<"Taurus:";
        cout<<endl<<"\n\tWhenever you're in a public place today, observe the environment around you closely -- the people-watching will be great! \n\tNot only will it be entertaining, but it will also be educational, and even a little inspiring. There may be new fashion ideas, a juicy tidbit of overheard gossip or even some exciting lingering eye contact with a cute stranger. Sometimes it's much more fun to sit on the sidelines and watch the world go by than it's to be in the middle of all the action.";
       }else if(strcasecmp(zodiac,"gemini")==0){
        cout<<endl<<endl<<"Gemini:";
        cout<<endl<<"\n\tYou'll have a hard time dealing with anyone who's running a fast-paced program today. All you want to do is lie around and relax -- after all, \n\tit's been a rough week and you need some serious RandR. Don't feel pressured to buy into that busy energy.";
       }else if(strcasecmp(zodiac,"cancer")==0){
        cout<<endl<<endl<<"Cancer:";
        cout<<endl<<"\n\tYou have recently acquired a certain measure of power -- good for you! It's fine to wield your sway at the office, but it's not going to go over well on the home front. \n\tPractice a little humility and it'll be smooth sailing all weekend long!";
      }else if(strcasecmp(zodiac,"leo")==0){
        cout<<endl<<endl<<"Leo:";
        cout<<endl<<"\n\tChange is inevitable. Just make sure you're on the right side of it -- or at least moving in the right direction. Next week will bring some interesting movement in your office environment. \n\tThis weekend, try to mentally prepare for a whole new paradigm.";
        }else if(strcasecmp(zodiac,"virgo")==0){
        cout<<endl<<"Virgo:";
        cout<<endl<<"\n\tSomething is afoot on the home front and you're not really sure what's going on. But you can sense tension and dissatisfaction. \n\tRise up and face it. If you don't clear the air as soon as possible, you'll have a hard time fully relaxing this weekend.";
         }else if(strcasecmp(zodiac,"libra")==0){
        cout<<endl<<endl<<"Libra:";
        cout<<endl<<"\n\tSomething you need to confront is still going on beneath the surface -- figure it out PDQ. If you don't know have much clarity on the situation, consult with someone who does. \n\tThe sooner you deal with this issue, the sooner you can enjoy a stress-free weekend.";
       }else if(strcasecmp(zodiac,"scorpio")==0){
        cout<<endl<<"Scorpio:";
        cout<<endl<<"\n\tSpend as much of your time as possible producing something that can't be easily ignored today ... like an insanely rich chocolate cake, a sappy romantic poem or an eye-catching outfit. \n\tYou should make a dramatic statement in everything you do right now ... your reputation is solid, but it would benefit from a huge shot in the arm. You're ready to be in the spotlight, and once you put yourself there, you'll be able to use it for a powerful, beneficial cause.";
       }else if(strcasecmp(zodiac,"sagittarius")==0){
        cout<<endl<<"Sagittarius:";
        cout<<endl<<"\n\tThe future is a mystery, so why are you waiting for an official road map? There are no guarantees to be had, so you need to give up on having them. \n\tInstead of being intimidated by the unknown aspects of where you are going, you should be inspired by the blank slate ahead of you. There is no telling where you could be in one year ... so start fantasizing right now. Figure out your big plan, and you will be able to inch your way closer to your goals each day.";
       }else if(strcasecmp(zodiac,"capricorn")==0){
        cout<<endl<<endl<<"Capricorn:";
        cout<<endl<<"\n\tGet ready to become a bigger part of your community -- either at work, in school or in your neighborhood. You're about to assume a larger role, \n\tand this is something you've been waiting for (whether you realized it or not). Step up and volunteer -- your ideas or your time. Making an impact is very much required for you to get the respect and opportunities you deserve. Keep in mind that the bigger your efforts, the bigger your impact. Now is not the time to look for excuses.";
        }else if(strcasecmp(zodiac,"aquarius")==0){
        cout<<endl<<endl<<"Aquarius:";
        cout<<endl<<"\n\tBrighten up your spirits by using the old gray matter. How long has it been since you and your sweetie have gone to an aquarium, \n\tseen a play or heard some live music? Stimulate your brain and your relationship.";
         }else if(strcasecmp(zodiac,"pisces")==0){
        cout<<endl<<endl<<"Pisces:";
        cout<<endl<<"\n\tYou're trying to weather some stormy seas, or your partner is. If it's you, be more patient. If it's them, the same advice applies. Everyone goes through down periods, \n\tand trying to force them out of it won't work.";
        }else
        {cout<<"Incorrect Zodiac! Please try again";
        D_H();}
        }
   else if(strcmp(day_name,"Monday")==0)
    {
    cout<<"Monday:"<<endl<<endl;
    if(strcasecmp(zodiac,"aries")==0){
    cout<<"Aries:";
    cout<<endl<<"\n\tThe mixed signals you've been getting are maddening -- sometimes they seem really into you, but at other times they're totally distant. \n\tYou're tempted to just ask them what's going on, but now is not a good time. Just hang on for a little longer.";
    }else if(strcasecmp(zodiac,"taurus")==0){
    cout<<endl<<endl<<"Taurus:";
    cout<<endl<<"\n\tGather your people and hit the town. A private karaoke room might be a great way to bond. If you're looking to expand your social circle, \n\tencourage everyone to bring single friends with them -- especially hotties!";
   }else if(strcasecmp(zodiac,"gemini")==0){
    cout<<endl<<endl<<"Gemini:";
    cout<<endl<<"\n\tYour social calendar is pretty full, so your life is one happy blur! If you don't want to burn out, schedule a little time for yourself. \n\tJust a few hours this weekend help you relax and reclaim your center. Light candles, breathe deeply, and just be still.";
   }else if(strcasecmp(zodiac,"cancer")==0){
    cout<<endl<<endl<<"Cancer:";
    cout<<endl<<"\n\tYour intuitive powers are always strong, but right now you're on fire! You can tune into what others are feeling and should know exactly how to respond. \n\tTest it all out next time you head out -- chat up that hot stranger and enjoy the shenanigans!";
   }else if(strcasecmp(zodiac,"leo")==0){
    cout<<endl<<endl<<"Leo:";
    cout<<endl<<"\n\tYou're faced with a big decision right now, and you're not exactly sure what to do next. \n\tIf every option has equal appeal, just trust your instincts to guide you the right way.";
   }else if(strcasecmp(zodiac,"virgo")==0){
    cout<<endl<<endl<<"Virgo:";
    cout<<endl<<"\n\tWatch out for friction on the home front -- people will feel as if their toes have been stepped on, even when it's plain they're in the wrong. \n\tThe phase shouldn't last long, and you'll all learn a few good lessons in the process.";
     }else if(strcasecmp(zodiac,"libra")==0){
    cout<<endl<<endl<<"Libra:";
    cout<<endl<<"\n\tAh, it's so nice to spend your day in a familiar setting. Being home makes going back to work tomorrow somewhat unappealing. \n\tDon't let that kind of anticipation ruin your time with family. Focus on the home front instead.";
   }else if(strcasecmp(zodiac,"scorpio")==0){
    cout<<endl<<endl<<"Scorpio:";
    cout<<endl<<"\n\tNext week you'll be in a good place to reexamine your core mission and possibly reconfigure your team or organization as a whole. \n\tYou're thinking with new clarity and should be able to make good changes.";
   }else if(strcasecmp(zodiac,"sagittarius")==0){
    cout<<endl<<endl<<"Sagittarius:";
    cout<<endl<<"\n\tSundays can seem like just another obstacle to your workweek. Don't be that hyper-dedicated -- it's only a cover-up for avoiding your life. \n\tBlock out work today and spend time reconnecting with family and friends.";
    }else if(strcasecmp(zodiac,"capricorn")==0){
    cout<<endl<<endl<<"Capricorn:";
    cout<<endl<<"\n\tYou're filled with new inspiration right now and need to crawl as far out on that limb as you possibly can. \n\tWhatever you think about what you're doing with your life is one thing; you'll see that the response is unbelievably positive from your loved ones.";
    }else if(strcasecmp(zodiac,"aquarius")==0){
    cout<<endl<<endl<<"Aquarius:";
    cout<<endl<<"\n\tThinking of a romantic day off? You can't relate to someone who's in the same state of intensified energy \n\tas you are and someone calmer won't be interested. Solve your problem with plenty of exercise";
     }else if(strcasecmp(zodiac,"pisces")==0){
    cout<<endl<<endl<<"Pisces:";
    cout<<endl<<"\n\tYou know all your hard work during the week has paid off when you can spend a Sunday doing whatever you want. Don't think about the office for a second. You've earned the right to fritter the day away however you see fit.";
   } else
        {cout<<"Incorrect Zodiac! Please try again";
        D_H();}
        }

    else if(strcmp(day_name,"Tuesday")==0)
    {
    cout<<"Tuesday:"<<endl<<endl;
    if(strcasecmp(zodiac,"aries")==0){
    cout<<"Aries:";
    cout<<endl<<"\n\tSomething is lying hidden in your workload and will make a big difference if you spot it -- but the search may take quite a while. \n\tAn extra cup of coffee might be all it takes to get there. There's no better time to get to the bottom of it!";
    }else if(strcasecmp(zodiac,"taurus")==0){
    cout<<endl<<endl<<"Taurus:";
    cout<<endl<<"\n\tYou are a little farther out there than usual and can make connections nobody else sees. \n\tYou can hang on to your ideas for later or start evangelizing right away -- either way should work for you.";
   }else if(strcasecmp(zodiac,"gemini")==0){
    cout<<endl<<endl<<"Gemini:";
    cout<<endl<<"\n\tYour creative energy is peaking right now, and your eye for design and ear for messaging are both quite strong at the moment. \n\tSee if you can get involved in those aspects of your job ";
    }else if(strcasecmp(zodiac,"cancer")==0){
    cout<<endl<<endl<<"Cancer:";
    cout<<endl<<"\n\tYou may need to postpone a meeting or two as your workload expands beyond the confines of the workday. \n\tThings should snap back to normal by tomorrow or the next day, so there's no need to cancel.";
    }else if(strcasecmp(zodiac,"leo")==0){
    cout<<endl<<endl<<"Leo:";
    cout<<endl<<"\n\tYour working relationships are back in the spotlight -- make sure you are offering everything you can to the right people, \n\twhile getting as much as possible back in return. This is all about give and take, remember?";
   }else if(strcasecmp(zodiac,"virgo")==0){
    cout<<endl<<endl<<"Virgo:";
    cout<<endl<<"\n\tIf a conflict is brewing, try to de-escalate the tension as much as you can. If possible put off the battles for another day, \n\twhen you'll be tough enough to withstand the attacks. You have way too many cracks in your fortification at the moment.";
    }else if(strcasecmp(zodiac,"libra")==0){
    cout<<endl<<endl<<"Libra:";
    cout<<endl<<"\n\tYour fiery energy will help you have a good time doing just about anything -- and you may be able to spread \n\taround a little bit of that positive feeling among customers and coworkers.";
    }else if(strcasecmp(zodiac,"scorpio")==0){
    cout<<endl<<endl<<"Scorpio:";
    cout<<endl<<"\n\tAn investor's got to do what an investor's got to do. Circumstances force you to pull your rabbit out of your sleeve. \n\tThat's okay, though, because hidden talents are of no value until put to good use.";
    }else if(strcasecmp(zodiac,"sagittarius")==0){
    cout<<endl<<endl<<"Sagittarius:";
    cout<<endl<<"\n\tYou're excellent at creating your own sense of excitement, and there's nothing you love more than a challenge. \n\tSo getting pumped up about starting your day is no problem. That's the only easy thing about it, though.";
    }else if(strcasecmp(zodiac,"capricorn")==0){
    cout<<endl<<endl<<"Capricorn:";
    cout<<endl<<"\n\tCreativity has its advantages, but don't lull yourself into thinking there's any place for it in your accounting. \n\tYou'll know intuitively when you've crossed the line. It just doesn't leave you feeling good.";
    }else if(strcasecmp(zodiac,"aquarius")==0){
    cout<<endl<<endl<<"Aquarius:";
    cout<<endl<<"\n\tDon't worry if you're still feeling the pressure to pick up the pace. You work best at a slightly slower rate than your peers, \n\tbut the quality of your work outshines theirs -- that's undeniable. Be true to yourself.";
    }else if(strcasecmp(zodiac,"pisces")==0){
    cout<<endl<<endl<<"Pisces:";
    cout<<endl<<"\n\tSpeak up first and hold the floor as long as you want -- your energy is dominant today and others will defer to your judgment. \n\tYou may need to move pretty quickly later in the day, however. The pace speeds up incrementally.";
    }else
        {cout<<"Incorrect Zodiac! Please try again";
        D_H();}
        }

    else if(strcmp(day_name,"Wednesday")==0)
    {
    cout<<"Wednesday"<<endl<<endl;
    if(strcasecmp(zodiac,"aries")==0){
    cout<<"Aries:";
    cout<<endl<<"\n\tPrepare your best song-and-dance routine -- it's less about substance and more about style and flair at the moment. \n\tLuckily, it shouldn't be a problem; other people's dog-and-pony shows don't hold a candle to your personal entertainment value.";
    }else if(strcasecmp(zodiac,"taurus")==0){
    cout<<endl<<endl<<"Taurus:";
    cout<<endl<<"\n\tYour personal life may be full of challenges large and small, but bear in mind that this is just temporary. \n\tKeeping your emotions in check and taking care of one thing at a time will help you keep your sanity and maintain good standing with others.";
   }else if(strcasecmp(zodiac,"gemini")==0){
    cout<<endl<<endl<<"Gemini:";
    cout<<endl<<"\n\tYou'll definitely want to work at your own pace next week. If you're yoked to partner whose stride is out of step with yours or \n\twedded to a project or deadline you can't control, you can anticipate some difficulties. Forewarned is forearmed.";
   }else if(strcasecmp(zodiac,"cancer")==0){
    cout<<endl<<endl<<"Cancer:";
    cout<<endl<<"\n\tIf you have boundless energy one minute then feel drained the next, blame it on your stars. \n\tEating small, healthy snacks and staying hydrated may help, but expect fluctuations in energy levels all day long. Don't feel bad about resting when it's necessary.";
    }else if(strcasecmp(zodiac,"leo")==0){
    cout<<endl<<endl<<"Leo:";
    cout<<endl<<"\n\tSpearheading a new project may be appealing, but the stars say working behind the scenes and keeping a low profile will get you further, faster in the coming weeks. \n\tThere's plenty of time to launch your big plan later -- be a quiet influence for now.";
    }else if(strcasecmp(zodiac,"virgo")==0){
    cout<<endl<<endl<<"Virgo:";
    cout<<endl<<"\n\tYou can't control every aspect of everyone's life, try as you might. The ironic thing is, if you let go a bit -- allow people to do their own thing and \n\tgive relationships room to evolve -- you're more likely to nab the desired result.";
    }else if(strcasecmp(zodiac,"libra")==0){
    cout<<endl<<endl<<"Libra:";
    cout<<endl<<"\n\tUnbridled enthusiasm is usually more your speed than self-control, but you have the latter quality in spades at the moment. \n\tIt'll allow you to get the timing right for your next move. Seek input from family and friends -- they have their own ideas.";
   }else if(strcasecmp(zodiac,"scorpio")==0){
    cout<<endl<<endl<<"Scorpio:";
    cout<<endl<<"\n\tLess is more, particularly when it comes to the mess in your home office, your bedroom -- well just about everywhere. \n\tWhile everyone else is lounging around the TV, wasting time, use this opportunity to get organized!";
   }else if(strcasecmp(zodiac,"sagittarius")==0){
    cout<<endl<<endl<<"Sagittarius:";
    cout<<endl<<"\n\tWho, you, worrying about your household budget? Of course it should be you! Nobody else seems to care. \n\tKeep finances out in front while you're busy multitasking. When you have a few minutes, make sure you go over the numbers one more time.";
    }else if(strcasecmp(zodiac,"capricorn")==0){
    cout<<endl<<endl<<"Capricorn:";
    cout<<endl<<"\n\tLooking for a fresh start in the world of work? You can find in the coming weeks, whether you're seeking a new position or getting ready to turn over a new leaf. \n\tBe assertive about what you want -- use free time today to tune up your resume!";
    }else if(strcasecmp(zodiac,"aquarius")==0){
    cout<<endl<<endl<<"Aquarius:";
    cout<<endl<<"\n\tTalking about your feelings -- particularly in a work context -- isn't your favorite thing to do, but holding them back endlessly isn't healthy either. \n\tWhen the opportunity comes up next week, don't hold back. Say what's on your mind, nicely, of course.";
   }else if(strcasecmp(zodiac,"pisces")==0){
    cout<<endl<<endl<<"Pisces:";
    cout<<endl<<"\n\tHow's your morale? It's important to assess it at times like these. Look at the root causes for the way you're feeling about your current job and your career arc as a whole. \n\tThen set some action steps -- perhaps it's time to move on or increase your skills.";
    }else
        {cout<<"Incorrect Zodiac! Please try again";
        D_H();}
        }

    else if(strcmp(day_name,"Thursday")==0)
    {
        cout<<"Thursday:"<<endl<<endl;
        if(strcasecmp(zodiac,"aries")==0){
        cout<<"Aries:";
        cout<<endl<<"\n\tThere's no need to be in the middle of any conflicts today -- people are at odds with each other, and you have nothing to do with it. \n\tJumping in to make peace might seem like a great idea, but you may be overestimating your diplomatic skills. Emotions run deep, and there are circumstances you don't know about. Your presence could add gasoline to the fire. So stay on the sidelines and observe the battle. You'll gain perspective, and you may just see the whole, illuminating truth.";
        }else if(strcasecmp(zodiac,"taurus")==0){
        cout<<endl<<endl<<"Taurus:";
        cout<<endl<<"\n\tAre you detecting some shift in energy around you today? There are two camps forming: Those who are all for you, and those who don't have your best interests at heart. \n\tWithout even realizing it, you've become immersed in a power struggle right now. But don't let it affect a single thing. Just keep doing what you need to do -- don't rearrange your schedule for anyone or anything. Refuse to play any games, and focus on minding your own business.";
        }else if(strcasecmp(zodiac,"gemini")==0){
        cout<<endl<<endl<<"Gemini:";
        cout<<endl<<"\n\tYour productivity is admirable, and you've been doing an excellent job at staying cool under pressure. \n\tYou deserve to slow things down and coast for a while -- right about now. After chugging up that hill so vigorously, take a break to regain some energy and get a good view of all the ground you've covered. Expect to be pleasantly surprised by how far you've come. You can't feel good about completing a task when you're too busy attacking your next goal to acknowledge it.";
        }else if(strcasecmp(zodiac,"cancer")==0){
        cout<<endl<<endl<<"Cancer:";
        cout<<endl<<"\n\tYou may not realize it, but at the start of your day, you're in the perfect position to build something big, especially with another person. \n\tWorking on the foundation of a partnership or romantic relationship will suddenly become a lot easier as your communication skills take the wheel and steer you down a lighthearted, nurturing path. You're entering a very constructive phase right now -- your confidence is strong, and your desire is even stronger.";
        }else if(strcasecmp(zodiac,"leo")==0){
        cout<<endl<<endl<<"Leo:";
        cout<<endl<<"\n\tYou're finally starting to get a sense of how you affect others -- and you like it a lot. Today this forward momentum continues when \n\tyou get a chance to hold the attention of a group of people. They're taking your ideas seriously, so why don't you? After all, if you think about the major improvements that have occurred recently, you played a big part in all of them. Don't underestimate the power you have over others -- or you could miss out on a major opportunity.";
        }else if(strcasecmp(zodiac,"virgo")==0){
        cout<<endl<<"Virgo:";
        cout<<endl<<"\n\tTry to avoid large crowds if possible. Your attention is turned inward, and it's a good time to hide out and take care of work matters on your own time. \n\tYour ability to brainstorm is unmatched -- others will follow your lead when you're ready.Try to avoid large crowds if possible. Your attention is turned inward, and it's a good time to hide out and take care of work matters on your own time. Your ability to brainstorm is unmatched -- others will follow your lead when you're ready.";
         }else if(strcasecmp(zodiac,"libra")==0){
        cout<<endl<<endl<<"Libra:";
        cout<<endl<<"\n\tCommunication will be important and easier than expected at the moment. Get your message out there and don't worry too much about hearing back right away. \n\tPeople need time to synthesize and process what you're telling them -- that's a good thing.";
        }else if(strcasecmp(zodiac,"scorpio")==0){
        cout<<endl<<"Scorpio:";
        cout<<endl<<"\n\tYou might be feeling kind of wishy-washy about a looming deal, but a long talk with someone you trust will help you clarify \n\tyour core values and move closer to making that big decision. When it's all said and done, you'll see all that worrying was for naught.";
        }else if(strcasecmp(zodiac,"sagittarius")==0){
        cout<<endl<<"Sagittarius:";
        cout<<endl<<"\n\tIf you're interested in office romance, odds are good it's interested in you. Just make sure you lay down some ground rules before anything happens. \n\tIf you take action in that regard, you should see some positive results. If not, no harm, no foul.";
        }else if(strcasecmp(zodiac,"capricorn")==0){
        cout<<endl<<endl<<"Capricorn:";
        cout<<endl<<"\n\tIt is a good time to slow down and acknowledge your partners or teammates -- or pretty much anyone who is vital to getting your job done. \n\tSimple recognition will be enough to carry you far, and you'll make some new allies along the way.";
        }else if(strcasecmp(zodiac,"aquarius")==0){
        cout<<endl<<endl<<"Aquarius:";
        cout<<endl<<"\n\tWork today will be enjoyable to the extent you get along well with your coworkers. For the most part, it should be relaxing and low-key, \n\tthough flurries of restlessness might crop up. If it doesn't pertain to you, stay out of it.";
         }else if(strcasecmp(zodiac,"pisces")==0){
        cout<<endl<<endl<<"Pisces:";
        cout<<endl<<"\n\tIt's a great time to start new projects and draft new documents -- most likely there isn't much activity related to ongoing assignments. \n\tGo ahead and enjoy the peace and quiet. You have the headspace to come up with some great proposals.";
       } else
        {cout<<"Incorrect Zodiac! Please try again";
        D_H();}
        }
    else if(strcmp(day_name,"Friday")==0)
    {
        cout<<"Friday:"<<endl<<endl;
        if(strcasecmp(zodiac,"aries")==0){
        cout<<"Aries:";
        cout<<endl<<"\n\tYour year ahead in life, love, money and health.So often in close relationships, you are the one who is thinking about others, \n\toften, looking after their interest. While, obviously, you will continue to care deeply about the welfare of some, you and your own plans and activities will come first. You’ll be delighted to discover how many are there for you. ";
        }else if(strcasecmp(zodiac,"taurus")==0){
        cout<<endl<<endl<<"Taurus:";
        cout<<endl<<"\n\tYou are busy, active and interested in talking to everyone. You have a busy schedule with short trips plus increased reading and writing. \n\tSome of these activities might build up and provoke increased tension within you. Stay calm. Enjoy your Friday. Easy does it.";
        }else if(strcasecmp(zodiac,"gemini")==0){
        cout<<endl<<endl<<"Gemini:";
        cout<<endl<<"\n\tYou are keen to travel. You are focused on money and earnings. You are charming with others; nevertheless, a dispute or fight with someone today, \n\tespecially a female, might occur. Do not focus on this. Do not let this ruin your day. Lighten up!";
        }else if(strcasecmp(zodiac,"cancer")==0){
        cout<<endl<<endl<<"Cancer:";
        cout<<endl<<"\n\tAvoid arguments with bosses, parents and VIPs today (including the police) because they are just not worth it. \n\tEmotional outbursts only make you lose points. (Confucius said, He who flings dirt loses ground.) Instead, go with the strength that you have right now because the Sun is in your sign. Be chill.";
        }else if(strcasecmp(zodiac,"leo")==0){
        cout<<endl<<endl<<"Leo:";
        cout<<endl<<"\n\tAvoid arguments about politics, religion or racial issues even though they might grab you by the throat. \n\tResist the urge to lash out or impulsively respond. Do not lose your Leo cool. You are nobility! With Mercury and Venus in your sign now, you can be charming and take the high road.";
        }else if(strcasecmp(zodiac,"virgo")==0){
        cout<<endl<<"Virgo:";
        cout<<endl<<"\n\tDisputes or anger about inheritances, shared property or insurance issues could ruin your day. Why let this happen? You want to enjoy this Friday. \n\tYou deserve to enjoy this Friday. Instead focus on good times with friends. Be happy!";
         }else if(strcasecmp(zodiac,"libra")==0){
        cout<<endl<<endl<<"Libra:";
        cout<<endl<<"\n\tYou might get embroiled in an argument with a partner or close friend. But what a bummer way to start your weekend! \n\tInstead, Mercury and Venus in your chart will sweeten all your dealings with friends and members of groups. Focus your energy on these people so you can enjoy god times!";
        }else if(strcasecmp(zodiac,"scorpio")==0){
        cout<<endl<<"Scorpio:";
        cout<<endl<<"\n\tBe patient with a coworker today, especially about broken equipment and such. It is easy to lose your cool but this doesn’t help anything. \n\tMeanwhile, relations with bosses, parents and VIPs are excellent. Furthermore, they are sympathetic. Relax, all is well.";
        }else if(strcasecmp(zodiac,"sagittarius")==0){
        cout<<endl<<"Sagittarius:";
        cout<<endl<<"\n\tRomantic upsets are likely today. In addition, parents might have difficulties with their kids. Try to avoid these because who wants to have a bummer Friday? \n\tFocus on travel plans or exploring new places and different ideas because this is where you will shine. Look for a fun diversion.";
        }else if(strcasecmp(zodiac,"capricorn")==0){
        cout<<endl<<endl<<"Capricorn:";
        cout<<endl<<"\n\tBe patient with a family member today because arguments can arise. These disputes could be nasty and emotional. Instead, focus on financial matters or shopping. \n\tGo with what works and avoid areas where people are uptight. It is your smartest choice.";
        }else if(strcasecmp(zodiac,"aquarius")==0){
        cout<<endl<<endl<<"Aquarius:";
        cout<<endl<<"\n\tBe patient with daily contacts, siblings and relatives today because it’s easy to suddenly get in an argument. (Then you will feel miserable and so will they.) \n\tDon’t even go there! Enjoy warm times with partners and close friends. Work relationships are also positive. Whew!";
        }else if(strcasecmp(zodiac,"pisces")==0){
        cout<<endl<<endl<<"Pisces:";
        cout<<endl<<"\n\tFinancial disputes or an argument with a friend about a possession or something you own might arise today. Give this no energy. Do not fuel what is negative. \n\tInstead, focus on ways to have fun and good times because this is the end of your week. It’s party time!";
        }
        else
        {cout<<"Incorrect Zodiac! Please try again";
        D_H();}
        }
    else
    {cout<<"Incorrect input of day. Please try again.";
    D_H();}
}
};

class Compatibility
{
public:

    int n,n1,n2,age,number,aries,taurus,gemini,cancer,leo,vigro,libra,scorpio,sagittarius,capricorn,aquarius,pisces;

   l_menu(){
   cout<<"\n\n"<<endl;
   cout<<"                                           \tWelcome To Love Compatibility \n";
   cout<<"\t___________________________________________________________________________________________________________________"<<endl;
   cout<<"\t___________________________________________________________________________________________________________________"<<endl;
   cout<<"\t___________________________________________________________________________________________________________________"<<endl;
   cout<<"\n\n\n\n";
   cout<<"Press Enter To Continue ........ ";
   getch();
   cout<<"\n\nAre you single or Taken ? \nIf you are single than press '1'\nIf you are taken than press '2'.\n";
   cout<<"your answer is :";
   cin>>n;
   return n;
   }

    love()
{
    cout<<"\n\n\n\n";
    cout<<"which one is your sign ?\n\n";
    cout<<"Choose Number :\n\n1.Aries (March 21 - April 19)\n2.Taurus (April 20 - May 20)\n3.Gemini (May 21 - June 20)\n4.Cancer (June 21 - July 22)\n5.Leo (July 23 - August 22)\n6.Virgo (August 23 - September 22)\n7.Libra (September 23 - October 22)\n8.Scorpio (October 23 - November 21)\n9.Sagittarius (November 22 - December 21)\n10.Capricorn (December 22 - January 19)\n11.Aquarius (January 20 - February 18)\n12.Pisces (February 19 - march 20)\n\n";
    cout<<"Your answer is :";
    cin>>n1;

    if(n1==1)
    {
        cout<<"Your Love Compatibility is:\n\nPassion and fiery heat is your love operating style. You like to go for the gusto, taking bold action on your feelings. You are courageous and upfront in relationships and let others know exactly where you stand. Find out if your relationship will go all the way...";
        getch ();
    }
   else if(n1==2)
    {
        cout<<"Slow and sensual, you know exactly who and what you want. Your Earth child love is comforting and grounding for all who encounter its soothing touch. You are loyal and patient in love and want a partner who appreciates this. Find out if your relationship will go all the way... ";
        getch ();
    }
   else if(n1==3)
    {
        cout<<"A meeting of the minds is your highest value in love. For you, a stimulating and interesting debate is the best aphrodisiac, as you appreciate intelligence and wit above just about anything else. Find out if your relationship will go all the way... ";
        getch ();
    }
   else if(n1==4)
    {
        cout<<"Dreamy and intuitive, more than anything you want to be able to share your feelings with your partner and feel a sense of connection and understanding. You are nurturing and supportive in relationships and love to take care of the one you love. Find out if your relationship will go all the way... ";
        getch ();
    }
   else if(n1==5)
    {
        cout<<"Creative and playful, Leo needs passion in love. You want to entertain and be entertained in relationships, as boredom is the kiss of death. Your nature demands that you be the center of attention for your romantic partner or you will soon lose interest. Find out if your relationship will go all the way... ";
        getch ();
    }
   else if(n1==6)
    {
        cout<<"Your analytical, thoughtful, and sometimes moody mentality demands that your mate show you just how much he or she loves you. You want regular verbal reminders that you are appreciated, and tokens of affection really lift your spirits. Receiving also makes you a generous giver. Find out if your relationship will go all the way... ";
        getch ();
    }
   else if(n1==7)
    {
        cout<<"Romantic and social, you are always thinking of thoughtful ways to please your partner. It's important that conflicts are minimal in your relationships as they disrupt your sense of balance and harmony, so you prefer a relationship where diplomacy rules. Find out if your relationship will go all the way... ";
        getch ();
    }
   else if(n1==8)
    {
        cout<<"Your emotionally intense nature demands a deep and powerful connection with your love interest. Superficiality is a turn-off to you, as you want to dive beneath the surface and explore your partner's more mysterious side. Find out if your relationship will go all the way... ";
        getch ();
    }
   else if(n1==9)
    {
        cout<<"Diversity and adventure are a must for you in love. You are enthusiastic and expansive in expressing your affections, but you do best in a relationship where you can have plenty of space to roam free and explore unknown territories. Find out if your relationship will go all the way... ";
        getch ();
    }
   else if(n1==10)
    {
        cout<<"You are a committed and pragmatic lover and express your affection through actions more than emotions or words. You like to make your partner feel provided for, as if he or she has everything needed to feel comfortable in life. Find out if your relationship will go all the way... ";
        getch ();
    }
   else if(n1==11)
    {
        cout<<"Freedom and individuality are crucial to your experience of love. You are an inventive and stimulating partner who always has something new and interesting to offer to your relationship, just as long as you have the space to be yourself. Find out if your relationship will go all the way... ";
        getch ();
    }
   else if(n1==12)
    {
        cout<<"Your sensitive and compassionate style of loving comes from your deeply spiritual nature. You have a lot of love to give and appreciate a relationship that allows you to safely open your heart without fear that you will be taken advantage of. Find out if your relationship will go all the way... ";
        getch ();
    }
    else
    {
        cout<<"\n\nInvalid Number !!!!!!\n\n";
        getch ();
    }
}

    love2()
    {
    cout<<"\n\n\n\n";
    cout<<"which one is your sign ?\n\n";
    cout<<"Choose Number :\n\n1.Aries (March 21 - April 19)\n2.Taurus (April 20 - May 20)\n3.Gemini (May 21 - June 20)\n4.Cancer (June 21 - July 22)\n5.Leo (July 23 - August 22)\n6.Virgo (August 23 - September 22)\n7.Libra (September 23 - October 22)\n8.Scorpio (October 23 - November 21)\n9.Sagittarius (November 22 - December 21)\n10.Capricorn (December 22 - January 19)\n11.Aquarius (January 20 - February 18)\n12.Pisces (February 19 - march 20)\n\n";
    cout<<"Your answer is :";
    cin>>n1;
    cout<<"\n\n";
    cout<<"which one is your partner's sign ?\n\n";
    cout<<"Choose Number :\n\n1.Aries (March 21 - April 19)\n2.Taurus (April 20 - May 20)\n3.Gemini (May 21 - June 20)\n4.Cancer (June 21 - July 22)\n5.Leo (July 23 - August 22)\n6.Virgo (August 23 - September 22)\n7.Libra (September 23 - October 22)\n8.Scorpio (October 23 - November 21)\n9.Sagittarius (November 22 - December 21)\n10.Capricorn (December 22 - January 19)\n11.Aquarius (January 20 - February 18)\n12.Pisces (February 19 - march 20)\n\n";
    cout<<"Your answer is :";
    cin>>n2;

        if(n1==1 && n2==1)
        {
            cout<<"When Aries and Aries come together for love or any kind of relationship, it’s dynamic but also fiery! These two go-getters both love to be first, which can make it difficult to compromise. An Aries-Aries relationship is challenging but never dull, since you both understand each others need for independence. ";
            getch ();
        }
        else if(n1==1 && n2==2)
        {
            cout<<"When Aries and Taurus come together for love or any kind of relationship, it’s dynamic but also grounding. Aries loves to be first, while Taurus takes their sweet time. Let Taurus be the rock that holds down the fort, and Aries be the roll that keeps the two of you from getting stuck in a rut. ";
            getch ();
        }
        else if(n1==1 && n2==3)
        {
            cout<<"When Aries and Gemini come together for love or any kind of relationship, it’s exciting and dynamic! These two intellectuals both love good conversation, which can make for a true meeting of the minds. An Aries-Gemini relationship is never dull, since you both crave adventure. ";
            getch ();
        }
        else if(n1==1 && n2==4)
        {
            cout<<"When Aries and Cancer come together for love or any kind of relationship, it’s nurturing but also overbearing at times! These two moody star signs are great at keeping it real. An Aries-Cancer relationship is challenging but loving, since you both understand each others need to be taken care of. ";
            getch ();
        }
        else if(n1==1 && n2==5)
        {
            cout<<"When Aries and Leo come together for love or any kind of relationship, it’s fiery and star-powered! These two attention-seeking signs love the spotlight, which can make it difficult if you’re competing for the same role. An Aries-Leo relationship is never dull, since you both understand each others need for praise and recognition. ";
            getch ();
        }
        else if(n1==1 && n2==6)
        {
            cout<<"When Aries and Virgo come together for love or any kind of relationship, it’s challenging but also healing! These two signs can easily butt heads, but uniting around a common mission can strengthen your bond. An Aries-Virgo relationship can lead to frustration, since you both could find yourselves stepping on each others toes. ";
            getch ();
        }
        else if(n1==1 && n2==7)
        {
            cout<<"When Aries and Libra come together for love or any kind of relationship, it’s passionate but also feisty! These two dreamers are passionate about what they believe in, which can lead to spontaneous combustion if they find themselves at odds. An Aries-Libra relationship is challenging, but you can meet each other halfway by coming together around a shared mission. ";
            getch ();
        }
        else if(n1==1 && n2==8)
        {
            cout<<"When Aries and Scorpio come together for love or any kind of relationship, it’s smokin’ hot! These two feisty signs both love a good argument, which can lead to explosive fights, but also epic makeup sex. An Aries-Scorpio relationship is as much exciting as it is clandestine, since you both understand each others need for privacy. ";
            getch ();
        }
        else if(n1==1 && n2==9)
        {
            cout<<"When Aries and Sagittarius come together for love or any kind of relationship, it’s fiery and liberating! These two free spirits love excitement and adventure, which can make it difficult to settle down. An Aries-Sagittarius relationship is never dull, since you both understand each others need for independence and freedom. ";
            getch ();
        }
        else if(n1==1 && n2==10)
        {
            cout<<"When Aries and Capricorn come together for love or any kind of relationship, it’s complementary but also demanding. These larger-than-life personas both strive for success and achievement, which can become draining. An Aries-Capricorn relationship is destined for power couple status, but only if you can compromise in your collaborations. ";
            getch ();
        }
        else if(n1==1 && n2==11)
        {
            cout<<"When Aries and Aquarius come together for love or any kind of relationship, it’s a playful best friends with benefits dynamic. These two opinionated signs both love to debate, which can easily lead to an explosion. An Aries-Aquarius relationship is complementary and exciting, since you both understand each others need for worldly adventures. ";
            getch ();
        }
        else if(n1==1 && n2==12)
        {
            cout<<"When Aries and Pisces come together for love or any kind of relationship, it’s dynamic but also fiery! These two ‘head-cases’ are imaginative and cerebral, which can lead to brooding and resentment at times. An Aries-Pisces relationship is never boring, since you both understand each others need for intellectual stimulation. ";
            getch ();
        }
        else if(n1==2 && n2==1)
        {
            cout<<"When Aries and Taurus come together for love or any kind of relationship, it’s dynamic but also grounding. Aries loves to be first, while Taurus takes their sweet time. Let Taurus be the rock that holds down the fort, and Aries be the roll that keeps the two of you from getting stuck in a rut. ";
            getch ();
        }
         else if(n1==2 && n2==2)
        {
            cout<<"When Taurus and Taurus come together for love or any kind of relationship, it’s solid as a rock! These two traditionalists love to plan for the future, which can also lead to boredom in the bedroom. A Taurus-Taurus relationship is grounded, stabilizing and practical, since you both understand each other’s need for long-term security. ";
            getch ();
        }
         else if(n1==2 && n2==3)
        {
            cout<<"When Taurus and Gemini come together for love or any kind of relationship, it’s dynamic yet structured. These two signs couldn’t be any more different, which is exactly what excites you both. Chemistry is explosive between you, as you learn each other’s ways. A Taurus-Gemini relationship is a challenge, albeit an exciting one! ";
            getch ();
        }
         else if(n1==2 && n2==4)
        {
            cout<<"When Taurus and Cancer come together for love or any kind of relationship, it’s a soul-stirring match made in heaven! These two domestic doyennes have an affinity for homespun sensuality and a love for cooking and entertaining. A Taurus-Cancer relationship is traditional and family-oriented, since you both understand each other’s need for security and stability. ";
            getch ();
        }
         else if(n1==2 && n2==5)
        {
            cout<<"When Taurus and Leo come together for love or any kind of relationship, it’s sensual and luxurious! These two pleasure-seeking signs love the finer things in life, which can lead to over-indulgence. A Taurus-Leo relationship has head-turner status, since you both know how to work a room together. ";
            getch ();
        }
         else if(n1==2 && n2==6)
        {
            cout<<"When Taurus and Virgo come together for love or any kind of relationship, it’s grounding but also a bit neurotic! These two sensual creatures shower each other in affection and gifts, which can sometimes lead to disagreements over spending. A Taurus-Virgo relationship is stabilizing since you are both earth signs. ";
            getch ();
        }
         else if(n1==2 && n2==7)
        {
            cout<<"When Taurus and Libra come together for love or any kind of relationship, it’s beautifying and harmonious, but also superficial at times. These two pleasure-seekers love the finer things in life, but you’ll want to be sure you share the same values too. A Taurus-Libra relationship is warming and welcoming, since you are both equally charming and disarming. ";
            getch ();
        }
         else if(n1==2 && n2==8)
        {
            cout<<"When Taurus and Scorpio come together for love or any kind of relationship, opposites attract as passion is ignited! These two privacy-seeking signs prefer the comforts of their own home, which can lead to isolation if you don’t force yourselves to get out from time to time. A Taurus-Scorpio relationship can be sexy even through the mundane, since you both turn each other on with constructive criticism. ";
            getch ();
        }
         else if(n1==2 && n2==9)
        {
            cout<<"When Taurus and Sagittarius come together for love or any kind of relationship, it may look odd on paper but it can also be a very complementary match! Taurus helps wandering Sagittarius establish roots while Sag encourages the Bull to take more risks. A Taurus-Sagittarius relationship is ideal for childrearing, since you both prioritize education and higher learning. ";
            getch ();
        }
         else if(n1==2 && n2==10)
        {
            cout<<"When Taurus and Capricorn come together for love or any kind of relationship, it’s solid as a rock! These two security-seeking earth signs love to plan for the future, which could dwindle the romantic vibes over time. A Taurus-Capricorn relationship is traditional and family-oriented, since you both understand each other’s need for stability. ";
            getch ();
        }
         else if(n1==2 && n2==11)
        {
            cout<<"When Taurus and Aquarius come together for love or any kind of relationship, it’s passionate but also aggressive! These two opposites couldn’t be any more different, though you can balance each other out when you play to your strengths. You can find balance in a Taurus-Aquarius relationship by exploring your different conversation styles. ";
            getch ();
        }
         else if(n1==2 && n2==12)
        {
            cout<<"When Taurus and Pisces come together for love or any kind of relationship, it’s ethereal and dreamy! These two sensual signs are poetry in motion, which can also mean that your heads get stuck up in the clouds at times. A Taurus-Pisces relationship appreciates life’s guilty pleasures, but watch for excess as you indulge together.";

            getch ();
        }
        else if(n1==3 && n2==1)
        {
            cout<<"When Aries and Gemini come together for love or any kind of relationship, it’s exciting and dynamic! These two intellectuals both love good conversation, which can make for a true meeting of the minds. An Aries-Gemini relationship is never dull, since you both crave adventure.";
            getch ();
        }
          else if(n1==3 && n2==2)
        {
            cout<<"When Taurus and Gemini come together for love or any kind of relationship, it’s dynamic yet structured. These two signs couldn’t be any more different, which is exactly what excites you both. Chemistry is explosive between you, as you learn each other’s ways. A Taurus-Gemini relationship is a challenge, albeit an exciting one! ";
            getch ();
        }
          else if(n1==3 && n2==3)
        {
            cout<<"When Gemini and Gemini come together for love or any kind of relationship, it’s unpredictable and moody! These two over-analyzers love a healthy debate, which can also lead to heated arguments. A Gemini-Gemini relationship works because you both understand each other’s quirks.";
            getch ();
        }
          else if(n1==3 && n2==4)
        {
            cout<<"When Gemini and Cancer come together for love or any kind of relationship, it’s dynamic but also sensitive. These two polar opposites actually complement each other well, since you both have many different layers to your moods. A Gemini-Cancer relationship is stimulating, since you both share an affinity for cultural activities and socializing. ";
            getch ();
        }
          else if(n1==3 && n2==5)
        {
            cout<<"When Gemini and Leo come together for love or any kind of relationship, it’s dramatic and playful! These two theatrical signs love adventure and a wide array of interests, which can lead to overly-packed schedules. A Gemini-Leo relationship is full of hopes and dreams, because you both understand each other’s outsized ambition. ";
            getch ();
        }
          else if(n1==3 && n2==6)
        {
            cout<<"When Gemini and Virgo come together for love or any kind of relationship, it’s neurotic and erotic! These two communicators are skilled conversationalists, since they share Mercury as their planetary ruler. A Gemini-Virgo relationship is intellectually stimulating because you share a passion for uncovering new and exciting information. ";
            getch ();
        }
          else if(n1==3 && n2==7)
        {
            cout<<"When Gemini and Libra come together for love or any kind of relationship, two social butterflies have met their match! But these indecisive signs might struggle to reach conclusions together, since you are both prone to changing your minds. A Gemini-Libra relationship moves at two different speeds, but having a good time together will strengthen your bond. ";
            getch ();
        }
          else if(n1==3 && n2==8)
        {
            cout<<"When Gemini and Scorpio come together for love or any kind of relationship, it’s intense and dramatic! These two ingenues love a good game of cat and mouse, and always ask plenty of questions. A Gemini-Scorpio relationship is intellectually stimulating, since you both understand the unending quest for the truth. ";
            getch ();
        }
          else if(n1==3 && n2==9)
        {
            cout<<"When Gemini and Sagittarius come together for love or any kind of relationship, it’s dynamic and engaging! These two expert communicators will never run out of things to discuss. A Gemini-Sagittarius relationship is adventurous, but since you both love to travel it may be hard to pin each other down. ";
            getch ();
        }
          else if(n1==3 && n2==10)
        {
            cout<<"When Gemini and Capricorn come together for love or any kind of relationship, it’s dynamic and inspiring! These two ambitious signs are pro networkers, and could talk each other’s ears off for hours. A Gemini-Capricorn relationship is intellectually stimulating, since you are both ambitious in your careers.";
            getch ();
        }
          else if(n1==3 && n2==11)
        {
            cout<<"When Gemini and Aquarius come together for love or any kind of relationship, it’s heaven on Earth! These future-forward thinkers share the gift of gab and a love for collaboration and community. A Gemini-Aquarius relationship is stimulating and exciting, because you share a passion for solving life’s great mysteries.";
            getch ();
        }
          else if(n1==3 && n2==12)
        {
            cout<<"When Gemini and Pisces come together for love or any kind of relationship, it’s surreal and also moody! But these two commitment-phobes actually find common ground together, and this relationship could really withstand the test of time. A Gemini-Pisces relationship is equally harmonizing, since both of your signs represent duality.";
            getch ();
        }
        else if(n1==4 && n2==1)
        {
            cout<<"When Aries and Cancer come together for love or any kind of relationship, it’s nurturing but also overbearing at times! These two moody star signs are great at keeping it real. An Aries-Cancer relationship is challenging but loving, since you both understand each others’ need to be taken care of.";
            getch ();
        }
          else if(n1==4 && n2==2)
        {
            cout<<"When Taurus and Cancer come together for love or any kind of relationship, it’s a soul-stirring match made in heaven! These two domestic doyennes have an affinity for homespun sensuality and a love for cooking and entertaining. A Taurus-Cancer relationship is traditional and family-oriented, since you both understand each other’s need for security and stability.";
            getch ();
        }
          else if(n1==4 && n2==3)
        {
            cout<<"When Gemini and Cancer come together for love or any kind of relationship, it’s dynamic but also sensitive. These two polar opposites actually complement each other well, since you both have many different layers to your moods. A Gemini-Cancer relationship is stimulating, since you both share an affinity for cultural activities and socializing.";
            getch ();
        }
          else if(n1==4 && n2==4)
        {
            cout<<"When Cancer and Cancer come together for love or any kind of relationship, it’s domestic bliss at its finest. These two homespun Crabs love cooking and mothering, which can be smothering at times! A Cancer-Cancer relationship is nurturing and heartwarming, since you both understand each other’s care-taking ways.";
            getch ();
        }
          else if(n1==4 && n2==5)
        {
            cout<<"When Cancer and Leo come together for love or any kind of relationship, it’s a balance of stage manager meets superstar. These two family-oriented signs both love to entertain, making for some epic holidays spent at your casa. A Cancer-Leo relationship will also need to compromise, since your energies are as different as night and day.";
            getch ();
        }
          else if(n1==4 && n2==6)
        {
            cout<<"When Cancer and Virgo come together for love or any kind of relationship, two sentimental spirits may have just met their match. These two security-seeking signs give each other the space they need to feel safe. A Cancer-Virgo relationship is nurturing, since you both understand each other’s need for domestic bliss.";
            getch ();
        }
          else if(n1==4 && n2==7)
        {
            cout<<"When Cancer and Libra come together for love or any kind of relationship, it’s elegant and sensual, but also emotional. These two peaceful signs both avoid conflict like the plague, which can lead to harbored resentment. A Cancer-Libra relationship is highly sensitive, since you both tend to internalize your feelings.";
            getch ();
        }
          else if(n1==4 && n2==8)
        {
            cout<<"When Cancer and Scorpio come together for love or any kind of relationship, two kindred spirits may have just met their match. These two sensitive beings are both afraid to let their guard down, but feel safe with each other. A Cancer-Scorpio relationship is nurturing and healing, since you allow each other to let your guard down. ";
            getch ();
        }
          else if(n1==4 && n2==9)
        {
            cout<<"When Cancer and Sagittarius come together for love or any kind of relationship, it’s eat, drink and be merry ’til the end! These two culinary masters love good food and company. A Cancer-Sagittarius relationship is fueled by big belly laughs, since you understand each other’s unique sense of humor. ";
            getch ();
        }
          else if(n1==4 && n2==10)
        {
            cout<<"When Cancer and Capricorn come together for love or any kind of relationship, it’s a perfect blend of divine feminine and masculine energies. These two traditionalists can easily fall into conventional roles, which can also lead to a codependent dynamic. A Cancer-Capricorn relationship is nurturing, since you both strive for balance between care-taking and providing.";
            getch ();
        }
          else if(n1==4 && n2==11)
        {
            cout<<"When Cancer and Aquarius come together for love or any kind of relationship, it’s awkward at first with plenty of lasting potential. There is a lot to be learned from each other, which can help you to appreciate your differences. A Cancer-Aquarius relationship is nurturing, since you both understand each other’s parenting styles should you decide to have children.";
            getch ();
        }
          else if(n1==4 && n2==12)
        {
            cout<<"When Cancer and Pisces come together for love or any kind of relationship, the emotional floodgates have opened! These two sensitive souls as passionate and empathetic, which can lead to decisions based on feelings over logic. A Cancer-Pisces relationship is fueled by fantasy, since you understand how to navigate each other’s psychic waters.";
            getch ();
        }
        else if(n1==5 && n2==1)
        {
            cout<<"When Aries and Leo come together for love or any kind of relationship, it’s fiery and star-powered! These two attention-seeking signs love the spotlight, which can make it difficult if you’re competing for the same role. An Aries-Leo relationship is never dull, since you both understand each other's need for praise and recognition.";
            getch();
        }
         else if(n1==5 && n2==2)
        {
            cout<<"When Taurus and Leo come together for love or any kind of relationship, it’s sensual and luxurious! These two pleasure-seeking signs love the finer things in life, which can lead to over-indulgence. A Taurus-Leo relationship has head-turner status, since you both know how to work a room together.";
            getch();
        }
         else if(n1==5 && n2==3)
        {
            cout<<"When Gemini and Leo come together for love or any kind of relationship, it’s dramatic and playful! These two theatrical signs love adventure and a wide array of interests, which can lead to overly-packed schedules. A Gemini-Leo relationship is full of hopes and dreams, because you both understand each other’s outsized ambition. ";
            getch();
        }
         else if(n1==5 && n2==4)
        {
            cout<<"When Cancer and Leo come together for love or any kind of relationship, it’s a balance of stage manager meets superstar. These two family-oriented signs both love to entertain, making for some epic holidays spent at your casa. A Cancer-Leo relationship will also need to compromise, since your energies are as different as night and day.";
            getch();
        }
         else if(n1==5 && n2==5)
        {
            cout<<"When Leo and Leo come together for love or any kind of relationship, it’s glamorous and exciting. These two royal Lions have a soul-stirring, passionate connection, which can also lead to drama. A Leo-Leo relationship is ripe with chemistry, since you both understand each other’s primal instincts.";
            getch();
        }
         else if(n1==5 && n2==6)
        {
            cout<<"When Leo and Virgo come together for love or any kind of relationship, it’s as hot as it is cold. But your differences are what attracted you to each other in the first place! A Leo-Virgo relationship is successful once balance is achieved, since you both appreciate each other’s unique qualities.";
            getch();
        }
         else if(n1==5 && n2==7)
        {
            cout<<"When Leo and Libra come together for love or any kind of relationship, it’s glamorous and decadent. These two social butterflies love to rub elbows with the VIPs, which could lead to jealousy if not kept in check. A Leo-Libra relationship is ripe with excitement, since you both love to dress up and paint the town red.";
            getch();
        }
         else if(n1==5 && n2==8)
        {
            cout<<"When Leo and Scorpio come together for love or any kind of relationship, it’s magnetic and spicy! But these two control freaks love to have things their way, which can lead to epic power struggles. A Leo-Scorpio relationship is inspiring and assuring, since you both understand each other’s highly confident personas.";
            getch();
        }
         else if(n1==5 && n2==9)
        {
            cout<<"When Leo and Sagittarius come together for love or any kind of relationship, it’s dynamic and a whole lotta fun! These two party people know how to work a room, which could lead to many wild nights about town. A Leo-Sagittarius relationship is passionate and inspiring, since you both understand each other’s ambitious ways.";
            getch();
        }
         else if(n1==5 && n2==10)
        {
            cout<<"When Leo and Capricorn come together for love or any kind of relationship, it’s a fairy tale come true. These two image-conscious signs will dress to impress, which can also lead to vanity and a superficial dynamic. A Leo-Capricorn relationship is ripe with chemistry, since you both understand each other’s desires for power couple status.";
            getch();
        }
         else if(n1==5 && n2==11)
        {
            cout<<"When Leo and Aquarius come together for love or any kind of relationship, it’s lighthearted and fun! These two party animals crave excitement and adventure, which can also lead to dramatic emotional outbursts. A Leo-Aquarius relationship is incredibly stimulating, since you both understand each other’s carefree and childlike ways. ";
            getch();
        }
         else if(n1==5 && n2==12)
        {
            cout<<"When Leo and Pisces come together for love or any kind of relationship, it’s dramatic and dynamic! These two creative ingenues love romance and spirituality, which could also lead to emotional outbursts. A Leo-Pisces relationship is limitless, since you both understand each other’s desire for success and stardom.";
            getch();
        }
         else if(n1==6 && n2==1)
        {
            cout<<"When Aries and Virgo come together for love or any kind of relationship, it’s challenging but also healing! These two signs can easily butt heads, but uniting around a common mission can strengthen your bond. An Aries-Virgo relationship can lead to frustration, since you both could find yourselves stepping on each others’ toes.";
            getch();
        }
         else if(n1==6 && n2==2)
        {
            cout<<"When Taurus and Virgo come together for love or any kind of relationship, it’s grounding but also a bit neurotic! These two sensual creatures shower each other in affection and gifts, which can sometimes lead to disagreements over spending. A Taurus-Virgo relationship is stabilizing since you are both earth signs.";
            getch();
        }
         else if(n1==6 && n2==3)
        {
            cout<<"When Gemini and Virgo come together for love or any kind of relationship, it’s neurotic and erotic! These two communicators are skilled conversationalists, since they share Mercury as their planetary ruler. A Gemini-Virgo relationship is intellectually stimulating because you share a passion for uncovering new and exciting information.";
            getch();
        }
         else if(n1==6 && n2==4)
        {
            cout<<"When Cancer and Virgo come together for love or any kind of relationship, two sentimental spirits may have just met their match. These two security-seeking signs give each other the space they need to feel safe. A Cancer-Virgo relationship is nurturing, since you both understand each other’s need for domestic bliss.";
            getch();
        }
         else if(n1==6 && n2==5)
        {
            cout<<"When Leo and Virgo come together for love or any kind of relationship, it’s as hot as it is cold. But your differences are what attracted you to each other in the first place! A Leo-Virgo relationship is successful once balance is achieved, since you both appreciate each other’s unique qualities.";
            getch();
        }
         else if(n1==6 && n2==6)
        {
            cout<<"When Virgo and Virgo come together for love or any kind of relationship, it’s dynamic and grounding. These two conversationalists also have an affinity for homespun sensuality, which could mean you never want to leave the house! A Virgo-Virgo relationship is intellectually stimulating, since you both understand each other’s analytical and systematic ways.";
            getch();
        }
         else if(n1==6 && n2==7)
        {
            cout<<"When Virgo and Libra come together for love or any kind of relationship, it’s a meeting of the mild-mannered minds! These two aesthetes love good food and culture, which can make nights out on the town fun and interesting. A Virgo-Libra relationship is laid back, which can also lead to complacency.";
            getch();
        }
         else if(n1==6 && n2==8)
        {
            cout<<"When Virgo and Scorpio come together for love or any kind of relationship, it’s spiritually stimulating! These two privacy-seeking souls love to dive deep, which can lead to fascinating conversation. A Virgo-Scorpio relationship is detail-oriented, since you both understand each other’s analytical ways.";
            getch();
        }
         else if(n1==6 && n2==9)
        {
            cout<<"When Virgo and Sagittarius come together for love or any kind of relationship, it’s intellectually stimulating! These conversationalists find common ground over holistic health and philosophical thinking. A Virgo-Sagittarius relationship will need to make room for compromise, since you both could travel for extended periods of time.";
            getch();
        }
         else if(n1==6 && n2==10)
        {
            cout<<"When Virgo and Capricorn come together for love or any kind of relationship, it’s grounding and feels like home! These two security-seeking signs love tradition, which can also lead to boredom and complacency. A Virgo-Capricorn relationship is incredibly stimulating, since you both understand each other’s need for structure.";
            getch();
        }
         else if(n1==6 && n2==11)
        {
            cout<<"When Virgo and Aquarius come together for love or any kind of relationship, you both want to make the world a better place, together! These two humanitarians share the same intellectual pursuits, but you can also butt heads when you become too set in your own ways. A Virgo-Aquarius relationship is incredibly stimulating, since you both understand each other’s high-minded ways.";
            getch();
        }
         else if(n1==6 && n2==12)
        {
            cout<<"When Virgo and Pisces come together for love or any kind of relationship, it’s magnetic and nurturing! These two health nuts love holistic healing, which means you both prioritize well-being. Since there is so much care-taking in a Virgo-Pisces relationship, codependency can become an issue.";
            getch();
        }
         else if(n1==7 && n2==1)
        {
            cout<<"When Aries and Libra come together for love or any kind of relationship, it’s passionate but also feisty! These two dreamers are passionate about what they believe in, which can lead to spontaneous combustion if they find themselves at odds. An Aries-Libra relationship is challenging, but you can meet each other halfway by coming together around a shared mission.";
            getch();
        }
         else if(n1==7 && n2==2)
        {
            cout<<"When Taurus and Libra come together for love or any kind of relationship, it’s beautifying and harmonious, but also superficial at times. These two pleasure-seekers love the finer things in life, but you’ll want to be sure you share the same values too. A Taurus-Libra relationship is warming and welcoming, since you are both equally charming and disarming.";
            getch();
        }
         else if(n1==7 && n2==3)
        {
            cout<<"When Gemini and Libra come together for love or any kind of relationship, two social butterflies have met their match! But these indecisive signs might struggle to reach conclusions together, since you are both prone to changing your minds. A Gemini-Libra relationship moves at two different speeds, but having a good time together will strengthen your bond.";
            getch();
        }
         else if(n1==7 && n2==4)
        {
            cout<<"When Cancer and Libra come together for love or any kind of relationship, it’s elegant and sensual, but also emotional. These two peaceful signs both avoid conflict like the plague, which can lead to harbored resentment. A Cancer-Libra relationship is highly sensitive, since you both tend to internalize your feelings.";
            getch();
        }
         else if(n1==7 && n2==5)
        {
            cout<<"When Leo and Libra come together for love or any kind of relationship, it’s glamorous and decadent. These two social butterflies love to rub elbows with the VIPs, which could lead to jealousy if not kept in check. A Leo-Libra relationship is ripe with excitement, since you both love to dress up and paint the town red.";
            getch();
        }
         else if(n1==7 && n2==6)
        {
            cout<<"When Virgo and Libra come together for love or any kind of relationship, it’s a meeting of the mild-mannered minds! These two aesthetes love good food and culture, which can make nights out on the town fun and interesting. A Virgo-Libra relationship is laid back, which can also lead to complacency.";
            getch();
        }
         else if(n1==7 && n2==7)
        {
            cout<<"When Libra and Libra come together for love or any kind of relationship, it’s an instant harmonious connection; a true meeting of the hedonistic minds. Ruled by decadent Venus, these two lovebirds are an enviable couple in social settings, dressed lavishly head-to-toe in the most fashion-forward trends. A Libra-Libra relationship can quickly take a turn toward overindulgence if you’re not careful, since you both have an affinity for the finer things in life.";
            getch();
        }
         else if(n1==7 && n2==8)
        {
            cout<<"When Libra and Scorpio come together for love or any kind of relationship, it’s an intriguing connection that magnetizes two polar opposites. These night owls both know how to have a good time, which could quickly fizzle out one you realize your fundamental differences. Secretive Scorpio plays it cool while amorous Libra wears their heart on their sleeve, leading to misunderstandings. A Libra-Scorpio relationship can thrive if you are willing to make some serious compromises for each other.";
            getch();
        }
         else if(n1==7 && n2==9)
        {
            cout<<"When Libra and Sagittarius come together for love or any kind of relationship, it’s best friends for life! These two pleasure-seeking hedonists love good food and a good time, which can also lead to overindulgence. A Libra-Sagittarius relationship is free-flowing and warmhearted, since you both understand each other’s bohemian ways.";
            getch();
        }
         else if(n1==7 && n2==10)
        {
            cout<<"When Libra and Capricorn come together for love or any kind of relationship, it’s the perfect blend of power and pleasure! These two fashionistas know how to work a room together, which can lead to power couple status. A Libra-Capricorn relationship can also be superficial, since you both can struggle to drop your masks behind closed doors.";
            getch();
        }
         else if(n1==7 && n2==11)
        {
            cout<<"When Libra and Aquarius come together for love or any kind of relationship, it’s straight to cloud nine! These two dreamy air signs both love freedom and travel, which can lead to epic adventures together around the world. A Libra-Aquarius relationship tends to avoid conflict, which can lead to harboring resentment if you don’t voice your feelings. ";
            getch();
        }
         else if(n1==7 && n2==12)
        {
            cout<<"When Libra and Pisces come together for love or any kind of relationship, you’re both instantly swept off your feet! These two hopeless romantics love flowers, chocolates and candles, which can send you both straight to cloud nine. A Libra-Pisces relationship is highly sensitive and compassionate, since you both understand each other’s empathic ways.";
            getch();
        }
         else if(n1==8 && n2==1)
        {
            cout<<"When Aries and Scorpio come together for love or any kind of relationship, it’s smokin’ hot! These two feisty signs both love a good argument, which can lead to explosive fights, but also epic makeup sex. An Aries-Scorpio relationship is as much exciting as it is clandestine, since you both understand each other's need for privacy.";
            getch();
        }
         else if(n1==8 && n2==2)
        {
            cout<<"When Taurus and Scorpio come together for love or any kind of relationship, opposites attract as passion is ignited! These two privacy-seeking signs prefer the comforts of their own home, which can lead to isolation if you don’t force yourselves to get out from time to time. A Taurus-Scorpio relationship can be sexy even through the mundane, since you both turn each other on with constructive criticism.";
            getch();
        }
         else if(n1==8 && n2==3)
        {
            cout<<"When Gemini and Scorpio come together for love or any kind of relationship, it’s intense and dramatic! These two ingenues love a good game of cat and mouse, and always ask plenty of questions. A Gemini-Scorpio relationship is intellectually stimulating, since you both understand the unending quest for the truth.";
            getch();
        }
         else if(n1==8 && n2==4)
        {
            cout<<"When Cancer and Scorpio come together for love or any kind of relationship, two kindred spirits may have just met their match. These two sensitive beings are both afraid to let their guard down, but feel safe with each other. A Cancer-Scorpio relationship is nurturing and healing, since you allow each other to let your guard down. ";
            getch();
        }
         else if(n1==8 && n2==5)
        {
            cout<<"When Leo and Scorpio come together for love or any kind of relationship, it’s magnetic and spicy! But these two control freaks love to have things their way, which can lead to epic power struggles. A Leo-Scorpio relationship is inspiring and assuring, since you both understand each other’s highly confident personas.";
            getch();
        }
         else if(n1==8 && n2==6)
        {
            cout<<"When Virgo and Scorpio come together for love or any kind of relationship, it’s spiritually stimulating! These two privacy-seeking souls love to dive deep, which can lead to fascinating conversation. A Virgo-Scorpio relationship is detail-oriented, since you both understand each other’s analytical ways.";
            getch();
        }
         else if(n1==8 && n2==7)
        {
            cout<<"When Libra and Scorpio come together for love or any kind of relationship, it’s an intriguing connection that magnetizes two polar opposites. These night owls both know how to have a good time, which could quickly fizzle out one you realize your fundamental differences. Secretive Scorpio plays it cool while amorous Libra wears their heart on their sleeve, leading to misunderstandings. A Libra-Scorpio relationship can thrive if you are willing to make some serious compromises for each other.";
            getch();
        }
         else if(n1==8 && n2==8)
        {
            cout<<"When Scorpio and Scorpio come together for love or any kind of relationship, it’s an instant psychic connection that moves fast. These two soul-stirring mystics crave sex and intimacy, which could become isolating since you’ll never want to leave the bedroom! A Scorpio-Scorpio relationship can move quickly, since you both understand each other's need for lifelong perma-bonding.";
            getch();
        }
         else if(n1==8 && n2==9)
        {
            cout<<"When Scorpio and Sagittarius come together for love or any kind of relationship, it’s an intense love/hate affair with plenty of cosmic chemistry! These two spiritual warriors can easily butt heads, but can also complement each other when you play to your strengths. A Scorpio-Sagittarius relationship is never boring, since you both understand each others’ need for truth and passion.";
            getch();
        }
         else if(n1==8 && n2==10)
        {
            cout<<"When Scorpio and Capricorn come together for love or any kind of relationship, it’s a complementary match you won’t want to miss out on! But since these two over-achievers both shoot for the moon, your busy schedules may not leave you enough time left over for each other. A Scorpio-Capricorn relationship is inspiring and secure, since you both understand each others’ need for tireless ambition.";
            getch();
        }
         else if(n1==8 && n2==11)
        {
            cout<<"When Scorpio and Aquarius come together for love or any kind of relationship, it’s as though the missing link has been discovered! But these two polar opposites don’t necessarily make the most sense at a first glance. You can strike a balance if you cultivate trust and open yourselves up to each other’s very different ways. A Scorpio-Aquarius relationship is never boring, since you both understand each others’ need for soul-stirring connections.";
            getch();
        }
         else if(n1==8 && n2==12)
        {
            cout<<"When Scorpio and Pisces come together for love or any kind of relationship, it’s mystical, creative and exhilarating! But these two secretive signs may also live double lives, which will require a raw honesty and vulnerability if this relationship is to thrive. A Scorpio-Pisces relationship is magnetic, since you both understand each others’ need for intimate, soul-stirring connections.";
            getch();
        }
         else if(n1==9 && n2==1)
        {
            cout<<"When Aries and Sagittarius come together for love or any kind of relationship, it’s fiery and liberating! These two free spirits love excitement and adventure, which can make it difficult to settle down. An Aries-Sagittarius relationship is never dull, since you both understand each others’ need for independence and freedom.";
            getch();
        }
          else if(n1==9 && n2==2)
        {
            cout<<"When Taurus and Sagittarius come together for love or any kind of relationship, it may look odd on paper but it can also be a very complementary match! Taurus helps wandering Sagittarius establish roots while Sag encourages the Bull to take more risks. A Taurus-Sagittarius relationship is ideal for childrearing, since you both prioritize education and higher learning.";
            getch();
        }
          else if(n1==9 && n2==3)
        {
            cout<<"When Gemini and Sagittarius come together for love or any kind of relationship, it’s dynamic and engaging! These two expert communicators will never run out of things to discuss. A Gemini-Sagittarius relationship is adventurous, but since you both love to travel it may be hard to pin each other down.  ";
            getch();
        }
          else if(n1==9 && n2==4)
        {
            cout<<"When Cancer and Sagittarius come together for love or any kind of relationship, it’s eat, drink and be merry ’til the end! These two culinary masters love good food and company. A Cancer-Sagittarius relationship is fueled by big belly laughs, since you understand each other’s unique sense of humor.  ";
            getch();
        }
          else if(n1==9 && n2==5)
        {
            cout<<"When Leo and Sagittarius come together for love or any kind of relationship, it’s dynamic and a whole lotta fun! These two party people know how to work a room, which could lead to many wild nights about town. A Leo-Sagittarius relationship is passionate and inspiring, since you both understand each other’s ambitious ways. ";
            getch();
        }
          else if(n1==9 && n2==6)
        {
            cout<<"When Virgo and Sagittarius come together for love or any kind of relationship, it’s intellectually stimulating! These conversationalists find common ground over holistic health and philosophical thinking. A Virgo-Sagittarius relationship will need to make room for compromise, since you both could travel for extended periods of time. ";
            getch();
        }
          else if(n1==9 && n2==7)
        {
            cout<<"When Libra and Sagittarius come together for love or any kind of relationship, it’s best friends for life! These two pleasure-seeking hedonists love good food and a good time, which can also lead to overindulgence. A Libra-Sagittarius relationship is free-flowing and warmhearted, since you both understand each other’s bohemian ways. ";
            getch();
        }
          else if(n1==9 && n2==8)
        {
            cout<<"When Scorpio and Sagittarius come together for love or any kind of relationship, it’s an intense love/hate affair with plenty of cosmic chemistry! These two spiritual warriors can easily butt heads, but can also complement each other when you play to your strengths. A Scorpio-Sagittarius relationship is never boring, since you both understand each others’ need for truth and passion.";
            getch();
        }
          else if(n1==9 && n2==9)
        {
            cout<<"When Sagittarius and Sagittarius come together for love or any kind of relationship, it’s exciting and adventurous! These two globetrotters crave freedom and expansion, which can make it difficult to settle down. A Sagittarius-Sagittarius relationship is wild and young at heart, since you both understand each others’ unending desire for exploration and evolution.";
            getch();
        }
          else if(n1==9 && n2==10)
        {
            cout<<"When Sagittarius and Capricorn come together for love or any kind of relationship, it’s going to be a challenge—but at least you’re both up for it! These two entrepreneurs are also total opposites, which can create a push-pull dynamic when trying to get just about anything done. A Sagittarius-Capricorn relationship is worth exploring, since you both understand each others’ ambitious natures and lavish tastes.";
            getch();
        }
          else if(n1==9 && n2==11)
        {
            cout<<"When Sagittarius and Aquarius come together for love or any kind of relationship, it’s going to be a fun and wild ride! These two party-people have a BFF dynamic, which can lead to awkwardness in the bedroom since your connection can be platonic. A Sagittarius-Aquarius relationship is liberating and expansive, since you both understand each others’ need for freedom and a higher purpose.";
            getch();
        }
          else if(n1==9 && n2==12)
        {
            cout<<"When Sagittarius and Pisces come together for love or any kind of relationship, it’s fantasy-fueled with dream-come-true potential! These two indecisive signs can struggle to commit, but also have a tendency to depend too heavily on each other which can lead to frustration. A Sagittarius-Pisces relationship is creative, cerebral and romantic, since you both understand each other’s philosophical and high-minded ways.";
            getch();
        }
          else if(n1==10 && n2==1)
        {
            cout<<"When Aries and Capricorn come together for love or any kind of relationship, it’s complementary but also demanding. These larger-than-life personas both strive for success and achievement, which can become draining. An Aries-Capricorn relationship is destined for power couple status, but only if you can compromise in your collaborations.";
            getch();
        }
          else if(n1==10 && n2==2)
        {
            cout<<"When Taurus and Capricorn come together for love or any kind of relationship, it’s solid as a rock! These two security-seeking earth signs love to plan for the future, which could dwindle the romantic vibes over time. A Taurus-Capricorn relationship is traditional and family-oriented, since you both understand each other’s need for stability.";
            getch();
        }
          else if(n1==10 && n2==3)
        {
            cout<<"When Gemini and Capricorn come together for love or any kind of relationship, it’s dynamic and inspiring! These two ambitious signs are pro networkers, and could talk each other’s ears off for hours. A Gemini-Capricorn relationship is intellectually stimulating, since you are both ambitious in your careers.";
            getch();
        }
          else if(n1==10 && n2==4)
        {
            cout<<"When Cancer and Capricorn come together for love or any kind of relationship, it’s a perfect blend of divine feminine and masculine energies. These two traditionalists can easily fall into conventional roles, which can also lead to a codependent dynamic. A Cancer-Capricorn relationship is nurturing, since you both strive for balance between care-taking and providing.";
            getch();
        }
          else if(n1==10 && n2==5)
        {
            cout<<"When Leo and Capricorn come together for love or any kind of relationship, it’s a fairy tale come true. These two image-conscious signs will dress to impress, which can also lead to vanity and a superficial dynamic. A Leo-Capricorn relationship is ripe with chemistry, since you both understand each other’s desires for power couple status. ";
            getch();
        }
          else if(n1==10 && n2==6)
        {
            cout<<"When Virgo and Capricorn come together for love or any kind of relationship, it’s grounding and feels like home! These two security-seeking signs love tradition, which can also lead to boredom and complacency. A Virgo-Capricorn relationship is incredibly stimulating, since you both understand each other’s need for structure.";
            getch();
        }
          else if(n1==10 && n2==7)
        {
            cout<<"When Libra and Capricorn come together for love or any kind of relationship, it’s the perfect blend of power and pleasure! These two fashionistas know how to work a room together, which can lead to power couple status. A Libra-Capricorn relationship can also be superficial, since you both can struggle to drop your masks behind closed doors.";
            getch();
        }
          else if(n1==10 && n2==8)
        {
            cout<<"When Scorpio and Capricorn come together for love or any kind of relationship, it’s a complementary match you won’t want to miss out on! But since these two over-achievers both shoot for the moon, your busy schedules may not leave you enough time left over for each other. A Scorpio-Capricorn relationship is inspiring and secure, since you both understand each others’ need for tireless ambition.";
            getch();
        }
          else if(n1==10 && n2==9)
        {
            cout<<"When Sagittarius and Capricorn come together for love or any kind of relationship, it’s going to be a challenge—but at least you’re both up for it! These two entrepreneurs are also total opposites, which can create a push-pull dynamic when trying to get just about anything done. A Sagittarius-Capricorn relationship is worth exploring, since you both understand each others’ ambitious natures and lavish tastes.";
            getch();
        }
          else if(n1==10 && n2==10)
        {
            cout<<"When Capricorn and Capricorn come together for love or any kind of relationship, it’s instant power couple status! These two hard-working go-getters crave stability and security, which can lead to boredom in the bedroom. A Capricorn-Capricorn relationship is successful financially and emotionally, since you both understand each other’s ambitious nature.";
            getch();
        }
          else if(n1==10 && n2==11)
        {
            cout<<"When Capricorn and Aquarius come together for love or any kind of relationship, you’re in it to win it! These two status-seeking go-getters love a good challenge, which can put a damper on spontaneity. A Capricorn-Aquarius relationship can truly have it all, since you both truly understand each other’s tireless ambition.";
            getch();
        }
          else if(n1==10 && n2==12)
        {
            cout<<"When Capricorn and Pisces come together for love or any kind of relationship, it’s harmonious and balancing. These two polar opposites seem to complement each other perfectly, which can lead to a codependent dynamic. A Capricorn-Pisces relationship can thrive if you give each other enough space to truly be themselves with plenty of built-to-last and even marriage potential.";
            getch();
        }
          else if(n1==11 && n2==1)
        {
            cout<<"When Aries and Aquarius come together for love or any kind of relationship, it’s a playful best friends with benefits dynamic. These two opinionated signs both love to debate, which can easily lead to an explosion. An Aries-Aquarius relationship is complementary and exciting, since you both understand each others’ need for worldly adventures.";
            getch();
        }
         else if(n1==11 && n2==2)
        {
            cout<<"When Taurus and Aquarius come together for love or any kind of relationship, it’s passionate but also aggressive! These two opposites couldn’t be any more different, though you can balance each other out when you play to your strengths. You can find balance in a Taurus-Aquarius relationship by exploring your different conversation styles.";
            getch();
        }
         else if(n1==11 && n2==3)
        {
            cout<<"When Gemini and Aquarius come together for love or any kind of relationship, it’s heaven on Earth! These future-forward thinkers share the gift of gab and a love for collaboration and community. A Gemini-Aquarius relationship is stimulating and exciting, because you share a passion for solving life’s great mysteries.";
            getch();
        }
         else if(n1==11 && n2==4)
        {
            cout<<"When Cancer and Aquarius come together for love or any kind of relationship, it’s awkward at first with plenty of lasting potential. There is a lot to be learned from each other, which can help you to appreciate your differences. A Cancer-Aquarius relationship is nurturing, since you both understand each other’s parenting styles should you decide to have children.";
            getch();
        }
         else if(n1==11 && n2==5)
        {
            cout<<"When Leo and Aquarius come together for love or any kind of relationship, it’s lighthearted and fun! These two party animals crave excitement and adventure, which can also lead to dramatic emotional outbursts. A Leo-Aquarius relationship is incredibly stimulating, since you both understand each other’s carefree and childlike ways. ";
            getch();
        }
         else if(n1==11 && n2==6)
        {
            cout<<"When Virgo and Aquarius come together for love or any kind of relationship, you both want to make the world a better place, together! These two humanitarians share the same intellectual pursuits, but you can also butt heads when you become too set in your own ways. A Virgo-Aquarius relationship is incredibly stimulating, since you both understand each other’s high-minded ways.";
            getch();
        }
         else if(n1==11 && n2==7)
        {
            cout<<"When Libra and Aquarius come together for love or any kind of relationship, it’s straight to cloud nine! These two dreamy air signs both love freedom and travel, which can lead to epic adventures together around the world. A Libra-Aquarius relationship tends to avoid conflict, which can lead to harboring resentment if you don’t voice your feelings. ";
            getch();
        }
         else if(n1==11 && n2==8)
        {
            cout<<"When Scorpio and Aquarius come together for love or any kind of relationship, it’s as though the missing link has been discovered! But these two polar opposites don’t necessarily make the most sense at a first glance. You can strike a balance if you cultivate trust and open yourselves up to each other’s very different ways. A Scorpio-Aquarius relationship is never boring, since you both understand each others’ need for soul-stirring connections. ";
            getch();
        }
         else if(n1==11 && n2==9)
        {
            cout<<"When Sagittarius and Aquarius come together for love or any kind of relationship, it’s going to be a fun and wild ride! These two party-people have a BFF dynamic, which can lead to awkwardness in the bedroom since your connection can be platonic. A Sagittarius-Aquarius relationship is liberating and expansive, since you both understand each others’ need for freedom and a higher purpose.";
            getch();
        }
         else if(n1==11 && n2==10)
        {
            cout<<"When Capricorn and Aquarius come together for love or any kind of relationship, you’re in it to win it! These two status-seeking go-getters love a good challenge, which can put a damper on spontaneity. A Capricorn-Aquarius relationship can truly have it all, since you both truly understand each other’s tireless ambition.";
            getch();
        }
         else if(n1==11 && n2==11)
        {
            cout<<"When Aquarius and Aquarius come together for love or any kind of relationship, it’s best friends for life! These two mad scientists crave freedom and adventure, which can make it difficult to settle down. An Aquarius-Aquarius relationship is incredibly stimulating, since you both understand each others’ quirky and rebellious ways.";
            getch();
        }
         else if(n1==11 && n2==12)
        {
            cout<<"When Aquarius and Pisces come together for love or any kind of relationship, it’s intellectual but also other-worldly! These two brainiacs crave cerebral connection, which can make it difficult to come back down to Earth. An Aquarius-Pisces relationship is deeply stimulating, since you both understand each others’ quirky ways.";
            getch();
        }
         else if(n1==12 && n2==1)
        {
            cout<<"When Aries and Pisces come together for love or any kind of relationship, it’s dynamic but also fiery! These two ‘head-cases’ are imaginative and cerebral, which can lead to brooding and resentment at times. An Aries-Pisces relationship is never boring, since you both understand each others’ need for intellectual stimulation.";
            getch();
        }
        else if(n1==12 && n2==2)
        {
            cout<<"When Taurus and Pisces come together for love or any kind of relationship, it’s ethereal and dreamy! These two sensual signs are poetry in motion, which can also mean that your heads get stuck up in the clouds at times. A Taurus-Pisces relationship appreciates life’s guilty pleasures, but watch for excess as you indulge together.";
            getch();
        }
        else if(n1==12 && n2==3)
        {
            cout<<"When Gemini and Pisces come together for love or any kind of relationship, it’s surreal and also moody! But these two commitment-phobes actually find common ground together, and this relationship could really withstand the test of time. A Gemini-Pisces relationship is equally harmonizing, since both of your signs represent duality.";
            getch();
        }
        else if(n1==12 && n2==4)
        {
            cout<<"When Cancer and Pisces come together for love or any kind of relationship, the emotional floodgates have opened! These two sensitive souls as passionate and empathetic, which can lead to decisions based on feelings over logic. A Cancer-Pisces relationship is fueled by fantasy, since you understand how to navigate each other’s psychic waters. ";
            getch();
        }
        else if(n1==12 && n2==5)
        {
            cout<<"When Leo and Pisces come together for love or any kind of relationship, it’s dramatic and dynamic! These two creative ingenues love romance and spirituality, which could also lead to emotional outbursts. A Leo-Pisces relationship is limitless, since you both understand each other’s desire for success and stardom.";
            getch();
        }
        else if(n1==12 && n2==6)
        {
            cout<<"When Virgo and Pisces come together for love or any kind of relationship, it’s magnetic and nurturing! These two health nuts love holistic healing, which means you both prioritize well-being. Since there is so much care-taking in a Virgo-Pisces relationship, codependency can become an issue.";
            getch();
        }
        else if(n1==12 && n2==7)
        {
            cout<<"When Libra and Pisces come together for love or any kind of relationship, you’re both instantly swept off your feet! These two hopeless romantics love flowers, chocolates and candles, which can send you both straight to cloud nine. A Libra-Pisces relationship is highly sensitive and compassionate, since you both understand each other’s empathic ways. ";
            getch();
        }
        else if(n1==12 && n2==8)
        {
            cout<<"When Scorpio and Pisces come together for love or any kind of relationship, it’s mystical, creative and exhilarating! But these two secretive signs may also live double lives, which will require a raw honesty and vulnerability if this relationship is to thrive. A Scorpio-Pisces relationship is magnetic, since you both understand each others’ need for intimate, soul-stirring connections.";
            getch();
        }
        else if(n1==12 && n2==9)
        {
            cout<<"When Sagittarius and Pisces come together for love or any kind of relationship, it’s fantasy-fueled with dream-come-true potential! These two indecisive signs can struggle to commit, but also have a tendency to depend too heavily on each other which can lead to frustration. A Sagittarius-Pisces relationship is creative, cerebral and romantic, since you both understand each other’s philosophical and high-minded ways.";
            getch();
        }
        else if(n1==12 && n2==10)
        {
            cout<<"When Capricorn and Pisces come together for love or any kind of relationship, it’s harmonious and balancing. These two polar opposites seem to complement each other perfectly, which can lead to a codependent dynamic. A Capricorn-Pisces relationship can thrive if you give each other enough space to truly be themselves with plenty of built-to-last and even marriage potential.";
            getch();
        }
        else if(n1==12 && n2==11)
        {
            cout<<"When Aquarius and Pisces come together for love or any kind of relationship, it’s intellectual but also other-worldly! These two brainiacs crave cerebral connection, which can make it difficult to come back down to Earth. An Aquarius-Pisces relationship is deeply stimulating, since you both understand each others’ quirky ways.";
            getch();
        }
        else if(n1==12 && n2==12)
        {
            cout<<"When Pisces and Pisces come together for love or any kind of relationship, it’s creative but also highly emotional! These two sensitive souls crave romance and indulgences, which can often lead to a codependent dynamic. A Pisces-Pisces relationship is deeply healing, since you both understand each others’ need for conscious connection.";
            getch();
        }
        else
        {
            cout<<"\n\nInvalid Number !!!!!!!\n\n\n";
            getch();
        }
    }




};

class Lucky
{
public:
int number;
int guess;
    luck(){

      srand(time(0));

      number = rand() % 100 + 1;

      do {

          cout << "Enter a number and See if it's lucky for you! : ";

            cin >> guess;

            if (guess < number)

                  cout << "You are growing closer to your lucky number. Keep journeying forward, traveler!" << endl;

            else if (guess > number)

                  cout << "Your are a bit far from your lucky number. Head back sailor! " << endl;

            else

                  cout << "Ha! You found your lucky number! Do what you will with it. " << endl;

      } while (guess != number);

      system("PAUSE");}
};

int main()
{
    int c,n,day_p;
    char month_p[15], choice_p;
    Primary obj1;
    Traits obj2;
    Daily obj3;
    Compatibility obj4;
    Chinese obj5;
    Lucky obj6;

    choice_p = obj1.menu();

    switch(choice_p){
    case 'a':
    case 'A':
        system("cls");
        getch();
        cout<<"\n\tInput in your choice in either lower case or upper case alphabets."<<endl;
        getch();
        cout<<"\n\tDon't start moving onto other options just yet."<<endl;
        getch();
        cout<<"\n\tFinding out your Zodiac first is of utmost importance."<<endl;
        getch();
        cout<<"\n\tSome of the information in this program might not apply to you. So, don't think too much into it."<<endl;
        getch();
        cout<<"\n\tThank You for using our program."<<endl;
        getch();
        cout<<"\n\tMade by : \n\tRaj Xavier \n\tSakif Tasawar Sonto \n\tTousif Redwan \n\tRubaiya Reza \n\tAman Ullah"<<endl;
        getch();
        system("cls");
        cout<<"\t\t\nWould you like to : \n\t 1. Go back to the main menu? \t 2. Quit? "<<endl;
        cin>>c;
        if (c == 1)
        main();
        else if (c == 2)
        exit(0);
        getch();
        break;

    case 'b':
    case 'B':
        system("cls");
        getch();
        obj1.i_name();
        obj1.i_sex();
        obj1.i_month();
        obj1.i_day();
        obj1.findzodiac();
        obj1.display1();
        getch();
        system("cls");
        cout<<"\t\t\nWould you like to : \n\t 1. Go back to the main menu? \t 2. Quit? "<<endl;
        cin>>c;
        if (c == 1)
        main();
        else if (c == 2)
        exit(0);
        getch();
        break;

    case 'c':
    case 'C':
        system("cls");
        getch();
        obj2.FindTraits();
        system("cls");
        cout<<"\t\t\nWould you like to : \n\t 1. Go back to the main menu? \t 2. Quit? "<<endl;
        cin>>c;
        if (c == 1)
        main();
        else if (c == 2)
        exit(0);
        getch();
        break;

    case 'd':
    case 'D':
        system("cls");
        obj3.D_H();
        getch();
        system("cls");
        cout<<"\t\t\nWould you like to : \n\t 1. Go back to the main menu? \t 2. Quit? "<<endl;
        cin>>c;
        if (c == 1)
        main();
        else if (c == 2)
        exit(0);
        getch();
        break;

    case 'e':
    case 'E':
        system("cls");
        n=obj4.l_menu();
        getch();
        if (n==1)
        {
            system("cls");
            obj4.love();
            getch();
        }
        else if (n==2)
        {
            system("cls");
            obj4.love2();
            getch();
        }
        system("cls");
        cout<<"\tWould you like to : \n\t 1. Go back to the main menu? \t 2. Quit? "<<endl;
        cin>>c;
        if (c == 1)
        main();
        else if (c == 2)
        exit(0);
        getch();
        break;

    case 'f':
    case 'F':
        system("cls");
        obj5.chi();
        getch();
        system("cls");
        cout<<"\tWould you like to : \n\t 1. Go back to the main menu? \t 2. Quit? "<<endl;
        cin>>c;
        if (c == 1)
        main();
        else if (c == 2)
        exit(0);
        getch();
        break;

    case 'g':
    case 'G':
        system("cls");
        obj6.luck();
        getch();
        system("cls");
        cout<<"\tWould you like to : \n\t 1. Go back to the main menu? \t 2. Quit? "<<endl;
        cin>>c;
        if (c == 1)
        main();
        else if (c == 2)
        exit(0);
        getch();
        break;

}
}









