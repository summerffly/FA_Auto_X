
//------------------------------//
//   Coded by 番茄
//   @summer studio
//------------------------------//

#include "FileOPer.h"

#include "../X_Frame/RegExLib.h"
#include "../X_Frame/DefLib.h"

using namespace std;

extern string pattern_eof;
extern regex RE_eof;


CFileOPer::CFileOPer()
{
    //m_str_FilePath
    //m_str_FileName
    m_bol_ModFlag = false;
    m_int_LineNum = 0;
    m_vec_Line.push_back("LINE 0 BY SUMMER");
}

CFileOPer::CFileOPer(const char *cha_FileName)
{
    m_bol_ModFlag = false;
    m_int_LineNum = 0;
    m_vec_Line.push_back("LINE 0 BY SUMMER");

    FileReader(cha_FileName);
}

CFileOPer::~CFileOPer()
{
    // Do Nothing
}

int CFileOPer::GetLineNum()
{
    return m_int_LineNum;
}

string CFileOPer::GetLine(const int int_LineIndex)
{
    return m_vec_Line.at(int_LineIndex);
}

bool CFileOPer::GetModFlag()
{
    return m_bol_ModFlag;
}

int CFileOPer::InsertLine(const int int_LineIndex, const string str_LineContent)
{
    vector<string>::iterator iter;
    iter = m_vec_Line.begin();
    iter += int_LineIndex;

    m_vec_Line.insert(iter, str_LineContent);
    m_int_LineNum++;
    m_bol_ModFlag = true;

    return 0;
}

int CFileOPer::ModifyLine(const int int_LineIndex, const string str_LineContent)
{
    vector<string>::iterator iter;
    iter = m_vec_Line.begin();
    iter += int_LineIndex;

    m_vec_Line.erase(iter);
    m_vec_Line.insert(iter, str_LineContent);
    m_bol_ModFlag = true;

    return 0;
}

int CFileOPer::DeleteLine(const int int_LineIndex)
{
    vector<string>::iterator iter;
    iter = m_vec_Line.begin();
    iter += int_LineIndex;

    m_vec_Line.erase(iter);
    m_int_LineNum--;
    m_bol_ModFlag = true;

    return 0;
}

int CFileOPer::FileReader(const char *cha_FileName)
{
    ifstream ifile(cha_FileName);

    if(ifile.is_open() == 0)
    {
        cout << "----------------------------------------" << endl;
        cout << "!!!          Read File Error         !!!" << endl;
        cout << "----------------------------------------" << endl;
        return -1;
    }

    char cha_buffer[MAX_LINE_CHAR];

    while(!ifile.eof())
    {
        ifile.getline(cha_buffer, MAX_LINE_CHAR);
        m_vec_Line.push_back(cha_buffer);
        m_int_LineNum++;
    }
    
    ifile.close();

    return 0;
}

// 写回.md文件原始路径   // 需要先解析m_str_FilePath+m_str_FileName
#if 0
int CFileOPer::FileWriter()
{
    ofstream ofile(m_str_FilePath.c_str());
    
    if(!ofile.is_open())
    {
        cout << "----------------------------------------" << endl;
        cout << "!!!         Write File Error         !!!" << endl;
        cout << "----------------------------------------" << endl;
        return -1;
    }
        
    for(int i = 1; i <= m_int_LineNum; i++)
    {
        ofile << m_vec_Line.at(i).c_str() << endl;
            
        if( regex_match(m_vec_Line.at(i), RE_eof) )
        {
            break;
        }
    }

    ofile.close();
        
    return 0;
}
#endif

// 写入.md文件指定路径
int CFileOPer::FileWriter(const char *cha_FileName)
{
    ofstream ofile(cha_FileName);
    
    if(!ofile.is_open())
    {
        cout << "----------------------------------------" << endl;
        cout << "!!!         Write File Error         !!!" << endl;
        cout << "----------------------------------------" << endl;
        return -1;
    }
        
    for(int i = 1; i <= m_int_LineNum; i++)
    {
        ofile << m_vec_Line.at(i).c_str() << endl;
            
        if( regex_match(m_vec_Line.at(i), RE_eof) )
        {
            break;
        }
    }

    ofile.close();
        
    return 0;
}

//------------------------------//
//   river flows in summer
//------------------------------//