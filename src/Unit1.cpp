//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
AnsiString version_str="v20210728a";
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::A1Click(TObject *Sender)
{
	AnsiString temp_str="作者: HsiuPoYeh.\n程式版本: "+version_str;
	Application->MessageBox(UnicodeString(temp_str).c_str(),L"關於我",64);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ServerRunStop_ButtonClick(TObject *Sender)
{
	if (ServerSocket1->Active==false)
	{
		// 設定Server Port
		ServerSocket1->Port=ServerPort_Edit->Text.ToInt();
		// 提示訊息
		Debug_Memo->Lines->Add("啟動Server...");
		// 啟動Server
		ServerSocket1->Active=true;
		// 調整按鈕文字
		ServerRunStop_Button->Caption="按我停止";
		// 調整狀態文字
		ServerStatus_Label->Caption="運行中";
		// 調整狀態列資訊
		StatusBar1->SimpleText="Server運行中...";
	}
	else
	{
		// 停止Server
		ServerSocket1->Active=false;
		// 提示訊息
		Debug_Memo->Lines->Add("關閉Server...");
        // 調整按鈕文字
		ServerRunStop_Button->Caption="按我啟動";
		// 調整狀態文字
		ServerStatus_Label->Caption="停止";
        // 調整狀態列資訊
		StatusBar1->SimpleText="Server停止...";
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ServerSocket1Accept(TObject *Sender, TCustomWinSocket *Socket)

{
	Debug_Memo->Lines->Add("==============================");
    Debug_Memo->Lines->Add(FormatDateTime("yyyy-mm-dd HH:MM:SS" ,Now()));
	Debug_Memo->Lines->Add("ServerSocket1Accept:");
	Debug_Memo->Lines->Add("Server HostName:"+Socket->LocalHost);
	Debug_Memo->Lines->Add("Server IP Address:"+Socket->LocalAddress);
	Debug_Memo->Lines->Add("Server Port:"+String(Socket->LocalPort));
	Debug_Memo->Lines->Add("Client HostName:"+Socket->RemoteHost);
	Debug_Memo->Lines->Add("Client IP Address:"+Socket->RemoteAddress);
	Debug_Memo->Lines->Add("Client Port:"+String(Socket->RemotePort));
	Debug_Memo->Lines->Add("--");
	Debug_Memo->Lines->Add("ActiveConnections:"+String(ServerSocket1->Socket->ActiveConnections));
	Debug_Memo->Lines->Add("==============================");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ServerSocket1ClientConnect(TObject *Sender, TCustomWinSocket *Socket)

{
	Debug_Memo->Lines->Add("==============================");
	Debug_Memo->Lines->Add(FormatDateTime("yyyy-mm-dd HH:MM:SS" ,Now()));
	Debug_Memo->Lines->Add("ServerSocket1ClientConnect:");
	Debug_Memo->Lines->Add("Server HostName:"+Socket->LocalHost);
	Debug_Memo->Lines->Add("Server IP Address:"+Socket->LocalAddress);
	Debug_Memo->Lines->Add("Server Port:"+String(Socket->LocalPort));
	Debug_Memo->Lines->Add("Client HostName:"+Socket->RemoteHost);
	Debug_Memo->Lines->Add("Client IP Address:"+Socket->RemoteAddress);
	Debug_Memo->Lines->Add("Client Port:"+String(Socket->RemotePort));
	Debug_Memo->Lines->Add("--");
	//--
	ListBox1->Clear();
	GroupBox4->Caption="Clients("+String(ServerSocket1->Socket->ActiveConnections)+"):";
	Debug_Memo->Lines->Add("ActiveConnections:"+String(ServerSocket1->Socket->ActiveConnections));
	for (int i = 0; i < ServerSocket1->Socket->ActiveConnections; i++)
	{
		ListBox1->Items->Add("("+String(i)+") "+ServerSocket1->Socket->Connections[i]->RemoteAddress+":"+ServerSocket1->Socket->Connections[i]->RemotePort);
		Debug_Memo->Lines->Add("ActiveConnections:"+ServerSocket1->Socket->Connections[i]->RemoteAddress+":"+ServerSocket1->Socket->Connections[i]->RemotePort);
	}
	Debug_Memo->Lines->Add("==============================");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ServerSocket1ClientDisconnect(TObject *Sender, TCustomWinSocket *Socket)

{
	Debug_Memo->Lines->Add("==============================");
	Debug_Memo->Lines->Add(FormatDateTime("yyyy-mm-dd HH:MM:SS" ,Now()));
	Debug_Memo->Lines->Add("ServerSocket1ClientDisconnect:");
	Debug_Memo->Lines->Add("Server HostName:"+Socket->LocalHost);
	Debug_Memo->Lines->Add("Server IP Address:"+Socket->LocalAddress);
	Debug_Memo->Lines->Add("Server Port:"+String(Socket->LocalPort));
	Debug_Memo->Lines->Add("Client HostName:"+Socket->RemoteHost);
	Debug_Memo->Lines->Add("Client IP Address:"+Socket->RemoteAddress);
	Debug_Memo->Lines->Add("Client Port:"+String(Socket->RemotePort));
	Debug_Memo->Lines->Add("--");
	//--
	ListBox1->Clear();
	GroupBox4->Caption="Clients("+String(ServerSocket1->Socket->ActiveConnections)+"):";
	Debug_Memo->Lines->Add("ActiveConnections:"+String(ServerSocket1->Socket->ActiveConnections));
	for (int i = 0; i < ServerSocket1->Socket->ActiveConnections; i++)
	{
		ListBox1->Items->Add("("+String(i)+") "+ServerSocket1->Socket->Connections[i]->RemoteAddress+":"+ServerSocket1->Socket->Connections[i]->RemotePort);
		Debug_Memo->Lines->Add("ActiveConnections:"+ServerSocket1->Socket->Connections[i]->RemoteAddress+":"+ServerSocket1->Socket->Connections[i]->RemotePort);
	}
	Debug_Memo->Lines->Add("==============================");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ServerSocket1Listen(TObject *Sender, TCustomWinSocket *Socket)

{
	Debug_Memo->Lines->Add("==============================");
	Debug_Memo->Lines->Add(FormatDateTime("yyyy-mm-dd HH:MM:SS" ,Now()));
	Debug_Memo->Lines->Add("ServerSocket1Listen:");
	Debug_Memo->Lines->Add("Server HostName:"+Socket->LocalHost);
	Debug_Memo->Lines->Add("Server IP Address:"+Socket->LocalAddress);
	Debug_Memo->Lines->Add("Server Port:"+String(Socket->LocalPort));
	Debug_Memo->Lines->Add("Client HostName:"+Socket->RemoteHost);
	Debug_Memo->Lines->Add("Client IP Address:"+Socket->RemoteAddress);
	Debug_Memo->Lines->Add("Client Port:"+String(Socket->RemotePort));
	Debug_Memo->Lines->Add("--");
	Debug_Memo->Lines->Add("ActiveConnections:"+String(ServerSocket1->Socket->ActiveConnections));
	Debug_Memo->Lines->Add("==============================");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ServerSocket1ClientRead(TObject *Sender, TCustomWinSocket *Socket)

{
	AnsiString temp_AnsiString_buffer;
	AnsiString temp_str="";
	//------------------------------------------------------
	// Debug 訊息
	Debug_Memo->Lines->Add("==============================");
	Debug_Memo->Lines->Add(FormatDateTime("yyyy-mm-dd HH:MM:SS" ,Now()));
	Debug_Memo->Lines->Add("ServerSocket1ClientRead:");
	Debug_Memo->Lines->Add("Server HostName:"+Socket->LocalHost);
	Debug_Memo->Lines->Add("Server IP Address:"+Socket->LocalAddress);
	Debug_Memo->Lines->Add("Server Port:"+String(Socket->LocalPort));
	Debug_Memo->Lines->Add("Client HostName:"+Socket->RemoteHost);
	Debug_Memo->Lines->Add("Client IP Address:"+Socket->RemoteAddress);
	Debug_Memo->Lines->Add("Client Port:"+String(Socket->RemotePort));
	Debug_Memo->Lines->Add("ReceiveLength(Client to Server):"+String(Socket->ReceiveLength()));
    // 接收資料
	temp_AnsiString_buffer=Socket->ReceiveText();
	Debug_Memo->Text=Debug_Memo->Text+"ReceiveText:"+temp_AnsiString_buffer;//用這個不會自己換行，用另一個會
	//Debug_Memo->Lines->Add("ReceiveText:"+Socket->ReceiveText());//用這個會自己換行，用另一個不會
	Debug_Memo->Lines->Add("--");
	Debug_Memo->Lines->Add("ReceiveText Length(Check Size in Buffer):"+String(temp_AnsiString_buffer.Length()));
	Debug_Memo->Lines->Add("--");
	Debug_Memo->Lines->Add("ActiveConnections:"+String(ServerSocket1->Socket->ActiveConnections));
	Debug_Memo->Lines->Add("==============================");
	//------------------------------------------------------
	// 展示接收資料
	ReceiveASCII_Memo->Lines->Add(FormatDateTime("yyyy-mm-dd HH:MM:SS" ,Now())+"  Client["+Socket->RemoteAddress+"] ASCII("+String(temp_AnsiString_buffer.Length())+"):");
	ReceiveASCII_Memo->Text=ReceiveASCII_Memo->Text+temp_AnsiString_buffer;
	//--
	ReceiveHex_Memo->Lines->Add(FormatDateTime("yyyy-mm-dd HH:MM:SS" ,Now())+"  Client["+Socket->RemoteAddress+"] Hex("+String(temp_AnsiString_buffer.Length())+"):");
	for (int i = 1; i <= temp_AnsiString_buffer.Length(); i++)
	{
		if (i%16==0)
		{
			temp_str=temp_str+"["+String(i)+"]:0x"+IntToHex(temp_AnsiString_buffer[i],2)+"("+StrToInt("$"+IntToHex(temp_AnsiString_buffer[i],2))+"){\""+temp_AnsiString_buffer[i]+"\"},";
			ReceiveHex_Memo->Lines->Add(temp_str);
			temp_str="";
		}
		else
		{
			temp_str=temp_str+"["+String(i)+"]:0x"+IntToHex(temp_AnsiString_buffer[i],2)+"("+StrToInt("$"+IntToHex(temp_AnsiString_buffer[i],2))+"){\""+temp_AnsiString_buffer[i]+"\"},";
		}
	}
	ReceiveHex_Memo->Lines->Add(temp_str.SubString(1,temp_str.Length()-1));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
	AnsiString temp_str=FormatDateTime("yyyy-mm-dd HH:MM:SS" ,Now());
	//Debug_Memo->Lines->Add("==============================");
	//Debug_Memo->Lines->Add(temp_str);
	//Debug_Memo->Lines->Add("TTimer1:");
	ListBox1->Clear();
	GroupBox4->Caption="Clients("+String(ServerSocket1->Socket->ActiveConnections)+"):";
	//Debug_Memo->Lines->Add("ActiveConnections:"+String(ServerSocket1->Socket->ActiveConnections));
	for (int i = 0; i < ServerSocket1->Socket->ActiveConnections; i++)
	{
		ListBox1->Items->Add("("+String(i)+") "+ServerSocket1->Socket->Connections[i]->RemoteAddress+":"+ServerSocket1->Socket->Connections[i]->RemotePort);
		//Debug_Memo->Lines->Add("ActiveConnections:"+ServerSocket1->Socket->Connections[i]->RemoteAddress+":"+ServerSocket1->Socket->Connections[i]->RemotePort);
	}
	//Debug_Memo->Lines->Add("==============================");
	StatusBar1->Panels->Items[1]->Text=temp_str;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
	Form1->Caption="TCP Server ReceiveText Tool "+version_str;
	ListBox1->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::StatusBar1Resize(TObject *Sender)
{
     int temp_remain_width=StatusBar1->Width;
	 //--
	 // 先配置最後一格，希望是150
	 StatusBar1->Panels->Items[1]->Width=150;
	 // 計算剩餘空間
	 temp_remain_width=temp_remain_width-StatusBar1->Panels->Items[1]->Width;
	 //--
	 // 最前方一格享受最大空間
	 StatusBar1->Panels->Items[0]->Width=temp_remain_width;
	 //--
}
//---------------------------------------------------------------------------


void __fastcall TForm1::ReceiveASCII_MemoDblClick(TObject *Sender)
{
	int int_MessageBox_result=Application->MessageBox(L"是否要清除內容?",L"問題",MB_YESNO|MB_ICONQUESTION);
	if (int_MessageBox_result==IDYES)
	{
		ReceiveASCII_Memo->Clear();
		Application->MessageBox(L"清除內容完成!",L"提示",MB_ICONINFORMATION );
	}
	else if (int_MessageBox_result==IDNO)
	{
		Application->MessageBox(L"使用者放棄!",L"提示",MB_ICONERROR  );
	}
}
//---------------------------------------------------------------------------



void __fastcall TForm1::ReceiveHex_MemoDblClick(TObject *Sender)
{
    int int_MessageBox_result=Application->MessageBox(L"是否要清除內容?",L"問題",MB_YESNO|MB_ICONQUESTION);
	if (int_MessageBox_result==IDYES)
	{
		ReceiveHex_Memo->Clear();
		Application->MessageBox(L"清除內容完成!",L"提示",MB_ICONINFORMATION );
	}
	else if (int_MessageBox_result==IDNO)
	{
		Application->MessageBox(L"使用者放棄!",L"提示",MB_ICONERROR  );
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Debug_MemoDblClick(TObject *Sender)
{
	int int_MessageBox_result=Application->MessageBox(L"是否要清除內容?",L"問題",MB_YESNO|MB_ICONQUESTION);
	if (int_MessageBox_result==IDYES)
	{
		Debug_Memo->Clear();
		Application->MessageBox(L"清除內容完成!",L"提示",MB_ICONINFORMATION );
	}
	else if (int_MessageBox_result==IDNO)
	{
		Application->MessageBox(L"使用者放棄!",L"提示",MB_ICONERROR  );
	}
}
//---------------------------------------------------------------------------

