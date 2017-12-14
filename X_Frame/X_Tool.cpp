
//------------------------------//
//   Coded by 番茄
//   @summer studio
//------------------------------//

#include "X_Tool.h"

using namespace std;


CTool::CTool()
{
    // Do Nothing
}

CTool::~CTool()
{
    // Do Nothing
}

string CTool::GenerateNextMonth(const string str_CurMonth)
{
    string str_NextMonth = string("");
    unsigned int uni_CurMonth = atoi(str_CurMonth.c_str());

    if((uni_CurMonth == 0) || (uni_CurMonth > 12))
    {
        cout << "----------------------------------------" << endl;
        cout << "!!!        Invalid Month Input       !!!" << endl;
        cout << "----------------------------------------" << endl;
        return str_NextMonth;
    }

    switch(uni_CurMonth)
    {
        case 1:
            str_NextMonth += "02";
            break;
        case 2:
            str_NextMonth += "03";
            break;
        case 3:
            str_NextMonth += "04";
            break;
        case 4:
            str_NextMonth += "05";
            break;
        case 5:
            str_NextMonth += "06";
            break;
        case 6:
            str_NextMonth += "07";
            break;
        case 7:
            str_NextMonth += "08";
            break;
        case 8:
            str_NextMonth += "09";
            break;
        case 9:
            str_NextMonth += "10";
            break;
        case 10:
            str_NextMonth += "11";
            break;
        case 11:
            str_NextMonth += "12";
            break;
        case 12:
            str_NextMonth += "01";
            break;
        default:
            break;
    }

    return str_NextMonth;
}

string CTool::GenerateNextMonth(const int int_CurMonth)
{
    string str_NextMonth = string("");

    if((int_CurMonth <= 0) || (int_CurMonth > 12))
    {
        cout << "----------------------------------------" << endl;
        cout << "!!!        Invalid Month Input       !!!" << endl;
        cout << "----------------------------------------" << endl;
        return str_NextMonth;
    }

    switch(int_CurMonth)
    {
        case 1:
            str_NextMonth += "02";
            break;
        case 2:
            str_NextMonth += "03";
            break;
        case 3:
            str_NextMonth += "04";
            break;
        case 4:
            str_NextMonth += "05";
            break;
        case 5:
            str_NextMonth += "06";
            break;
        case 6:
            str_NextMonth += "07";
            break;
        case 7:
            str_NextMonth += "08";
            break;
        case 8:
            str_NextMonth += "09";
            break;
        case 9:
            str_NextMonth += "10";
            break;
        case 10:
            str_NextMonth += "11";
            break;
        case 11:
            str_NextMonth += "12";
            break;
        case 12:
            str_NextMonth += "01";
            break;
        default:
            break;
    }

    return str_NextMonth;
}

string CTool::GeneratePreMonth(const string str_CurMonth)
{
    string str_NextMonth = string("");
    unsigned int uni_CurMonth = atoi(str_CurMonth.c_str());

    if((uni_CurMonth == 0) || (uni_CurMonth > 12))
    {
        cout << "----------------------------------------" << endl;
        cout << "!!!        Invalid Month Input       !!!" << endl;
        cout << "----------------------------------------" << endl;
        return str_NextMonth;
    }

    switch(uni_CurMonth)
    {
        case 1:
            str_NextMonth += "12";
            break;
        case 2:
            str_NextMonth += "01";
            break;
        case 3:
            str_NextMonth += "02";
            break;
        case 4:
            str_NextMonth += "03";
            break;
        case 5:
            str_NextMonth += "04";
            break;
        case 6:
            str_NextMonth += "05";
            break;
        case 7:
            str_NextMonth += "06";
            break;
        case 8:
            str_NextMonth += "07";
            break;
        case 9:
            str_NextMonth += "08";
            break;
        case 10:
            str_NextMonth += "09";
            break;
        case 11:
            str_NextMonth += "10";
            break;
        case 12:
            str_NextMonth += "11";
            break;
        default:
            break;
    }

    return str_NextMonth;
}

string CTool::GeneratePreMonth(const int int_CurMonth)
{
    string str_NextMonth = string("");

    if((int_CurMonth <= 0) || (int_CurMonth > 12))
    {
        cout << "----------------------------------------" << endl;
        cout << "!!!        Invalid Month Input       !!!" << endl;
        cout << "----------------------------------------" << endl;
        return str_NextMonth;
    }

    switch(int_CurMonth)
    {
        case 1:
            str_NextMonth += "12";
            break;
        case 2:
            str_NextMonth += "01";
            break;
        case 3:
            str_NextMonth += "02";
            break;
        case 4:
            str_NextMonth += "03";
            break;
        case 5:
            str_NextMonth += "04";
            break;
        case 6:
            str_NextMonth += "05";
            break;
        case 7:
            str_NextMonth += "06";
            break;
        case 8:
            str_NextMonth += "07";
            break;
        case 9:
            str_NextMonth += "08";
            break;
        case 10:
            str_NextMonth += "09";
            break;
        case 11:
            str_NextMonth += "10";
            break;
        case 12:
            str_NextMonth += "11";
            break;
        default:
            break;
    }

    return str_NextMonth;
}

string CTool::TransOutFormat(const int int_Value)
{
    string str_OutValue = string("");
    char *cha_OutValue = new char[9];     // tips 番茄@20171205 - 支持到百万级

    if(int_Value > 0)
    {
        sprintf(cha_OutValue, "+%d", int_Value);
        str_OutValue += cha_OutValue;
    }
    else
    {
        sprintf(cha_OutValue, "%d", int_Value);
        str_OutValue += cha_OutValue;
    }

    delete []cha_OutValue;
    return str_OutValue;
}

//------------------------------//
//   river flows in summer
//------------------------------//