object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'Francisco Manzanilla ITS 2'#176' "A"'
  ClientHeight = 417
  ClientWidth = 873
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnShow = load
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 8
    Width = 44
    Height = 32
    Caption = 'Pilas'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'Segoe UI Light'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 284
    Top = 8
    Width = 54
    Height = 32
    Caption = 'Colas'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'Segoe UI Light'
    Font.Style = []
    ParentFont = False
  end
  object Shape1: TShape
    Left = 276
    Top = 5
    Width = 5
    Height = 409
    Margins.Left = 0
    Margins.Top = 0
    Margins.Right = 0
    Margins.Bottom = 0
    Brush.Color = clHotLight
  end
  object Shape2: TShape
    Left = 552
    Top = 3
    Width = 5
    Height = 409
    Margins.Left = 0
    Margins.Top = 0
    Margins.Right = 0
    Margins.Bottom = 0
    Brush.Color = clHotLight
  end
  object Label3: TLabel
    Left = 560
    Top = 8
    Width = 130
    Height = 32
    Caption = 'Arbol Binario'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'Segoe UI Light'
    Font.Style = []
    ParentFont = False
  end
  object Label4: TLabel
    Left = 665
    Top = 46
    Width = 6
    Height = 21
    Caption = '1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI Light'
    Font.Style = []
    ParentFont = False
  end
  object Label5: TLabel
    Left = 743
    Top = 19
    Width = 122
    Height = 21
    Caption = 'Numero de nodos'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI Light'
    Font.Style = []
    ParentFont = False
  end
  object Label6: TLabel
    Left = 560
    Top = 46
    Width = 99
    Height = 21
    Caption = 'Nodo numero:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI Light'
    Font.Style = []
    ParentFont = False
  end
  object Memo1: TMemo
    Left = 8
    Top = 72
    Width = 265
    Height = 337
    Lines.Strings = (
      'Memo1')
    TabOrder = 0
  end
  object Edit1: TEdit
    Left = 58
    Top = 19
    Width = 121
    Height = 21
    TabOrder = 1
    TextHint = 'Solo Numeros'
    OnKeyPress = ok
  end
  object Button1: TButton
    Left = 182
    Top = 17
    Width = 91
    Height = 25
    Caption = 'A'#241'adir a la Pila'
    TabOrder = 2
    OnClick = Button1Click
  end
  object Button4: TButton
    Left = 8
    Top = 41
    Width = 75
    Height = 25
    Caption = 'Eliminar pila'
    TabOrder = 3
    OnClick = Button4Click
  end
  object Button2: TButton
    Left = 89
    Top = 41
    Width = 75
    Height = 25
    Caption = 'Destruir pila'
    TabOrder = 4
    OnClick = Button2Click
  end
  object Memo2: TMemo
    Left = 284
    Top = 72
    Width = 265
    Height = 337
    Lines.Strings = (
      'Memo1')
    TabOrder = 5
  end
  object Button3: TButton
    Left = 284
    Top = 41
    Width = 85
    Height = 25
    Caption = 'A'#241'adir a la cola'
    TabOrder = 6
    OnClick = Button3Click
  end
  object Button5: TButton
    Left = 375
    Top = 41
    Width = 92
    Height = 25
    Caption = 'Eliminar de la cola'
    TabOrder = 7
    OnClick = Button5Click
  end
  object Button6: TButton
    Left = 473
    Top = 41
    Width = 75
    Height = 25
    Caption = 'Destruir cola'
    TabOrder = 8
    OnClick = Button6Click
  end
  object Edit2: TEdit
    Left = 346
    Top = 19
    Width = 121
    Height = 21
    TabOrder = 9
    TextHint = 'Solo numeros'
  end
  object Edit3: TEdit
    Left = 696
    Top = 19
    Width = 47
    Height = 21
    TabOrder = 10
    TextHint = 'Solo Numeros'
  end
  object Button7: TButton
    Left = 560
    Top = 73
    Width = 75
    Height = 25
    Caption = 'Ver Arbol'
    TabOrder = 11
    OnClick = Button7Click
  end
  object Button8: TButton
    Left = 641
    Top = 73
    Width = 75
    Height = 25
    Caption = 'Button8'
    TabOrder = 12
    OnClick = Button8Click
  end
  object Memo3: TMemo
    Left = 560
    Top = 104
    Width = 305
    Height = 217
    Lines.Strings = (
      'Memo3')
    TabOrder = 13
  end
  object Edit4: TEdit
    Left = 698
    Top = 46
    Width = 39
    Height = 21
    TabOrder = 14
  end
  object Button9: TButton
    Left = 743
    Top = 41
    Width = 74
    Height = 27
    Caption = 'A'#241'adir nodo'
    TabOrder = 15
    OnClick = Button9Click
  end
  object Memo4: TMemo
    Left = 560
    Top = 327
    Width = 305
    Height = 82
    Lines.Strings = (
      'Memo4')
    TabOrder = 16
  end
end
