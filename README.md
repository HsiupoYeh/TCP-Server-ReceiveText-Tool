# TCP-Server-ReceiveText-Tool
TCP伺服器端的接收測試小工具

## 開發環境:  
Windows 7 SP1 64bit 繁體中文版  
Embarcadero® C++Builder 10.2 Version 25.0.28979.1978 

## 運行需求:  
Windosw作業系統。  
可運行32位元應用程式。  
允許程式通過防火牆。  

## 注意事項:  
本專案有使用Socket元件。  
  
「C++Builder」預設安裝時並沒有安裝Socket元件，但所需的安裝檔案已打包放在對應位置下(依照版本不同，路徑不同)。  
這個元件僅支援Win32與Win64平台。  
可參考官方介紹安裝方法:  
http://docwiki.embarcadero.com/RADStudio/XE4/en/Installing_Socket_Components  
或依照以下安裝方法(以目前開發環境為例):  
1. 在主選單中按下「Component」>「Install Packages」。  
2. 按下「Add」按鈕，進入路徑「C:\Program Files (x86)\Embarcadero\Studio\19.0\bin」，選擇「dclsockets250.bpl」。注意，不同版本其版本號不會是「19.0」，對應的bpl版本號也不一定是「250」，請依照實際狀況選擇。  
3. 再按下「OK」  
4. Socket元件將出現在元件清單中，項目名稱為「Internet」。  
  
注意，這個元件已經被官方建議放棄使用了，改推薦使用「Indy」元件。可是Indy元件的Client僅提供阻塞式連線，要自己做處理有時候很麻煩，因此快速開發上使用Socket元件還是很好的選擇。  
