#include <iostream>
#include "mfc.h"

class CMyWinApp : public CWinApp
{
public:
    CMyWinApp( ) {}
    ~CMyWinApp( ) {}

    virtual BOOL InitInstance( );
};

class CMyFrameWnd : public CFrameWnd
{
    DECLARE_DYNCREATE( CMyFrameWnd )
public:
    CMyFrameWnd( );
    ~CMyFrameWnd( ) {}
    void SayHello( ) { std::cout << "Hello CMyFrameWnd \n"; }
};

class CMyDoc : public CDocument
{
    DECLARE_DYNCREATE( CMyDoc )
public:
    CMyDoc( ) { std::cout << "CMyDoc Constructor \n"; }
    ~CMyDoc( ) {}
    void SayHello( ) { std::cout << "Hello CMyDoc \n"; }
};

class CMyView : public CView
{
    DECLARE_DYNCREATE( CMyView )
public:
    CMyView( ) { std::cout << "CMyView Constructor \n"; }
    ~CMyView( ) {}
    void SayHello( ) { std::cout << "Hello CMyView \n"; }
};

// global function
void AfxPrintAllClasses( );
