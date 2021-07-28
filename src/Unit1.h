//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Menus.hpp>
#include <System.Win.ScktComp.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TStatusBar *StatusBar1;
	TMainMenu *MainMenu1;
	TMenuItem *H1;
	TMenuItem *A1;
	TPageControl *PageControl1;
	TTabSheet *TCP_Server_TabSheet;
	TTabSheet *Update_TabSheet;
	TMemo *Update_Memo;
	TGroupBox *GroupBox1;
	TEdit *Edit1;
	TGroupBox *GroupBox2;
	TEdit *ServerPort_Edit;
	TGroupBox *GroupBox3;
	TLabel *Label1;
	TLabel *ServerStatus_Label;
	TButton *ServerRunStop_Button;
	TGroupBox *GroupBox4;
	TListBox *ListBox1;
	TServerSocket *ServerSocket1;
	TMemo *ReceiveASCII_Memo;
	TLabel *Label3;
	TPageControl *PageControl2;
	TMemo *Debug_Memo;
	TTabSheet *TabSheet1;
	TTabSheet *TabSheet2;
	TTabSheet *TabSheet3;
	TPanel *Panel1;
	TPanel *Panel2;
	TLabel *Label2;
	TPanel *Panel3;
	TPanel *Panel4;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	TMemo *ReceiveHex_Memo;
	TTimer *Timer1;
	void __fastcall A1Click(TObject *Sender);
	void __fastcall ServerRunStop_ButtonClick(TObject *Sender);
	void __fastcall ServerSocket1Accept(TObject *Sender, TCustomWinSocket *Socket);
	void __fastcall ServerSocket1ClientConnect(TObject *Sender, TCustomWinSocket *Socket);
	void __fastcall ServerSocket1ClientDisconnect(TObject *Sender, TCustomWinSocket *Socket);
	void __fastcall ServerSocket1Listen(TObject *Sender, TCustomWinSocket *Socket);
	void __fastcall ServerSocket1ClientRead(TObject *Sender, TCustomWinSocket *Socket);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall StatusBar1Resize(TObject *Sender);
	void __fastcall ReceiveASCII_MemoDblClick(TObject *Sender);
	void __fastcall ReceiveHex_MemoDblClick(TObject *Sender);
	void __fastcall Debug_MemoDblClick(TObject *Sender);





private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
