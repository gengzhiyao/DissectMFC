
#include <iostream>
#include "mfc.h"
using namespace std;

class CMyWinApp : public CWinApp
{
public:
  CMyWinApp::CMyWinApp()   {
                              std::cout << "CMyWinApp Constructor \n";
                           }
  CMyWinApp::~CMyWinApp()  {
                              std::cout << "CMyWinApp Destructor \n";
                           }
};

class CMyFrameWnd : public CFrameWnd
{
public:
  CMyFrameWnd()   {
                     std::cout << "CMyFrameWnd Constructor \n";
                  }
  ~CMyFrameWnd()  {
                     std::cout << "CMyFrameWnd Destructor \n";
                  }
};
