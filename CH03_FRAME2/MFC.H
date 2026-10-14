#define BOOL  int
#define TRUE  1
#define FALSE 0

#include <iostream>

class CObject
{
public:
    CObject::CObject( ) {}
    CObject::~CObject( ) {}
};

class CCmdTarget : public CObject
{
public:
    CCmdTarget::CCmdTarget( ) {}
    CCmdTarget::~CCmdTarget( ) {}
};

class CWinThread : public CCmdTarget
{
public:
    CWinThread( ) {}
    ~CWinThread( ) {}

    virtual BOOL InitInstance( )
    {
        std::cout << "CWinThread::InitInstance \n";
        return TRUE;
    }
    virtual int Run( )
    {
        std::cout << "CWinThread::Run \n";
        return 1;
    }
};

class CWnd;

class CWinApp : public CWinThread
{
public:
    CWinApp* m_pCurrentWinApp;
    CWnd*    m_pMainWnd;

public:
    CWinApp( ) { m_pCurrentWinApp = this; }
    ~CWinApp( ) {}

    virtual BOOL InitApplication( )
    {
        std::cout << "CWinApp::InitApplication \n";
        return TRUE;
    }
    virtual BOOL InitInstance( )
    {
        std::cout << "CWinApp::InitInstance \n";
        return TRUE;
    }
    virtual int Run( )
    {
        std::cout << "CWinApp::Run \n";
        return CWinThread::Run( );
    }
};

class CDocument : public CCmdTarget
{
public:
    CDocument( ) {}
    ~CDocument( ) {}
};

class CWnd : public CCmdTarget
{
public:
    CWnd( ) {}
    ~CWnd( ) {}

    virtual BOOL Create( );
    BOOL         CreateEx( );
    virtual BOOL PreCreateWindow( );
};

class CFrameWnd : public CWnd
{
public:
    CFrameWnd( ) {}
    ~CFrameWnd( ) {}
    BOOL         Create( );
    virtual BOOL PreCreateWindow( );
};

class CView : public CWnd
{
public:
    CView( ) {}
    ~CView( ) {}
};

// global function

CWinApp* AfxGetApp( );
