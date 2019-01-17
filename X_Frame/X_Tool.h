
//------------------------------//
//   Coded by 番茄
//   @summer studio
//------------------------------//

#pragma once

#include <unistd.h>
#include <time.h>
#include <sys/time.h>
#include <string>
#include <iostream>
#include <regex>

using namespace std;


class CTool
{
public:
    CTool();
    ~CTool();

    static int CheckFilesExist(vector<string> vec_str_FilePath);

    /****************************************/
    //   Month 操作区
    /****************************************/
    static bool ParseMonth(const string str_Input);
    static string GenerateMonth(const int int_Month);
    static string GenerateNextMonth(const string str_CurMonth);
    static string GeneratePreMonth(const string str_CurMonth);
    static unsigned int CountMonth(const string str_OriMonth, const string str_CurMonth);
    
    static string TransOutFormat(const int int_Value);
    static void MassageOutFotmat(const string str_Message, const char cha_Flag);
    static string TimeOut();
    
    static bool ParseNumber(const string str_Input, int& int_RetNum);
    static bool ParseContainKey(const string str_Main, const string str_Key);

public:
    static void TagTimeBait();
    static double ShowTimeGap();

public:
    static string ms_str_OriginMonth;
    static string ms_str_CurrentMonth;

private:
    static struct timeval m_tvl_begin;
    static struct timeval m_tvl_end;
};


//------------------------------//
//   river flows in summer
//------------------------------//
