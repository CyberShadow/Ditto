#if !defined(AFX_ToolTipEx_H__5796127D_8817_493F_ACA7_8741A6759DD3__INCLUDED_)
#define AFX_ToolTipEx_H__5796127D_8817_493F_ACA7_8741A6759DD3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ToolTipEx.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CToolTipEx window

class CToolTipEx : public CWnd
{
// Construction
public:
	CToolTipEx();

// Attributes
public:

// Operations
public:
	BOOL OnMsg(MSG* pMsg);
	BOOL Create(CWnd* pParentWnd);
	BOOL Show(CPoint point);
	BOOL Hide();
	void SetToolTipText(CString csText)	{ m_csText = csText; Invalidate(); }
	void SetBitmap(CBitmap *pBitmap);

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CToolTipEx)
	protected:
	virtual void PostNcDestroy();
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CToolTipEx();
	
protected:
	DWORD m_dwTextStyle;
	CRect m_rectMargin;
	CString m_csText;
	CFont m_Font;
	CBitmap *m_pBitmap;

protected:
	CString GetFieldFromString(CString ref, int nIndex, TCHAR ch);
	CRect GetBoundsRect();
	BOOL SetLogFont(LPLOGFONT lpLogFont, BOOL bRedraw /*=TRUE*/);
	LPLOGFONT GetSystemToolTipFont();

	// Generated message map functions
protected:
	//{{AFX_MSG(CToolTipEx)
	afx_msg void OnPaint();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ToolTipEx_H__5796127D_8817_493F_ACA7_8741A6759DD3__INCLUDED_)
