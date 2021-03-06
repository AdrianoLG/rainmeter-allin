[MeterSeparationLine5]
Meter=Image
X=0
Y=1R
W=364
H=1
SolidColor=255,255,255,50
Container=MeterContainerOthers
Group=Others

[MeterRRSS]
Meter=String
Text=Redes sociales
MeterStyle=styleSubsection
X=0
Y=12R
AntiAlias=1
Container=MeterContainerOthers
Group=Others

[MeterSocial1Label]
Meter=String
Text=#social1text#
MeterStyle=styleLabel
X=2
Y=10R
AntiAlias=1
Container=MeterContainerOthers
Group=Others

[MeterSocial1Value]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
DynamicVariables=1
Text=#social1path#
LeftMouseUpAction=!CommandMeasure "MeterSocial1Input" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterSocial1Value FontColor #colorSecondary#][!UpdateMeter MeterSocial1Value][!Redraw]
MouseLeaveAction=[!SetOption MeterSocial1Value FontColor #colorMain#][!UpdateMeter MeterSocial1Value][!Redraw]
Container=MeterContainerOthers
Group=Others
Hidden=1

[MeterSocial1Input]
Measure=Plugin
Plugin=InputText
SolidColor=#colorSecondary#
FontColor=#colorMain#
FontFace=#fontSecondary#
StringStyle=Italic
FontSize=13
X=10
Y=183
W=364
DefaultValue=#social1path#
Command1=[!WriteKeyValue Variables social1path "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable social1path "[MeterSocial1Input]"][!UpdateMeter MeterSocial1Value][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerOthers
Group=Others

[MeterSocial2Label]
Meter=String
Text=#social2text#
MeterStyle=styleLabel
X=2
Y=10R
AntiAlias=1
Container=MeterContainerOthers
Group=Others

[MeterSocial2Value]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
DynamicVariables=1
Text=#social2path#
LeftMouseUpAction=!CommandMeasure "MeterSocial2Input" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterSocial2Value FontColor #colorSecondary#][!UpdateMeter MeterSocial2Value][!Redraw]
MouseLeaveAction=[!SetOption MeterSocial2Value FontColor #colorMain#][!UpdateMeter MeterSocial2Value][!Redraw]
Container=MeterContainerOthers
Group=Others
Hidden=1

[MeterSocial2Input]
Measure=Plugin
Plugin=InputText
SolidColor=#colorSecondary#
FontColor=#colorMain#
FontFace=#fontSecondary#
StringStyle=Italic
FontSize=13
X=10
Y=209
W=364
DefaultValue=#social2path#
Command1=[!WriteKeyValue Variables social2path "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable social2path "[MeterSocial2Input]"][!UpdateMeter MeterSocial2Value][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerOthers
Group=Others

[MeterSocial3Label]
Meter=String
Text=#social3text#
MeterStyle=styleLabel
X=2
Y=10R
AntiAlias=1
Container=MeterContainerOthers
Group=Others

[MeterSocial3Value]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
DynamicVariables=1
Text=#social3path#
LeftMouseUpAction=!CommandMeasure "MeterSocial3Input" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterSocial3Value FontColor #colorSecondary#][!UpdateMeter MeterSocial3Value][!Redraw]
MouseLeaveAction=[!SetOption MeterSocial3Value FontColor #colorMain#][!UpdateMeter MeterSocial3Value][!Redraw]
Container=MeterContainerOthers
Group=Others
Hidden=1

[MeterSocial3Input]
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
DefaultValue=#social3path#
Command1=[!WriteKeyValue Variables social3path "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable social3path "[MeterSocial3Input]"][!UpdateMeter MeterSocial3Value][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerOthers
Group=Others

[MeterOffice]
Meter=String
Text=Office
MeterStyle=styleSubsection
X=0
Y=20R
AntiAlias=1
Container=MeterContainerOthers
Group=Others

[MeterWordLabel]
Meter=String
Text=#text23#
MeterStyle=styleLabel
X=2
Y=10R
AntiAlias=1
Container=MeterContainerOthers
Group=Others

[MeterWordValue]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
DynamicVariables=1
Text=#path23#
LeftMouseUpAction=!CommandMeasure "MeterWordInput" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterWordValue FontColor #colorSecondary#][!UpdateMeter MeterWordValue][!Redraw]
MouseLeaveAction=[!SetOption MeterWordValue FontColor #colorMain#][!UpdateMeter MeterWordValue][!Redraw]
Container=MeterContainerOthers
Group=Others
Hidden=1

[MeterWordInput]
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
DefaultValue=#path23#
Command1=[!WriteKeyValue Variables path23 "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable path23 "[MeterWordInput]"][!UpdateMeter MeterWordValue][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerOthers
Group=Others

[MeterExcelLabel]
Meter=String
Text=#text24#
MeterStyle=styleLabel
X=2
Y=10R
AntiAlias=1
Container=MeterContainerOthers
Group=Others

[MeterExcelValue]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
DynamicVariables=1
Text=#path24#
LeftMouseUpAction=!CommandMeasure "MeterExcelInput" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterExcelValue FontColor #colorSecondary#][!UpdateMeter MeterExcelValue][!Redraw]
MouseLeaveAction=[!SetOption MeterExcelValue FontColor #colorMain#][!UpdateMeter MeterExcelValue][!Redraw]
Container=MeterContainerOthers
Group=Others
Hidden=1

[MeterExcelInput]
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
DefaultValue=#path24#
Command1=[!WriteKeyValue Variables path24 "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable path24 "[MeterExcelInput]"][!UpdateMeter MeterExcelValue][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerOthers
Group=Others

[MeterPowerpointLabel]
Meter=String
Text=#text25#
MeterStyle=styleLabel
X=2
Y=10R
AntiAlias=1
Container=MeterContainerOthers
Group=Others

[MeterPowerpointValue]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
DynamicVariables=1
Text=#path25#
LeftMouseUpAction=!CommandMeasure "MeterPowerpointInput" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterPowerpointValue FontColor #colorSecondary#][!UpdateMeter MeterPowerpointValue][!Redraw]
MouseLeaveAction=[!SetOption MeterPowerpointValue FontColor #colorMain#][!UpdateMeter MeterPowerpointValue][!Redraw]
Container=MeterContainerOthers
Group=Others
Hidden=1

[MeterPowerpointInput]
Measure=Plugin
Plugin=InputText
SolidColor=#colorSecondary#
FontColor=#colorMain#
FontFace=#fontSecondary#
StringStyle=Italic
FontSize=13
X=10
Y=348
W=364
DefaultValue=#path25#
Command1=[!WriteKeyValue Variables path25 "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable path25 "[MeterPowerpointInput]"][!UpdateMeter MeterPowerpointValue][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerOthers
Group=Others

[Meter3D]
Meter=String
Text=3D
MeterStyle=styleSubsection
X=0
Y=20R
AntiAlias=1
Container=MeterContainerOthers
Group=Others

[MeterSketchupLabel]
Meter=String
Text=#text26#
MeterStyle=styleLabel
X=2
Y=10R
AntiAlias=1
Container=MeterContainerOthers
Group=Others

[MeterSketchupValue]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
DynamicVariables=1
Text=#path26#
LeftMouseUpAction=!CommandMeasure "MeterSketchupInput" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterSketchupValue FontColor #colorSecondary#][!UpdateMeter MeterSketchupValue][!Redraw]
MouseLeaveAction=[!SetOption MeterSketchupValue FontColor #colorMain#][!UpdateMeter MeterSketchupValue][!Redraw]
Container=MeterContainerOthers
Group=Others
Hidden=1

[MeterSketchupInput]
Measure=Plugin
Plugin=InputText
SolidColor=#colorSecondary#
FontColor=#colorMain#
FontFace=#fontSecondary#
StringStyle=Italic
FontSize=13
X=10
Y=402
W=364
DefaultValue=#path26#
Command1=[!WriteKeyValue Variables path26 "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable path26 "[MeterSketchupInput]"][!UpdateMeter MeterSketchupValue][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerOthers
Group=Others

[MeterBlenderLabel]
Meter=String
Text=#text27#
MeterStyle=styleLabel
X=2
Y=10R
AntiAlias=1
Container=MeterContainerOthers
Group=Others

[MeterBlenderValue]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
DynamicVariables=1
Text=#path27#
LeftMouseUpAction=!CommandMeasure "MeterBlenderInput" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterBlenderValue FontColor #colorSecondary#][!UpdateMeter MeterBlenderValue][!Redraw]
MouseLeaveAction=[!SetOption MeterBlenderValue FontColor #colorMain#][!UpdateMeter MeterBlenderValue][!Redraw]
Container=MeterContainerOthers
Group=Others
Hidden=1

[MeterBlenderInput]
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
DefaultValue=#path27#
Command1=[!WriteKeyValue Variables path27 "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable path27 "[MeterBlenderInput]"][!UpdateMeter MeterBlenderValue][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerOthers
Group=Others

[MeterUnityLabel]
Meter=String
Text=#text28#
MeterStyle=styleLabel
X=2
Y=10R
AntiAlias=1
Container=MeterContainerOthers
Group=Others

[MeterUnityValue]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
DynamicVariables=1
Text=#path28#
LeftMouseUpAction=!CommandMeasure "MeterUnityInput" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterUnityValue FontColor #colorSecondary#][!UpdateMeter MeterUnityValue][!Redraw]
MouseLeaveAction=[!SetOption MeterUnityValue FontColor #colorMain#][!UpdateMeter MeterUnityValue][!Redraw]
Container=MeterContainerOthers
Group=Others
Hidden=1

[MeterUnityInput]
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
DefaultValue=#path28#
Command1=[!WriteKeyValue Variables path28 "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable path28 "[MeterUnityInput]"][!UpdateMeter MeterUnityValue][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerOthers
Group=Others

[MeterUtilities]
Meter=String
Text=Utilidades
MeterStyle=styleSubsection
X=0
Y=20R
AntiAlias=1
Container=MeterContainerOthers
Group=Others

[MeterMailLabel]
Meter=String
Text=#utility1text#
MeterStyle=styleLabel
X=2
Y=10R
AntiAlias=1
Container=MeterContainerOthers
Group=Others

[MeterMailValue]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
DynamicVariables=1
Text=#utility1path#
LeftMouseUpAction=!CommandMeasure "MeterMailInput" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterMailValue FontColor #colorSecondary#][!UpdateMeter MeterMailValue][!Redraw]
MouseLeaveAction=[!SetOption MeterMailValue FontColor #colorMain#][!UpdateMeter MeterMailValue][!Redraw]
Container=MeterContainerOthers
Group=Others
Hidden=1

[MeterMailInput]
Measure=Plugin
Plugin=InputText
SolidColor=#colorSecondary#
FontColor=#colorMain#
FontFace=#fontSecondary#
StringStyle=Italic
FontSize=13
X=10
Y=537
W=364
DefaultValue=#utility1path#
Command1=[!WriteKeyValue Variables utility1path "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable utility1path "[MeterMailInput]"][!UpdateMeter MeterMailValue][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerOthers
Group=Others

[MeterDownloadsLabel]
Meter=String
Text=#utility2text#
MeterStyle=styleLabel
X=2
Y=10R
AntiAlias=1
Container=MeterContainerOthers
Group=Others

[MeterDownloadsValue]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
DynamicVariables=1
Text=#utility2path#
LeftMouseUpAction=!CommandMeasure "MeterDownloadsInput" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterDownloadsValue FontColor #colorSecondary#][!UpdateMeter MeterDownloadsValue][!Redraw]
MouseLeaveAction=[!SetOption MeterDownloadsValue FontColor #colorMain#][!UpdateMeter MeterDownloadsValue][!Redraw]
Container=MeterContainerOthers
Group=Others
Hidden=1

[MeterDownloadsInput]
Measure=Plugin
Plugin=InputText
SolidColor=#colorSecondary#
FontColor=#colorMain#
FontFace=#fontSecondary#
StringStyle=Italic
FontSize=13
X=10
Y=563
W=364
DefaultValue=#utility2path#
Command1=[!WriteKeyValue Variables utility2path "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable utility2path "[MeterDownloadsInput]"][!UpdateMeter MeterDownloadsValue][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerOthers
Group=Others

[MeterTrashLabel]
Meter=String
Text=#utility3text#
MeterStyle=styleLabel
X=2
Y=10R
AntiAlias=1
Container=MeterContainerOthers
Group=Others

[MeterTrashValue]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
DynamicVariables=1
Text=#utility3path#
LeftMouseUpAction=!CommandMeasure "MeterTrashInput" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterTrashValue FontColor #colorSecondary#][!UpdateMeter MeterTrashValue][!Redraw]
MouseLeaveAction=[!SetOption MeterTrashValue FontColor #colorMain#][!UpdateMeter MeterTrashValue][!Redraw]
Container=MeterContainerOthers
Group=Others
Hidden=1

[MeterTrashInput]
Measure=Plugin
Plugin=InputText
SolidColor=#colorSecondary#
FontColor=#colorMain#
FontFace=#fontSecondary#
StringStyle=Italic
FontSize=13
X=10
Y=591
W=364
DefaultValue=#utility3path#
Command1=[!WriteKeyValue Variables utility3path "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable utility3path "[MeterTrashInput]"][!UpdateMeter MeterTrashValue][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerOthers
Group=Others