[MeterSeparationLine1]
Meter=Image
X=0
Y=1R
W=364
H=1
SolidColor=255,255,255,50
Container=MeterContainerGeneral
Group=General

[MeterSubsectionLabel1]
Meter=String
Text=Tiempo
MeterStyle=styleSubsection
X=0
Y=12R
Container=MeterContainerGeneral
Group=General

[MeterTokenLabel]
Meter=String
Text=Token:
MeterStyle=styleLabel
X=2
Y=15R
AntiAlias=1
Container=MeterContainerGeneral
Group=General

[MeterTokenValue]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
DynamicVariables=1
Text=#token#
LeftMouseUpAction=!CommandMeasure "MeasureTokenInput" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterTokenValue FontColor #colorSecondary#][!UpdateMeter MeterTokenValue][!Redraw]
MouseLeaveAction=[!SetOption MeterTokenValue FontColor #colorMain#][!UpdateMeter MeterTokenValue][!Redraw]
Container=MeterContainerGeneral
Group=General

[MeasureTokenInput]
Measure=Plugin
Plugin=InputText
SolidColor=#colorSecondary#
FontColor=#colorMain#
FontFace=#fontSecondary#
StringStyle=Italic
FontSize=13
X=10
Y=188
W=364
DefaultValue=#token#
Command1=[!WriteKeyValue Variables token "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable token "[MeasureTokenInput]"][!UpdateMeter MeterTokenValue][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerGeneral
Group=General

[MeterCityLabel]
Meter=String
Text=Código de ciudad:
MeterStyle=styleLabel
X=2
Y=10R
AntiAlias=1
Container=MeterContainerGeneral
Group=General

[MeterCityValue]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
DynamicVariables=1
Text=#city#
LeftMouseUpAction=!CommandMeasure "MeasureCityInput" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterCityValue FontColor #colorSecondary#][!UpdateMeter MeterCityValue][!Redraw]
MouseLeaveAction=[!SetOption MeterCityValue FontColor #colorMain#][!UpdateMeter MeterCityValue][!Redraw]
Container=MeterContainerGeneral
Group=General

[MeasureCityInput]
Measure=Plugin
Plugin=InputText
SolidColor=#colorSecondary#
FontColor=#colorMain#
FontFace=#fontSecondary#
StringStyle=Italic
FontSize=13
X=10
Y=212
W=364
DefaultValue=#city#
Command1=[!WriteKeyValue Variables city "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable city "[MeasureCityInput]"][!UpdateMeter MeterCityValue][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerGeneral
Group=General

[MeterUnitOfMeasureLabel]
Meter=String
Text=Unidad de medida:
MeterStyle=styleLabel
X=2
Y=10R
AntiAlias=1
Container=MeterContainerGeneral
Group=General

[MeterUnitOfMeasureMetric]
Meter=String
Text=Métrico
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
LeftMouseUpAction=[!WriteKeyValue Variables units "metric" "#@#Settings.inc"][!WriteKeyValue Variables grades "ºC" "#@#Settings.inc"][!WriteKeyValue Variables suffix "km/h" "#@#Settings.inc"][!Refresh "rainmeter-allin" "Allin.ini"]
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterUnitOfMeasureMetric FontColor #colorSecondary#][!UpdateMeter MeterUnitOfMeasureMetric][!Redraw]
MouseLeaveAction=[!SetOption MeterUnitOfMeasureMetric FontColor #colorMain#][!UpdateMeter MeterUnitOfMeasureMetric][!Redraw]
Container=MeterContainerGeneral
Group=General

[MeterUnitOfMeasureImperial]
Meter=String
Text=Imperial
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
LeftMouseUpAction=[!WriteKeyValue Variables units "" "#@#Settings.inc"][!WriteKeyValue Variables grades "ºF" "#@#Settings.inc"][!WriteKeyValue Variables suffix "mph" "#@#Settings.inc"][!Refresh "rainmeter-allin" "Allin.ini"]
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterUnitOfMeasureImperial FontColor #colorSecondary#][!UpdateMeter MeterUnitOfMeasureImperial][!Redraw]
MouseLeaveAction=[!SetOption MeterUnitOfMeasureImperial FontColor #colorMain#][!UpdateMeter MeterUnitOfMeasureImperial][!Redraw]
Container=MeterContainerGeneral
Group=General

[MeterSubsectionLabel2]
Meter=String
Text=Música
MeterStyle=styleSubsection
X=0
Y=20R
Container=MeterContainerGeneral
Group=General

[MeterPlayer]
Meter=String
Text=Reproductor:
MeterStyle=styleLabel
X=2
Y=15R
AntiAlias=1
Container=MeterContainerGeneral
Group=General

[MeterPlayerAIMP]
Meter=String
Text=AIMP
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
LeftMouseUpAction=[!WriteKeyValue Variables player "AIMP" "#@#Settings.inc"][!Refresh "rainmeter-allin" "Allin.ini"]
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterPlayerAIMP FontColor #colorSecondary#][!UpdateMeter MeterPlayerAIMP][!Redraw]
MouseLeaveAction=[!SetOption MeterPlayerAIMP FontColor #colorMain#][!UpdateMeter MeterPlayerAIMP][!Redraw]
Container=MeterContainerGeneral
Group=General

[MeterPlayeriTunes]
Meter=String
Text=iTunes
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
LeftMouseUpAction=[!WriteKeyValue Variables player "iTunes" "#@#Settings.inc"][!Refresh "rainmeter-allin" "Allin.ini"]
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterPlayeriTunes FontColor #colorSecondary#][!UpdateMeter MeterPlayeriTunes][!Redraw]
MouseLeaveAction=[!SetOption MeterPlayeriTunes FontColor #colorMain#][!UpdateMeter MeterPlayeriTunes][!Redraw]
Container=MeterContainerGeneral
Group=General

[MeterPlayerMediaMonkey]
Meter=String
Text=MediaMonkey
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
LeftMouseUpAction=[!WriteKeyValue Variables player "MediaMonkey" "#@#Settings.inc"][!Refresh "rainmeter-allin" "Allin.ini"]
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterPlayerMediaMonkey FontColor #colorSecondary#][!UpdateMeter MeterPlayerMediaMonkey][!Redraw]
MouseLeaveAction=[!SetOption MeterPlayerMediaMonkey FontColor #colorMain#][!UpdateMeter MeterPlayerMediaMonkey][!Redraw]
Container=MeterContainerGeneral
Group=General

[MeterPlayerSpotify]
Meter=String
Text=Spotify
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
LeftMouseUpAction=[!WriteKeyValue Variables player "Spotify" "#@#Settings.inc"][!Refresh "rainmeter-allin" "Allin.ini"]
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterPlayerSpotify FontColor #colorSecondary#][!UpdateMeter MeterPlayerSpotify][!Redraw]
MouseLeaveAction=[!SetOption MeterPlayerSpotify FontColor #colorMain#][!UpdateMeter MeterPlayerSpotify][!Redraw]
Container=MeterContainerGeneral
Group=General

[MeterPlayerWinamp]
Meter=String
Text=Winamp
MeterStyle=styleLabel
X=101
Y=6R
AntiAlias=1
LeftMouseUpAction=[!WriteKeyValue Variables player "Winamp" "#@#Settings.inc"][!Refresh "rainmeter-allin" "Allin.ini"]
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterPlayerWinamp FontColor #colorSecondary#][!UpdateMeter MeterPlayerWinamp][!Redraw]
MouseLeaveAction=[!SetOption MeterPlayerWinamp FontColor #colorMain#][!UpdateMeter MeterPlayerWinamp][!Redraw]
Container=MeterContainerGeneral
Group=General

[MeterPlayerWMP]
Meter=String
Text=WMP
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
LeftMouseUpAction=[!WriteKeyValue Variables player "WMP" "#@#Settings.inc"][!Refresh "rainmeter-allin" "Allin.ini"]
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterPlayerWMP FontColor #colorSecondary#][!UpdateMeter MeterPlayerWMP][!Redraw]
MouseLeaveAction=[!SetOption MeterPlayerWMP FontColor #colorMain#][!UpdateMeter MeterPlayerWMP][!Redraw]
Container=MeterContainerGeneral
Group=General

[MeterPlayerOthers]
Meter=String
Text=Otros
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
LeftMouseUpAction=[!WriteKeyValue Variables player "CAD" "#@#Settings.inc"][!Refresh "rainmeter-allin" "Allin.ini"]
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterPlayerOthers FontColor #colorSecondary#][!UpdateMeter MeterPlayerOthers][!Redraw]
MouseLeaveAction=[!SetOption MeterPlayerOthers FontColor #colorMain#][!UpdateMeter MeterPlayerOthers][!Redraw]
Container=MeterContainerGeneral
Group=General

[MeterPlayerOthers2]
Meter=String
Text=Otros 2
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
LeftMouseUpAction=[!WriteKeyValue Variables player "WLM" "#@#Settings.inc"][!Refresh "rainmeter-allin" "Allin.ini"]
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterPlayerOthers2 FontColor #colorSecondary#][!UpdateMeter MeterPlayerOthers2][!Redraw]
MouseLeaveAction=[!SetOption MeterPlayerOthers2 FontColor #colorMain#][!UpdateMeter MeterPlayerOthers2][!Redraw]
Container=MeterContainerGeneral
Group=General

[MeterSubsectionLabel3]
Meter=String
Text=Sistema
MeterStyle=styleSubsection
X=0
Y=20R
Container=MeterContainerGeneral
Group=General

[MeterDisk1]
Meter=String
Text=Disco 1:
MeterStyle=styleLabel
X=2
Y=15R
AntiAlias=1
Container=MeterContainerGeneral
Group=General
LeftMouseUpAction=!CommandMeasure "MeasureDisk1Input" "ExecuteBatch 1-3"

[MeterDisk1Value]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
H=18
AntiAlias=1
DynamicVariables=1
Text=#disk1#
LeftMouseUpAction=!CommandMeasure "MeasureDisk1Input" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterDisk1Value FontColor #colorSecondary#][!UpdateMeter MeterDisk1Value][!Redraw]
MouseLeaveAction=[!SetOption MeterDisk1Value FontColor #colorMain#][!UpdateMeter MeterDisk1Value][!Redraw]
Container=MeterContainerGeneral
Group=General

[MeasureDisk1Input]
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
DefaultValue=#disk1#
Command1=[!WriteKeyValue Variables disk1 "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable disk1 "[MeasureDisk1Input]"][!UpdateMeter MeterDisk1Value][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerGeneral
Group=General

[MeterDisk2]
Meter=String
Text=Disco 2:
MeterStyle=styleLabel
X=2
Y=15R
AntiAlias=1
LeftMouseUpAction=!CommandMeasure "MeasureDisk2Input" "ExecuteBatch 1-3"
Container=MeterContainerGeneral
Group=General

[MeterDisk2Value]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
H=18
AntiAlias=1
DynamicVariables=1
Text=#disk2#
LeftMouseUpAction=!CommandMeasure "MeasureDisk2Input" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterDisk2Value FontColor #colorSecondary#][!UpdateMeter MeterDisk2Value][!Redraw]
MouseLeaveAction=[!SetOption MeterDisk2Value FontColor #colorMain#][!UpdateMeter MeterDisk2Value][!Redraw]
Container=MeterContainerGeneral
Group=General

[MeasureDisk2Input]
Measure=Plugin
Plugin=InputText
SolidColor=#colorSecondary#
FontColor=#colorMain#
FontFace=#fontSecondary#
StringStyle=Italic
FontSize=13
X=10
Y=432
W=364
DefaultValue=#disk2#
Command1=[!WriteKeyValue Variables disk2 "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable disk2 "[MeasureDisk2Input]"][!UpdateMeter MeterDisk2Value][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerGeneral
Group=General

[MeterDisk3]
Meter=String
Text=Disco 3:
MeterStyle=styleLabel
X=2
Y=15R
AntiAlias=1
LeftMouseDownAction=!CommandMeasure "MeasureDisk3Input" "ExecuteBatch 1-3"
Container=MeterContainerGeneral
Group=General

[MeterDisk3Value]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
H=18
AntiAlias=1
DynamicVariables=1
Text=#disk3#
LeftMouseDownAction=!CommandMeasure "MeasureDisk3Input" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterDisk3Value FontColor #colorSecondary#][!UpdateMeter MeterDisk3Value][!Redraw]
MouseLeaveAction=[!SetOption MeterDisk3Value FontColor #colorMain#][!UpdateMeter MeterDisk3Value][!Redraw]
Container=MeterContainerGeneral
Group=General

[MeasureDisk3Input]
Measure=Plugin
Plugin=InputText
SolidColor=#colorSecondary#
FontColor=#colorMain#
FontFace=#fontSecondary#
StringStyle=Italic
FontSize=13
X=10
Y=466
W=364
DefaultValue=#disk3#
Command1=[!WriteKeyValue Variables disk3 "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable disk3 "[MeasureDisk3Input]"][!UpdateMeter MeterDisk3Value][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerGeneral
Group=General

[MeterDisk4]
Meter=String
Text=Disco 4:
MeterStyle=styleLabel
X=2
Y=15R
AntiAlias=1
LeftMouseDownAction=!CommandMeasure "MeasureDisk4Input" "ExecuteBatch 1-3"
Container=MeterContainerGeneral
Group=General

[MeterDisk4Value]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
H=18
AntiAlias=1
DynamicVariables=1
Text=#disk4#
LeftMouseDownAction=!CommandMeasure "MeasureDisk4Input" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterDisk4Value FontColor #colorSecondary#][!UpdateMeter MeterDisk4Value][!Redraw]
MouseLeaveAction=[!SetOption MeterDisk4Value FontColor #colorMain#][!UpdateMeter MeterDisk4Value][!Redraw]
Container=MeterContainerGeneral
Group=General

[MeasureDisk4Input]
Measure=Plugin
Plugin=InputText
SolidColor=#colorSecondary#
FontColor=#colorMain#
FontFace=#fontSecondary#
StringStyle=Italic
FontSize=13
X=10
Y=466
W=364
DefaultValue=#disk4#
Command1=[!WriteKeyValue Variables disk4 "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable disk4 "[MeasureDisk4Input]"][!UpdateMeter MeterDisk4Value][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerGeneral
Group=General

[MeterSubsectionLabel4]
Meter=String
Text=Fondos de pantalla
MeterStyle=styleSubsection
X=0
Y=20R
Container=MeterContainerGeneral
Group=General

[Wallpaper1]
Meter=String
Text=Amanecer:
MeterStyle=styleLabel
X=2
Y=15R
AntiAlias=1
Container=MeterContainerGeneral
Group=General

[Wallpaper1Value]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
DynamicVariables=1
Text=#wallpaperSunrise#
LeftMouseUpAction=!CommandMeasure "Wallpaper1Input" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption Wallpaper1Value FontColor #colorSecondary#][!UpdateMeter Wallpaper1Value][!Redraw]
MouseLeaveAction=[!SetOption Wallpaper1Value FontColor #colorMain#][!UpdateMeter Wallpaper1Value][!Redraw]
Container=MeterContainerGeneral
Group=General

[Wallpaper1Input]
Measure=Plugin
Plugin=InputText
SolidColor=#colorSecondary#
FontColor=#colorMain#
FontFace=#fontSecondary#
StringStyle=Italic
FontSize=13
X=10
Y=538
W=364
DefaultValue=#wallpaperSunrise#
Command1=[!WriteKeyValue Variables wallpaperSunrise "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable wallpaperSunrise "[Wallpaper1Input]"][!UpdateMeter Wallpaper1Value][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerGeneral
Group=General

[Wallpaper2]
Meter=String
Text=Día:
MeterStyle=styleLabel
X=2
Y=15R
AntiAlias=1
Container=MeterContainerGeneral
Group=General

[Wallpaper2Value]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
DynamicVariables=1
Text=#wallpaperDay#
LeftMouseUpAction=!CommandMeasure "Wallpaper2Input" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption Wallpaper2Value FontColor #colorSecondary#][!UpdateMeter Wallpaper2Value][!Redraw]
MouseLeaveAction=[!SetOption Wallpaper2Value FontColor #colorMain#][!UpdateMeter Wallpaper2Value][!Redraw]
Container=MeterContainerGeneral
Group=General

[Wallpaper2Input]
Measure=Plugin
Plugin=InputText
SolidColor=#colorSecondary#
FontColor=#colorMain#
FontFace=#fontSecondary#
StringStyle=Italic
FontSize=13
X=10
Y=568
W=364
DefaultValue=#wallpaperDay#
Command1=[!WriteKeyValue Variables wallpaperDay "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable wallpaperDay "[Wallpaper2Input]"][!UpdateMeter Wallpaper2Value][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerGeneral
Group=General

[Wallpaper3]
Meter=String
Text=Atardecer:
MeterStyle=styleLabel
X=2
Y=15R
AntiAlias=1
Container=MeterContainerGeneral
Group=General

[Wallpaper3Value]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
DynamicVariables=1
Text=#wallpaperSunset#
LeftMouseUpAction=!CommandMeasure "Wallpaper3Input" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption Wallpaper3Value FontColor #colorSecondary#][!UpdateMeter Wallpaper3Value][!Redraw]
MouseLeaveAction=[!SetOption Wallpaper3Value FontColor #colorMain#][!UpdateMeter Wallpaper3Value][!Redraw]
Container=MeterContainerGeneral
Group=General

[Wallpaper3Input]
Measure=Plugin
Plugin=InputText
SolidColor=#colorSecondary#
FontColor=#colorMain#
FontFace=#fontSecondary#
StringStyle=Italic
FontSize=13
X=10
Y=599
W=364
DefaultValue=#wallpaperSunset#
Command1=[!WriteKeyValue Variables wallpaperSunset "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable wallpaperSunset "[Wallpaper3Input]"][!UpdateMeter Wallpaper3Value][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerGeneral
Group=General

[Wallpaper4]
Meter=String
Text=Noche:
MeterStyle=styleLabel
X=2
Y=15R
AntiAlias=1
Container=MeterContainerGeneral
Group=General

[Wallpaper4Value]
Meter=String
MeterStyle=styleLabel
X=5R
Y=0r
AntiAlias=1
DynamicVariables=1
Text=#wallpaperNight#
LeftMouseUpAction=!CommandMeasure "Wallpaper4Input" "ExecuteBatch 1-3"
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption Wallpaper4Value FontColor #colorSecondary#][!UpdateMeter Wallpaper4Value][!Redraw]
MouseLeaveAction=[!SetOption Wallpaper4Value FontColor #colorMain#][!UpdateMeter Wallpaper4Value][!Redraw]
Container=MeterContainerGeneral
Group=General

[Wallpaper4Input]
Measure=Plugin
Plugin=InputText
SolidColor=#colorSecondary#
FontColor=#colorMain#
FontFace=#fontSecondary#
StringStyle=Italic
FontSize=13
X=10
Y=632
W=364
DefaultValue=#wallpaperNight#
Command1=[!WriteKeyValue Variables wallpaperNight "$UserInput$" "#@#Settings.inc"]
Command2=[!SetVariable wallpaperNight "[Wallpaper4Input]"][!UpdateMeter Wallpaper4Value][!Redraw]
Command3=[!Refresh "rainmeter-allin" "Allin.ini"]
Container=MeterContainerGeneral
Group=General