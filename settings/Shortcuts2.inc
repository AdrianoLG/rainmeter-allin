[MeterSeparationLine3]
Meter=Image
X=0
Y=1R
W=364
H=1
SolidColor=255,255,255,50
Container=MeterContainerShortcuts2
Group=Shortcuts2

[MeterShortcut11Label]
Meter=String
Text=Atajo 11 - #text11#:
MeterStyle=styleLabel
X=2
Y=15R
AntiAlias=1
Container=MeterContainerShortcuts2
Group=Shortcuts2

[MeterShortcut11Value]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
DynamicVariables=1
Text=#path11#
LeftMouseUpAction=!CommandMeasure "MeasureShortcut11Input" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterShortcut11Value FontColor #colorSecondary#][!UpdateMeter MeterShortcut11Value][!Redraw]
MouseLeaveAction=[!SetOption MeterShortcut11Value FontColor #colorMain#][!UpdateMeter MeterShortcut11Value][!Redraw]
Container=MeterContainerShortcuts2
Group=Shortcuts2
Hidden=1

[MeasureShortcut11Input]
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
DefaultValue=#path11#
Command1=[!WriteKeyValue Variables path11 "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable path11 "[MeasureShortcut11Input]"][!UpdateMeter MeterShortcut11Value][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerShortcuts2
Group=Shortcuts2

[MeterShortcut12Label]
Meter=String
Text=Atajo 12 - #text12#:
MeterStyle=styleLabel
X=2
Y=10R
AntiAlias=1
Container=MeterContainerShortcuts2
Group=Shortcuts2

[MeterShortcut12Value]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
DynamicVariables=1
Text=#path12#
LeftMouseUpAction=!CommandMeasure "MeasureShortcut12Input" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterShortcut12Value FontColor #colorSecondary#][!UpdateMeter MeterShortcut12Value][!Redraw]
MouseLeaveAction=[!SetOption MeterShortcut12Value FontColor #colorMain#][!UpdateMeter MeterShortcut12Value][!Redraw]
Container=MeterContainerShortcuts2
Group=Shortcuts2
Hidden=1

[MeasureShortcut12Input]
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
DefaultValue=#path12#
Command1=[!WriteKeyValue Variables path12 "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable path12 "[MeasureShortcut12Input]"][!UpdateMeter MeterShortcut12Value][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerShortcuts2
Group=Shortcuts2

[MeterShortcut13Label]
Meter=String
Text=Atajo 13 - #text13#:
MeterStyle=styleLabel
X=2
Y=10R
AntiAlias=1
Container=MeterContainerShortcuts2
Group=Shortcuts2

[MeterShortcut13Value]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
DynamicVariables=1
Text=#path13#
LeftMouseUpAction=!CommandMeasure "MeasureShortcut13Input" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterShortcut13Value FontColor #colorSecondary#][!UpdateMeter MeterShortcut13Value][!Redraw]
MouseLeaveAction=[!SetOption MeterShortcut13Value FontColor #colorMain#][!UpdateMeter MeterShortcut13Value][!Redraw]
Container=MeterContainerShortcuts2
Group=Shortcuts2
Hidden=1

[MeasureShortcut13Input]
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
DefaultValue=#path13#
Command1=[!WriteKeyValue Variables path13 "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable path13 "[MeasureShortcut13Input]"][!UpdateMeter MeterShortcut13Value][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerShortcuts2
Group=Shortcuts2

[MeterShortcut14Label]
Meter=String
Text=Atajo 14 - #text14#:
MeterStyle=styleLabel
X=2
Y=10R
AntiAlias=1
Container=MeterContainerShortcuts2
Group=Shortcuts2

[MeterShortcut14Value]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
DynamicVariables=1
Text=#path14#
LeftMouseUpAction=!CommandMeasure "MeasureShortcut14Input" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterShortcut14Value FontColor #colorSecondary#][!UpdateMeter MeterShortcut14Value][!Redraw]
MouseLeaveAction=[!SetOption MeterShortcut14Value FontColor #colorMain#][!UpdateMeter MeterShortcut14Value][!Redraw]
Container=MeterContainerShortcuts2
Group=Shortcuts2
Hidden=1

[MeasureShortcut14Input]
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
DefaultValue=#path14#
Command1=[!WriteKeyValue Variables path14 "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable path14 "[MeasureShortcut14Input]"][!UpdateMeter MeterShortcut14Value][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerShortcuts2
Group=Shortcuts2

[MeterShortcut15Label]
Meter=String
Text=Atajo 15 - #text15#:
MeterStyle=styleLabel
X=2
Y=10R
AntiAlias=1
Container=MeterContainerShortcuts2
Group=Shortcuts2

[MeterShortcut15Value]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
DynamicVariables=1
Text=#path15#
LeftMouseUpAction=!CommandMeasure "MeasureShortcut15Input" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterShortcut15Value FontColor #colorSecondary#][!UpdateMeter MeterShortcut15Value][!Redraw]
MouseLeaveAction=[!SetOption MeterShortcut15Value FontColor #colorMain#][!UpdateMeter MeterShortcut15Value][!Redraw]
Container=MeterContainerShortcuts2
Group=Shortcuts2
Hidden=1

[MeasureShortcut15Input]
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
DefaultValue=#path15#
Command1=[!WriteKeyValue Variables path15 "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable path15 "[MeasureShortcut15Input]"][!UpdateMeter MeterShortcut15Value][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerShortcuts2
Group=Shortcuts2

[MeterShortcut16Label]
Meter=String
Text=Atajo 16 - #text16#:
MeterStyle=styleLabel
X=2
Y=10R
AntiAlias=1
Container=MeterContainerShortcuts2
Group=Shortcuts2

[MeterShortcut16Value]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
DynamicVariables=1
Text=#path16#
LeftMouseUpAction=!CommandMeasure "MeasureShortcut16Input" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterShortcut16Value FontColor #colorSecondary#][!UpdateMeter MeterShortcut16Value][!Redraw]
MouseLeaveAction=[!SetOption MeterShortcut16Value FontColor #colorMain#][!UpdateMeter MeterShortcut16Value][!Redraw]
Container=MeterContainerShortcuts2
Group=Shortcuts2
Hidden=1

[MeasureShortcut16Input]
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
DefaultValue=#path16#
Command1=[!WriteKeyValue Variables path16 "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable path16 "[MeasureShortcut16Input]"][!UpdateMeter MeterShortcut16Value][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerShortcuts2
Group=Shortcuts2

[MeterShortcut17Label]
Meter=String
Text=Atajo 17 - #text17#:
MeterStyle=styleLabel
X=2
Y=10R
AntiAlias=1
Container=MeterContainerShortcuts2
Group=Shortcuts2

[MeterShortcut17Value]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
DynamicVariables=1
Text=#path17#
LeftMouseUpAction=!CommandMeasure "MeasureShortcut17Input" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterShortcut17Value FontColor #colorSecondary#][!UpdateMeter MeterShortcut17Value][!Redraw]
MouseLeaveAction=[!SetOption MeterShortcut17Value FontColor #colorMain#][!UpdateMeter MeterShortcut17Value][!Redraw]
Container=MeterContainerShortcuts2
Group=Shortcuts2
Hidden=1

[MeasureShortcut17Input]
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
DefaultValue=#path17#
Command1=[!WriteKeyValue Variables path17 "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable path17 "[MeasureShortcut17Input]"][!UpdateMeter MeterShortcut17Value][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerShortcuts2
Group=Shortcuts2

[MeterShortcut18Label]
Meter=String
Text=Atajo 18 - #text18#:
MeterStyle=styleLabel
X=2
Y=10R
AntiAlias=1
Container=MeterContainerShortcuts2
Group=Shortcuts2

[MeterShortcut18Value]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
DynamicVariables=1
Text=#path18#
LeftMouseUpAction=!CommandMeasure "MeasureShortcut18Input" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterShortcut18Value FontColor #colorSecondary#][!UpdateMeter MeterShortcut18Value][!Redraw]
MouseLeaveAction=[!SetOption MeterShortcut18Value FontColor #colorMain#][!UpdateMeter MeterShortcut18Value][!Redraw]
Container=MeterContainerShortcuts2
Group=Shortcuts2
Hidden=1

[MeasureShortcut18Input]
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
DefaultValue=#path18#
Command1=[!WriteKeyValue Variables path18 "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable path18 "[MeasureShortcut18Input]"][!UpdateMeter MeterShortcut18Value][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerShortcuts2
Group=Shortcuts2

[MeterShortcut19Label]
Meter=String
Text=Atajo 19 - #text19#:
MeterStyle=styleLabel
X=2
Y=10R
AntiAlias=1
Container=MeterContainerShortcuts2
Group=Shortcuts2

[MeterShortcut19Value]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
DynamicVariables=1
Text=#path19#
LeftMouseUpAction=!CommandMeasure "MeasureShortcut19Input" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterShortcut19Value FontColor #colorSecondary#][!UpdateMeter MeterShortcut19Value][!Redraw]
MouseLeaveAction=[!SetOption MeterShortcut19Value FontColor #colorMain#][!UpdateMeter MeterShortcut19Value][!Redraw]
Container=MeterContainerShortcuts2
Group=Shortcuts2
Hidden=1

[MeasureShortcut19Input]
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
DefaultValue=#path19#
Command1=[!WriteKeyValue Variables path19 "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable path19 "[MeasureShortcut19Input]"][!UpdateMeter MeterShortcut19Value][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerShortcuts2
Group=Shortcuts2

[MeterShortcut20Label]
Meter=String
Text=Atajo 20 - #text20#:
MeterStyle=styleLabel
X=2
Y=10R
AntiAlias=1
Container=MeterContainerShortcuts2
Group=Shortcuts2

[MeterShortcut20Value]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
DynamicVariables=1
Text=#path20#
LeftMouseUpAction=!CommandMeasure "MeasureShortcut20Input" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterShortcut20Value FontColor #colorSecondary#][!UpdateMeter MeterShortcut20Value][!Redraw]
MouseLeaveAction=[!SetOption MeterShortcut20Value FontColor #colorMain#][!UpdateMeter MeterShortcut20Value][!Redraw]
Container=MeterContainerShortcuts2
Group=Shortcuts2
Hidden=1

[MeasureShortcut20Input]
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
DefaultValue=#path20#
Command1=[!WriteKeyValue Variables path20 "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable path20 "[MeasureShortcut20Input]"][!UpdateMeter MeterShortcut20Value][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerShortcuts2
Group=Shortcuts2

[MeterShortcut21Label]
Meter=String
Text=Atajo 21 - #text21#:
MeterStyle=styleLabel
X=2
Y=10R
AntiAlias=1
Container=MeterContainerShortcuts2
Group=Shortcuts2

[MeterShortcut21Value]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
DynamicVariables=1
Text=#path21#
LeftMouseUpAction=!CommandMeasure "MeasureShortcut21Input" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterShortcut21Value FontColor #colorSecondary#][!UpdateMeter MeterShortcut21Value][!Redraw]
MouseLeaveAction=[!SetOption MeterShortcut21Value FontColor #colorMain#][!UpdateMeter MeterShortcut21Value][!Redraw]
Container=MeterContainerShortcuts2
Group=Shortcuts2
Hidden=1

[MeasureShortcut21Input]
Measure=Plugin
Plugin=InputText
SolidColor=#colorSecondary#
FontColor=#colorMain#
FontFace=#fontSecondary#
StringStyle=Italic
FontSize=13
X=10
Y=429
W=364
DefaultValue=#path21#
Command1=[!WriteKeyValue Variables path21 "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable path21 "[MeasureShortcut21Input]"][!UpdateMeter MeterShortcut21Value][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerShortcuts2
Group=Shortcuts2

[MeterShortcut22Label]
Meter=String
Text=Atajo 22 - #text22#:
MeterStyle=styleLabel
X=2
Y=10R
AntiAlias=1
Container=MeterContainerShortcuts2
Group=Shortcuts2

[MeterShortcut22Value]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
DynamicVariables=1
Text=#path22#
LeftMouseUpAction=!CommandMeasure "MeasureShortcut22Input" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterShortcut22Value FontColor #colorSecondary#][!UpdateMeter MeterShortcut22Value][!Redraw]
MouseLeaveAction=[!SetOption MeterShortcut22Value FontColor #colorMain#][!UpdateMeter MeterShortcut22Value][!Redraw]
Container=MeterContainerShortcuts2
Group=Shortcuts2
Hidden=1

[MeasureShortcut22Input]
Measure=Plugin
Plugin=InputText
SolidColor=#colorSecondary#
FontColor=#colorMain#
FontFace=#fontSecondary#
StringStyle=Italic
FontSize=13
X=10
Y=456
W=364
DefaultValue=#path22#
Command1=[!WriteKeyValue Variables path22 "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable path22 "[MeasureShortcut22Input]"][!UpdateMeter MeterShortcut22Value][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerShortcuts2
Group=Shortcuts2

[MeterShortcutFloat2Label]
Meter=String
Text=Atajo flotante 2 - Firefox:
MeterStyle=styleLabel
X=2
Y=10R
AntiAlias=1
Container=MeterContainerShortcuts2
Group=Shortcuts2

[MeterShortcutFloat2Value]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
DynamicVariables=1
Text=#floating2path#
LeftMouseUpAction=!CommandMeasure "MeasureShortcutFloat2ValueInput" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterShortcutFloat2Value FontColor #colorSecondary#][!UpdateMeter MeterShortcutFloat2Value][!Redraw]
MouseLeaveAction=[!SetOption MeterShortcutFloat2Value FontColor #colorMain#][!UpdateMeter MeterShortcutFloat2Value][!Redraw]
Container=MeterContainerShortcuts2
Group=Shortcuts2
Hidden=1

[MeasureShortcutFloat2ValueInput]
Measure=Plugin
Plugin=InputText
SolidColor=#colorSecondary#
FontColor=#colorMain#
FontFace=#fontSecondary#
StringStyle=Italic
FontSize=13
X=10
Y=483
W=364
DefaultValue=#floating2path#
Command1=[!WriteKeyValue Variables floating2path "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable floating2path "[MeasureShortcutFloat2ValueInput]"][!UpdateMeter MeterShortcutFloat2Value][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerShortcuts2
Group=Shortcuts2