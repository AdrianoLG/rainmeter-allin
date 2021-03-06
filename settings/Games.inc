[MeterSeparationLine4]
Meter=Image
X=0
Y=1R
W=364
H=1
SolidColor=255,255,255,50
Container=MeterContainerGames
Group=Games

[MeterGamesAreEnabled]
Meter=String
Text=Bloque de juegos:
MeterStyle=styleLabel
X=2
Y=10R
AntiAlias=1
Container=MeterContainerGames
Group=Games

[MeterGamesEnable]
Meter=String
Text=Activado
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
LeftMouseDownAction=[!WriteKeyValue Variables gameshidden "0" "#@#Settings.inc"][!WriteKeyValue Variables metershortcut26icon "812" "#@#Settings.inc"][!WriteKeyValue Variables meterfloating3 "834" "#@#Settings.inc"][!WriteKeyValue Variables meterseparationline5 "12R" "#@#Settings.inc"][!Refresh "rainmeter-allin" "Allin.ini"][!Redraw]
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterGamesEnable FontColor #colorSecondary#][!UpdateMeter MeterGamesEnable][!Redraw]
MouseLeaveAction=[!SetOption MeterGamesEnable FontColor #colorMain#][!UpdateMeter MeterGamesEnable][!Redraw]
Container=MeterContainerGames
Group=Games

[MeterGamesDisable]
Meter=String
Text=Desactivado
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
LeftMouseDownAction=[!WriteKeyValue Variables gameshidden "1" "#@#Settings.inc"][!WriteKeyValue Variables metershortcut26icon "733" "#@#Settings.inc"][!WriteKeyValue Variables meterfloating3 "750" "#@#Settings.inc"][!WriteKeyValue Variables meterseparationline5 "-13R" "#@#Settings.inc"][!Refresh "rainmeter-allin" "Allin.ini"]
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterGamesDisable FontColor #colorSecondary#][!UpdateMeter MeterGamesDisable][!Redraw]
MouseLeaveAction=[!SetOption MeterGamesDisable FontColor #colorMain#][!UpdateMeter MeterGamesDisable][!Redraw]
Container=MeterContainerGames
Group=Games

[MeterSubsectionLabel5]
Meter=String
Text=Juego 1 - #game1text#
MeterStyle=styleSubsection
X=0
Y=20R
DynamicVariables=1
Container=MeterContainerGames
Group=Games

[MeterGame1NameLabel]
Meter=String
Text=Nombre del juego:
MeterStyle=styleLabel
X=2
Y=10R
AntiAlias=1
Container=MeterContainerGames
Group=Games

[MeterGame1NameValue]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
DynamicVariables=1
Text=#game1text#
LeftMouseUpAction=!CommandMeasure "MeterGame1NameInput" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterGame1NameValue FontColor #colorSecondary#][!UpdateMeter MeterGame1NameValue][!Redraw]
MouseLeaveAction=[!SetOption MeterGame1NameValue FontColor #colorMain#][!UpdateMeter MeterGame1NameValue][!Redraw]
Container=MeterContainerGames
Group=Games
Hidden=1

[MeterGame1NameInput]
Measure=Plugin
Plugin=InputText
SolidColor=#colorSecondary#
FontColor=#colorMain#
FontFace=#fontSecondary#
StringStyle=Italic
FontSize=13
X=10
Y=216
W=364
DefaultValue=#game1text#
Command1=[!WriteKeyValue Variables game1text "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable game1text "[MeterGame1NameInput]"][!UpdateMeter MeterGame1NameValue][!UpdateMeter MeterSubsectionLabel5][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerGames
Group=Games

[MeterGame1PathLabel]
Meter=String
Text=Ruta del juego:
MeterStyle=styleLabel
X=2
Y=10R
AntiAlias=1
Container=MeterContainerGames
Group=Games

[MeterGame1PathValue]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
DynamicVariables=1
Text=#game1path#
LeftMouseUpAction=!CommandMeasure "MeterGame1PathInput" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterGame1PathValue FontColor #colorSecondary#][!UpdateMeter MeterGame1PathValue][!Redraw]
MouseLeaveAction=[!SetOption MeterGame1PathValue FontColor #colorMain#][!UpdateMeter MeterGame1PathValue][!Redraw]
Container=MeterContainerGames
Group=Games
Hidden=1

[MeterGame1PathInput]
Measure=Plugin
Plugin=InputText
SolidColor=#colorSecondary#
FontColor=#colorMain#
FontFace=#fontSecondary#
StringStyle=Italic
FontSize=13
X=10
Y=244
W=364
DefaultValue=#game1path#
Command1=[!WriteKeyValue Variables game1path "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable game1path "[MeterGame1PathInput]"][!UpdateMeter MeterGame1PathValue][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerGames
Group=Games

[MeterGame1ImageLabel]
Meter=String
Text=Ruta de la imagen:
MeterStyle=styleLabel
X=2
Y=10R
AntiAlias=1
Container=MeterContainerGames
Group=Games

[MeterGame1ImageValue]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
DynamicVariables=1
Text=#game1#
LeftMouseUpAction=!CommandMeasure "MeterGame1ImageInput" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterGame1ImageValue FontColor #colorSecondary#][!UpdateMeter MeterGame1ImageValue][!Redraw]
MouseLeaveAction=[!SetOption MeterGame1ImageValue FontColor #colorMain#][!UpdateMeter MeterGame1ImageValue][!Redraw]
Container=MeterContainerGames
Group=Games
Hidden=1

[MeterGame1ImageInput]
Measure=Plugin
Plugin=InputText
SolidColor=#colorSecondary#
FontColor=#colorMain#
FontFace=#fontSecondary#
StringStyle=Italic
FontSize=13
X=10
Y=274
W=364
DefaultValue=#game1#
Command1=[!WriteKeyValue Variables game1 "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable game1 "[MeterGame1ImageInput]"][!UpdateMeter MeterGame1ImageValue][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerGames
Group=Games

[MeterSubsectionLabel6]
Meter=String
Text=Juego 2 - #game2text#
MeterStyle=styleSubsection
X=0
Y=20R
DynamicVariables=1
Container=MeterContainerGames
Group=Games

[MeterGame2NameLabel]
Meter=String
Text=Nombre del juego:
MeterStyle=styleLabel
X=2
Y=10R
AntiAlias=1
Container=MeterContainerGames
Group=Games

[MeterGame2NameValue]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
DynamicVariables=1
Text=#game2text#
LeftMouseUpAction=!CommandMeasure "MeterGame2NameInput" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterGame2NameValue FontColor #colorSecondary#][!UpdateMeter MeterGame2NameValue][!Redraw]
MouseLeaveAction=[!SetOption MeterGame2NameValue FontColor #colorMain#][!UpdateMeter MeterGame2NameValue][!Redraw]
Container=MeterContainerGames
Group=Games
Hidden=1

[MeterGame2NameInput]
Measure=Plugin
Plugin=InputText
SolidColor=#colorSecondary#
FontColor=#colorMain#
FontFace=#fontSecondary#
StringStyle=Italic
FontSize=13
X=10
Y=337
W=364
DefaultValue=#game2text#
Command1=[!WriteKeyValue Variables game2text "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable game2text "[MeterGame2NameInput]"][!UpdateMeter MeterGame2NameValue][!UpdateMeter MeterSubsectionLabel6][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerGames
Group=Games

[MeterGame2PathLabel]
Meter=String
Text=Ruta del juego:
MeterStyle=styleLabel
X=2
Y=10R
AntiAlias=1
Container=MeterContainerGames
Group=Games

[MeterGame2PathValue]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
DynamicVariables=1
Text=#game2path#
LeftMouseUpAction=!CommandMeasure "MeterGame2PathInput" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterGame2PathValue FontColor #colorSecondary#][!UpdateMeter MeterGame2PathValue][!Redraw]
MouseLeaveAction=[!SetOption MeterGame2PathValue FontColor #colorMain#][!UpdateMeter MeterGame2PathValue][!Redraw]
Container=MeterContainerGames
Group=Games
Hidden=1

[MeterGame2PathInput]
Measure=Plugin
Plugin=InputText
SolidColor=#colorSecondary#
FontColor=#colorMain#
FontFace=#fontSecondary#
StringStyle=Italic
FontSize=13
X=10
Y=236
W=364
DefaultValue=#game2path#
Command1=[!WriteKeyValue Variables game2path "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable game2path "[MeterGame2PathInput]"][!UpdateMeter MeterGame2PathValue][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerGames
Group=Games

[MeterGame2ImageLabel]
Meter=String
Text=Ruta de la imagen:
MeterStyle=styleLabel
X=2
Y=10R
AntiAlias=1
Container=MeterContainerGames
Group=Games

[MeterGame2ImageValue]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
DynamicVariables=1
Text=#game2#
LeftMouseUpAction=!CommandMeasure "MeterGame2ImageInput" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterGame2ImageValue FontColor #colorSecondary#][!UpdateMeter MeterGame2ImageValue][!Redraw]
MouseLeaveAction=[!SetOption MeterGame2ImageValue FontColor #colorMain#][!UpdateMeter MeterGame2ImageValue][!Redraw]
Container=MeterContainerGames
Group=Games
Hidden=1

[MeterGame2ImageInput]
Measure=Plugin
Plugin=InputText
SolidColor=#colorSecondary#
FontColor=#colorMain#
FontFace=#fontSecondary#
StringStyle=Italic
FontSize=13
X=10
Y=266
W=364
DefaultValue=#game2#
Command1=[!WriteKeyValue Variables game2 "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable game2 "[MeterGame2ImageInput]"][!UpdateMeter MeterGame2ImageValue][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerGames
Group=Games

[MeterSubsectionLabel7]
Meter=String
Text=Juego 3 - #game3text#
MeterStyle=styleSubsection
X=0
Y=20R
DynamicVariables=1
Container=MeterContainerGames
Group=Games

[MeterGame3NameLabel]
Meter=String
Text=Nombre del juego:
MeterStyle=styleLabel
X=2
Y=10R
AntiAlias=1
Container=MeterContainerGames
Group=Games

[MeterGame3NameValue]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
DynamicVariables=1
Text=#game3text#
LeftMouseUpAction=!CommandMeasure "MeterGame3NameInput" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterGame3NameValue FontColor #colorSecondary#][!UpdateMeter MeterGame3NameValue][!Redraw]
MouseLeaveAction=[!SetOption MeterGame3NameValue FontColor #colorMain#][!UpdateMeter MeterGame3NameValue][!Redraw]
Container=MeterContainerGames
Group=Games
Hidden=1

[MeterGame3NameInput]
Measure=Plugin
Plugin=InputText
SolidColor=#colorSecondary#
FontColor=#colorMain#
FontFace=#fontSecondary#
StringStyle=Italic
FontSize=13
X=10
Y=453
W=364
DefaultValue=#game3text#
Command1=[!WriteKeyValue Variables game3text "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable game3text "[MeterGame3NameInput]"][!UpdateMeter MeterGame3NameValue][!UpdateMeter MeterSubsectionLabel7][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerGames
Group=Games

[MeterGame3PathLabel]
Meter=String
Text=Ruta del juego:
MeterStyle=styleLabel
X=2
Y=10R
AntiAlias=1
Container=MeterContainerGames
Group=Games

[MeterGame3PathValue]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
DynamicVariables=1
Text=#game3path#
LeftMouseUpAction=!CommandMeasure "MeterGame3PathInput" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterGame3PathValue FontColor #colorSecondary#][!UpdateMeter MeterGame3PathValue][!Redraw]
MouseLeaveAction=[!SetOption MeterGame3PathValue FontColor #colorMain#][!UpdateMeter MeterGame3PathValue][!Redraw]
Container=MeterContainerGames
Group=Games
Hidden=1

[MeterGame3PathInput]
Measure=Plugin
Plugin=InputText
SolidColor=#colorSecondary#
FontColor=#colorMain#
FontFace=#fontSecondary#
StringStyle=Italic
FontSize=13
X=10
Y=481
W=364
DefaultValue=#game3path#
Command1=[!WriteKeyValue Variables game3path "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable game3path "[MeterGame3PathInput]"][!UpdateMeter MeterGame3PathValue][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerGames
Group=Games

[MeterGame3ImageLabel]
Meter=String
Text=Ruta de la imagen:
MeterStyle=styleLabel
X=2
Y=10R
AntiAlias=1
Container=MeterContainerGames
Group=Games

[MeterGame3ImageValue]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
DynamicVariables=1
Text=#game3#
LeftMouseUpAction=!CommandMeasure "MeterGame3ImageInput" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterGame3ImageValue FontColor #colorSecondary#][!UpdateMeter MeterGame3ImageValue][!Redraw]
MouseLeaveAction=[!SetOption MeterGame3ImageValue FontColor #colorMain#][!UpdateMeter MeterGame3ImageValue][!Redraw]
Container=MeterContainerGames
Group=Games
Hidden=1

[MeterGame3ImageInput]
Measure=Plugin
Plugin=InputText
SolidColor=#colorSecondary#
FontColor=#colorMain#
FontFace=#fontSecondary#
StringStyle=Italic
FontSize=13
X=10
Y=508
W=364
DefaultValue=#game3#
Command1=[!WriteKeyValue Variables game3 "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable game3 "[MeterGame3ImageInput]"][!UpdateMeter MeterGame3ImageValue][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerGames
Group=Games