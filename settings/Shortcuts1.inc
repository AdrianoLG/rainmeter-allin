[MeterSeparationLine2]
Meter=Image
X=0
Y=1R
W=364
H=1
SolidColor=255,255,255,50
Container=MeterContainerShortcuts1
Group=Shortcuts1

[MeterShortcut1Label]
Meter=String
Text=Atajo 1 - #text1#:
MeterStyle=styleLabel
X=2
Y=15R
AntiAlias=1
Container=MeterContainerShortcuts1
Group=Shortcuts1

[MeterShortcut1Value]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
DynamicVariables=1
Text=#path1#
LeftMouseUpAction=!CommandMeasure "MeasureShortcut1Input" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterShortcut1Value FontColor #colorSecondary#][!UpdateMeter MeterShortcut1Value][!Redraw]
MouseLeaveAction=[!SetOption MeterShortcut1Value FontColor #colorMain#][!UpdateMeter MeterShortcut1Value][!Redraw]
Container=MeterContainerShortcuts1
Group=Shortcuts1
Hidden=1

[MeasureShortcut1Input]
Measure=Plugin
Plugin=InputText
SolidColor=#colorSecondary#
FontColor=#colorMain#
FontFace=#fontSecondary#
StringStyle=Italic
FontSize=13
X=10
Y=155
W=364
DefaultValue=#path1#
Command1=[!WriteKeyValue Variables path1 "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable path1 "[MeasureShortcut1Input]"][!UpdateMeter MeterShortcut1Value][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerShortcuts1
Group=Shortcuts1

[MeterShortcut2Label]
Meter=String
Text=Atajo 2 - #text2#:
MeterStyle=styleLabel
X=2
Y=10R
AntiAlias=1
Container=MeterContainerShortcuts1
Group=Shortcuts1

[MeterShortcut2Value]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
DynamicVariables=1
Text=#path2#
LeftMouseUpAction=!CommandMeasure "MeasureShortcut2Input" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterShortcut2Value FontColor #colorSecondary#][!UpdateMeter MeterShortcut2Value][!Redraw]
MouseLeaveAction=[!SetOption MeterShortcut2Value FontColor #colorMain#][!UpdateMeter MeterShortcut2Value][!Redraw]
Container=MeterContainerShortcuts1
Group=Shortcuts1
Hidden=1

[MeasureShortcut2Input]
Measure=Plugin
Plugin=InputText
SolidColor=#colorSecondary#
FontColor=#colorMain#
FontFace=#fontSecondary#
StringStyle=Italic
FontSize=13
X=10
Y=185
W=364
DefaultValue=#path2#
Command1=[!WriteKeyValue Variables path2 "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable path2 "[MeasureShortcut2Input]"][!UpdateMeter MeterShortcut2Value][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerShortcuts1
Group=Shortcuts1

[MeterShortcut3Label]
Meter=String
Text=Atajo 3 - #text3#:
MeterStyle=styleLabel
X=2
Y=10R
AntiAlias=1
Container=MeterContainerShortcuts1
Group=Shortcuts1

[MeterShortcut3Value]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
DynamicVariables=1
Text=#path3#
LeftMouseUpAction=!CommandMeasure "MeasureShortcut3Input" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterShortcut3Value FontColor #colorSecondary#][!UpdateMeter MeterShortcut3Value][!Redraw]
MouseLeaveAction=[!SetOption MeterShortcut3Value FontColor #colorMain#][!UpdateMeter MeterShortcut3Value][!Redraw]
Container=MeterContainerShortcuts1
Group=Shortcuts1
Hidden=1

[MeasureShortcut3Input]
Measure=Plugin
Plugin=InputText
SolidColor=#colorSecondary#
FontColor=#colorMain#
FontFace=#fontSecondary#
StringStyle=Italic
FontSize=13
X=10
Y=210
W=364
DefaultValue=#path3#
Command1=[!WriteKeyValue Variables path3 "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable path3 "[MeasureShortcut3Input]"][!UpdateMeter MeterShortcut3Value][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerShortcuts1
Group=Shortcuts1

[MeterShortcut4Label]
Meter=String
Text=Atajo 4 - #text4#:
MeterStyle=styleLabel
X=2
Y=10R
AntiAlias=1
Container=MeterContainerShortcuts1
Group=Shortcuts1

[MeterShortcut4Value]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
DynamicVariables=1
Text=#path4#
LeftMouseUpAction=!CommandMeasure "MeasureShortcut4Input" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterShortcut4Value FontColor #colorSecondary#][!UpdateMeter MeterShortcut4Value][!Redraw]
MouseLeaveAction=[!SetOption MeterShortcut4Value FontColor #colorMain#][!UpdateMeter MeterShortcut4Value][!Redraw]
Container=MeterContainerShortcuts1
Group=Shortcuts1
Hidden=1

[MeasureShortcut4Input]
Measure=Plugin
Plugin=InputText
SolidColor=#colorSecondary#
FontColor=#colorMain#
FontFace=#fontSecondary#
StringStyle=Italic
FontSize=13
X=10
Y=240
W=364
DefaultValue=#path4#
Command1=[!WriteKeyValue Variables path4 "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable path4 "[MeasureShortcut4Input]"][!UpdateMeter MeterShortcut4Value][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerShortcuts1
Group=Shortcuts1

[MeterShortcut5Label]
Meter=String
Text=Atajo 5 - #text5#:
MeterStyle=styleLabel
X=2
Y=10R
AntiAlias=1
Container=MeterContainerShortcuts1
Group=Shortcuts1

[MeterShortcut5Value]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
DynamicVariables=1
Text=#path5#
LeftMouseUpAction=!CommandMeasure "MeasureShortcut5Input" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterShortcut5Value FontColor #colorSecondary#][!UpdateMeter MeterShortcut5Value][!Redraw]
MouseLeaveAction=[!SetOption MeterShortcut5Value FontColor #colorMain#][!UpdateMeter MeterShortcut5Value][!Redraw]
Container=MeterContainerShortcuts1
Group=Shortcuts1
Hidden=1

[MeasureShortcut5Input]
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
DefaultValue=#path5#
Command1=[!WriteKeyValue Variables path5 "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable path5 "[MeasureShortcut5Input]"][!UpdateMeter MeterShortcut5Value][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerShortcuts1
Group=Shortcuts1

[MeterShortcut6Label]
Meter=String
Text=Atajo 6 - #text6#:
MeterStyle=styleLabel
X=2
Y=10R
AntiAlias=1
Container=MeterContainerShortcuts1
Group=Shortcuts1

[MeterShortcut6Value]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
DynamicVariables=1
Text=#path6#
LeftMouseUpAction=!CommandMeasure "MeasureShortcut6Input" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterShortcut6Value FontColor #colorSecondary#][!UpdateMeter MeterShortcut6Value][!Redraw]
MouseLeaveAction=[!SetOption MeterShortcut6Value FontColor #colorMain#][!UpdateMeter MeterShortcut6Value][!Redraw]
Container=MeterContainerShortcuts1
Group=Shortcuts1
Hidden=1

[MeasureShortcut6Input]
Measure=Plugin
Plugin=InputText
SolidColor=#colorSecondary#
FontColor=#colorMain#
FontFace=#fontSecondary#
StringStyle=Italic
FontSize=13
X=10
Y=292
W=364
DefaultValue=#path6#
Command1=[!WriteKeyValue Variables path6 "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable path6 "[MeasureShortcut6Input]"][!UpdateMeter MeterShortcut6Value][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerShortcuts1
Group=Shortcuts1

[MeterShortcut7Label]
Meter=String
Text=Atajo 7 - #text7#:
MeterStyle=styleLabel
X=2
Y=10R
AntiAlias=1
Container=MeterContainerShortcuts1
Group=Shortcuts1

[MeterShortcut7Value]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
DynamicVariables=1
Text=#path7#
LeftMouseUpAction=!CommandMeasure "MeasureShortcut7Input" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterShortcut7Value FontColor #colorSecondary#][!UpdateMeter MeterShortcut7Value][!Redraw]
MouseLeaveAction=[!SetOption MeterShortcut7Value FontColor #colorMain#][!UpdateMeter MeterShortcut7Value][!Redraw]
Container=MeterContainerShortcuts1
Group=Shortcuts1
Hidden=1

[MeasureShortcut7Input]
Measure=Plugin
Plugin=InputText
SolidColor=#colorSecondary#
FontColor=#colorMain#
FontFace=#fontSecondary#
StringStyle=Italic
FontSize=13
X=10
Y=320
W=364
DefaultValue=#path7#
Command1=[!WriteKeyValue Variables path7 "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable path7 "[MeasureShortcut7Input]"][!UpdateMeter MeterShortcut7Value][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerShortcuts1
Group=Shortcuts1

[MeterShortcut8Label]
Meter=String
Text=Atajo 8 - #text8#:
MeterStyle=styleLabel
X=2
Y=10R
AntiAlias=1
Container=MeterContainerShortcuts1
Group=Shortcuts1

[MeterShortcut8Value]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
DynamicVariables=1
Text=#path8#
LeftMouseUpAction=!CommandMeasure "MeasureShortcut8Input" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterShortcut8Value FontColor #colorSecondary#][!UpdateMeter MeterShortcut8Value][!Redraw]
MouseLeaveAction=[!SetOption MeterShortcut8Value FontColor #colorMain#][!UpdateMeter MeterShortcut8Value][!Redraw]
Container=MeterContainerShortcuts1
Group=Shortcuts1
Hidden=1

[MeasureShortcut8Input]
Measure=Plugin
Plugin=InputText
SolidColor=#colorSecondary#
FontColor=#colorMain#
FontFace=#fontSecondary#
StringStyle=Italic
FontSize=13
X=10
Y=350
W=364
DefaultValue=#path8#
Command1=[!WriteKeyValue Variables path8 "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable path8 "[MeasureShortcut8Input]"][!UpdateMeter MeterShortcut8Value][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerShortcuts1
Group=Shortcuts1

[MeterShortcut9Label]
Meter=String
Text=Atajo 9 - #text9#:
MeterStyle=styleLabel
X=2
Y=10R
AntiAlias=1
Container=MeterContainerShortcuts1
Group=Shortcuts1

[MeterShortcut9Value]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
DynamicVariables=1
Text=#path9#
LeftMouseUpAction=!CommandMeasure "MeasureShortcut9Input" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterShortcut9Value FontColor #colorSecondary#][!UpdateMeter MeterShortcut9Value][!Redraw]
MouseLeaveAction=[!SetOption MeterShortcut9Value FontColor #colorMain#][!UpdateMeter MeterShortcut9Value][!Redraw]
Container=MeterContainerShortcuts1
Group=Shortcuts1
Hidden=1

[MeasureShortcut9Input]
Measure=Plugin
Plugin=InputText
SolidColor=#colorSecondary#
FontColor=#colorMain#
FontFace=#fontSecondary#
StringStyle=Italic
FontSize=13
X=10
Y=376
W=364
DefaultValue=#path9#
Command1=[!WriteKeyValue Variables path9 "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable path9 "[MeasureShortcut9Input]"][!UpdateMeter MeterShortcut9Value][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerShortcuts1
Group=Shortcuts1

[MeterShortcut10Label]
Meter=String
Text=Atajo 10 - #text10#:
MeterStyle=styleLabel
X=2
Y=10R
AntiAlias=1
Container=MeterContainerShortcuts1
Group=Shortcuts1

[MeterShortcut10Value]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
DynamicVariables=1
Text=#path10#
LeftMouseUpAction=!CommandMeasure "MeasureShortcut10Input" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterShortcut10Value FontColor #colorSecondary#][!UpdateMeter MeterShortcut10Value][!Redraw]
MouseLeaveAction=[!SetOption MeterShortcut10Value FontColor #colorMain#][!UpdateMeter MeterShortcut10Value][!Redraw]
Container=MeterContainerShortcuts1
Group=Shortcuts1
Hidden=1

[MeasureShortcut10Input]
Measure=Plugin
Plugin=InputText
SolidColor=#colorSecondary#
FontColor=#colorMain#
FontFace=#fontSecondary#
StringStyle=Italic
FontSize=13
X=10
Y=400
W=364
DefaultValue=#path10#
Command1=[!WriteKeyValue Variables path10 "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable path10 "[MeasureShortcut10Input]"][!UpdateMeter MeterShortcut10Value][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerShortcuts1
Group=Shortcuts1

[MeterShortcutFloat1Label]
Meter=String
Text=Atajo flotante 1 - Nas:
MeterStyle=styleLabel
X=2
Y=10R
AntiAlias=1
Container=MeterContainerShortcuts1
Group=Shortcuts1

[MeterShortcutFloat1Value]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
DynamicVariables=1
Text=#floating1path#
LeftMouseUpAction=!CommandMeasure "MeasureShortcutFloat1ValueInput" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterShortcutFloat1Value FontColor #colorSecondary#][!UpdateMeter MeterShortcutFloat1Value][!Redraw]
MouseLeaveAction=[!SetOption MeterShortcutFloat1Value FontColor #colorMain#][!UpdateMeter MeterShortcutFloat1Value][!Redraw]
Container=MeterContainerShortcuts1
Group=Shortcuts1
Hidden=1

[MeasureShortcutFloat1ValueInput]
Measure=Plugin
Plugin=InputText
SolidColor=#colorSecondary#
FontColor=#colorMain#
FontFace=#fontSecondary#
StringStyle=Italic
FontSize=13
X=10
Y=430
W=364
DefaultValue=#floating1path#
Command1=[!WriteKeyValue Variables floating1path "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable floating1path "[MeasureShortcutFloat1ValueInput]"][!UpdateMeter MeterShortcutFloat1Value][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerShortcuts1
Group=Shortcuts1