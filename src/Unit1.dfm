object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'TCP Server ReceiveText Tool'
  ClientHeight = 562
  ClientWidth = 784
  Color = clWindow
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  Position = poScreenCenter
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object StatusBar1: TStatusBar
    Left = 0
    Top = 543
    Width = 784
    Height = 19
    Panels = <
      item
        Text = #21021#22987#21270
        Width = 150
      end
      item
        Width = 50
      end>
    OnResize = StatusBar1Resize
  end
  object PageControl1: TPageControl
    Left = 0
    Top = 0
    Width = 784
    Height = 543
    ActivePage = TCP_Server_TabSheet
    Align = alClient
    TabOrder = 1
    object TCP_Server_TabSheet: TTabSheet
      Caption = 'TCP Server'
      object Label3: TLabel
        Left = 0
        Top = 502
        Width = 776
        Height = 13
        Align = alBottom
        ExplicitWidth = 3
      end
      object Panel1: TPanel
        Left = 0
        Top = 0
        Width = 776
        Height = 145
        Align = alTop
        BevelOuter = bvNone
        TabOrder = 0
        object Panel3: TPanel
          Left = 0
          Top = 0
          Width = 313
          Height = 145
          Align = alLeft
          BevelOuter = bvNone
          TabOrder = 0
          object GroupBox1: TGroupBox
            Left = 11
            Top = 3
            Width = 154
            Height = 62
            Caption = 'Server IP Address:'
            TabOrder = 0
            object Edit1: TEdit
              Left = 16
              Top = 24
              Width = 121
              Height = 21
              Enabled = False
              ReadOnly = True
              TabOrder = 0
              Text = '127.0.0.1'
            end
          end
          object GroupBox2: TGroupBox
            Left = 11
            Top = 71
            Width = 154
            Height = 62
            Caption = 'Server Port:'
            TabOrder = 1
            object ServerPort_Edit: TEdit
              Left = 16
              Top = 24
              Width = 121
              Height = 21
              NumbersOnly = True
              TabOrder = 0
              Text = '18000'
            end
          end
          object GroupBox3: TGroupBox
            Left = 179
            Top = 3
            Width = 126
            Height = 62
            Caption = 'Server Status:'
            TabOrder = 2
            object Label1: TLabel
              Left = 16
              Top = 26
              Width = 64
              Height = 13
              Caption = #20282#26381#22120#29376#24907':'
            end
            object ServerStatus_Label: TLabel
              Left = 86
              Top = 26
              Width = 24
              Height = 13
              Caption = #20572#27490
            end
          end
          object ServerRunStop_Button: TButton
            Left = 195
            Top = 87
            Width = 94
            Height = 37
            Caption = #25353#25105#21855#21205
            TabOrder = 3
            OnClick = ServerRunStop_ButtonClick
          end
        end
        object Panel4: TPanel
          Left = 313
          Top = 0
          Width = 463
          Height = 145
          Align = alClient
          BevelOuter = bvNone
          TabOrder = 1
          object GroupBox4: TGroupBox
            Left = 0
            Top = 0
            Width = 463
            Height = 145
            Align = alClient
            Caption = 'Clients(0):'
            TabOrder = 0
            object Label4: TLabel
              Left = 2
              Top = 28
              Width = 12
              Height = 102
              Align = alLeft
              Caption = '    '
              ExplicitHeight = 13
            end
            object Label5: TLabel
              Left = 449
              Top = 28
              Width = 12
              Height = 102
              Align = alRight
              Caption = '    '
              ExplicitHeight = 13
            end
            object Label6: TLabel
              Left = 2
              Top = 15
              Width = 459
              Height = 13
              Align = alTop
              Caption = '    '
              ExplicitWidth = 12
            end
            object Label7: TLabel
              Left = 2
              Top = 130
              Width = 459
              Height = 13
              Align = alBottom
              Caption = '    '
              ExplicitLeft = 3
              ExplicitTop = 126
            end
            object ListBox1: TListBox
              Left = 14
              Top = 28
              Width = 435
              Height = 102
              Align = alClient
              ItemHeight = 13
              Items.Strings = (
                '(1) 0.0.0.0:0000'
                '(2)'
                '(3)'
                '(4)')
              TabOrder = 0
            end
          end
        end
      end
      object Panel2: TPanel
        Left = 0
        Top = 145
        Width = 776
        Height = 357
        Align = alClient
        BevelOuter = bvNone
        Caption = 'Panel2'
        TabOrder = 1
        object Label2: TLabel
          Left = 0
          Top = 0
          Width = 776
          Height = 13
          Align = alTop
          ExplicitWidth = 3
        end
        object PageControl2: TPageControl
          Left = 0
          Top = 13
          Width = 776
          Height = 344
          ActivePage = TabSheet1
          Align = alClient
          TabOrder = 0
          object TabSheet1: TTabSheet
            Caption = #25509#25910#36039#26009'(ASCII)'
            object ReceiveASCII_Memo: TMemo
              Left = 0
              Top = 0
              Width = 768
              Height = 316
              Align = alClient
              ReadOnly = True
              ScrollBars = ssBoth
              TabOrder = 0
              OnDblClick = ReceiveASCII_MemoDblClick
            end
          end
          object TabSheet2: TTabSheet
            Caption = #25509#25910#36039#26009'(Hex)'
            ImageIndex = 1
            object ReceiveHex_Memo: TMemo
              Left = 0
              Top = 0
              Width = 768
              Height = 316
              Align = alClient
              ReadOnly = True
              ScrollBars = ssBoth
              TabOrder = 0
              OnDblClick = ReceiveHex_MemoDblClick
            end
          end
          object TabSheet3: TTabSheet
            Caption = 'Debug'#35338#24687
            ImageIndex = 2
            object Debug_Memo: TMemo
              Left = 0
              Top = 0
              Width = 768
              Height = 316
              Align = alClient
              ReadOnly = True
              ScrollBars = ssBoth
              TabOrder = 0
              OnDblClick = Debug_MemoDblClick
            end
          end
        end
      end
    end
    object Update_TabSheet: TTabSheet
      Caption = #26356#26032#32000#37636
      ImageIndex = 1
      object Update_Memo: TMemo
        Left = 0
        Top = 0
        Width = 776
        Height = 515
        Align = alClient
        Lines.Strings = (
          'v20210728a:'
          #21021#29256#12290)
        TabOrder = 0
      end
    end
  end
  object MainMenu1: TMainMenu
    Left = 24
    Top = 488
    object H1: TMenuItem
      Caption = #35498#26126'(&H)'
      object A1: TMenuItem
        Caption = #38364#26044#25105'(&A)'
        OnClick = A1Click
      end
    end
  end
  object ServerSocket1: TServerSocket
    Active = False
    Port = 0
    ServerType = stNonBlocking
    OnListen = ServerSocket1Listen
    OnAccept = ServerSocket1Accept
    OnClientConnect = ServerSocket1ClientConnect
    OnClientDisconnect = ServerSocket1ClientDisconnect
    OnClientRead = ServerSocket1ClientRead
    Left = 68
    Top = 488
  end
  object Timer1: TTimer
    OnTimer = Timer1Timer
    Left = 113
    Top = 487
  end
end
