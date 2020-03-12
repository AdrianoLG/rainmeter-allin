[MeterLabelCPU]
Meter=String
MeterStyle=styleSystemLabel
X=10
Y=12R
W=30
Text=CPU

[MeterValueCPU]
Meter=String
MeterStyle=styleSystemValue
MeasureName=MeasureCPU
X=50R
Y=0r
W=30
Text=%1%
Percentual=1

[MeterBarCPU]
Meter=Bar
MeterStyle=styleSystemBar
BarOrientation=HORIZONTAL
MeasureName=MeasureCPU
X=-110R
Y=5R
W=80
H=3

[MeterLabelRAM]
Meter=String
MeterStyle=styleSystemLabel
X=50R
Y=-18r
W=30
Text=RAM

[MeterValueRAM]
Meter=String
MeterStyle=styleSystemValue
MeasureName=MeasureRAM
X=50R
Y=0r
W=30
Text=%1%
Percentual=1

[MeterBarRAM]
Meter=Bar
MeterStyle=styleSystemBar
BarOrientation=HORIZONTAL
MeasureName=MeasureRAM
X=-110R
Y=5R
W=80
H=3

[MeterDisk1Unit]
Meter=String
MeterStyle=styleDiskUnit
Text=#disk1#
X=-130r
Y=20R
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterDisk1Unit FontColor #colorSecondary#][!UpdateMeter MeterDisk1Unit][!Redraw][!SetOption MeterDisk1Percentage FontColor #colorSecondary#][!UpdateMeter MeterDisk1Percentage][!Redraw][!SetOption MeterUsedDisk1 LineColor #colorSecondary#][!UpdateMeter MeterUsedDisk1][!Redraw]
MouseLeaveAction=[!SetOption MeterDisk1Unit FontColor #colorMain#][!UpdateMeter MeterDisk1Unit][!Redraw][!SetOption MeterDisk1Percentage FontColor #colorMain#][!UpdateMeter MeterDisk1Percentage][!Redraw][!SetOption MeterUsedDisk1 LineColor #colorMain#][!UpdateMeter MeterUsedDisk1][!Redraw]
LeftMouseDownAction=["#disk1#"]
Group=MeterDisk1

[MeterDisk1Percentage]
Meter=String
MeasureName=MeasureUsedDisk1
MeterStyle=styleDiskPercentage
Text=%1%
Percentual=1
X=0r
Y=-1R
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterDisk1Unit FontColor #colorSecondary#][!UpdateMeter MeterDisk1Unit][!Redraw][!SetOption MeterDisk1Percentage FontColor #colorSecondary#][!UpdateMeter MeterDisk1Percentage][!Redraw][!SetOption MeterUsedDisk1 LineColor #colorSecondary#][!UpdateMeter MeterUsedDisk1][!Redraw]
MouseLeaveAction=[!SetOption MeterDisk1Unit FontColor #colorMain#][!UpdateMeter MeterDisk1Unit][!Redraw][!SetOption MeterDisk1Percentage FontColor #colorMain#][!UpdateMeter MeterDisk1Percentage][!Redraw][!SetOption MeterUsedDisk1 LineColor #colorMain#][!UpdateMeter MeterUsedDisk1][!Redraw]
LeftMouseDownAction=["#disk1#"]
Group=MeterDisk1

[MeterUsedDisk1]
Meter=Roundline
MeasureName=MeasureUsedDisk1
X=5R
Y=-10r
W=20
H=20
StartAngle=(Rad(270))
RotationAngle=(Rad(-360))
LineLength=10
LineColor=#colorMain#
Solid=1
AntiAlias=1
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterDisk1Unit FontColor #colorSecondary#][!UpdateMeter MeterDisk1Unit][!Redraw][!SetOption MeterDisk1Percentage FontColor #colorSecondary#][!UpdateMeter MeterDisk1Percentage][!Redraw][!SetOption MeterUsedDisk1 LineColor #colorSecondary#][!UpdateMeter MeterUsedDisk1][!Redraw]
MouseLeaveAction=[!SetOption MeterDisk1Unit FontColor #colorMain#][!UpdateMeter MeterDisk1Unit][!Redraw][!SetOption MeterDisk1Percentage FontColor #colorMain#][!UpdateMeter MeterDisk1Percentage][!Redraw][!SetOption MeterUsedDisk1 LineColor #colorMain#][!UpdateMeter MeterUsedDisk1][!Redraw]
LeftMouseDownAction=["#disk1#"]
Group=MeterDisk1

[MeterDisk2Unit]
Meter=String
MeterStyle=styleDiskUnit
Text=#disk2#
X=30R
Y=-4r
RegExpSubstitute=1
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterDisk2Unit FontColor #colorSecondary#][!UpdateMeter MeterDisk2Unit][!Redraw][!SetOption MeterDisk2Percentage FontColor #colorSecondary#][!UpdateMeter MeterDisk2Percentage][!Redraw][!SetOption MeterUsedDisk2 LineColor #colorSecondary#][!UpdateMeter MeterUsedDisk2][!Redraw]
MouseLeaveAction=[!SetOption MeterDisk2Unit FontColor #colorMain#][!UpdateMeter MeterDisk2Unit][!Redraw][!SetOption MeterDisk2Percentage FontColor #colorMain#][!UpdateMeter MeterDisk2Percentage][!Redraw][!SetOption MeterUsedDisk2 LineColor #colorMain#][!UpdateMeter MeterUsedDisk2][!Redraw]
LeftMouseDownAction=["#disk2#"]
Group=MeterDisk2

[MeterDisk2Percentage]
Meter=String
MeasureName=MeasureUsedDisk2
MeterStyle=styleDiskPercentage
Text=%1%
Percentual=1
X=0r
Y=-1R
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterDisk2Unit FontColor #colorSecondary#][!UpdateMeter MeterDisk2Unit][!Redraw][!SetOption MeterDisk2Percentage FontColor #colorSecondary#][!UpdateMeter MeterDisk2Percentage][!Redraw][!SetOption MeterUsedDisk2 LineColor #colorSecondary#][!UpdateMeter MeterUsedDisk2][!Redraw]
MouseLeaveAction=[!SetOption MeterDisk2Unit FontColor #colorMain#][!UpdateMeter MeterDisk2Unit][!Redraw][!SetOption MeterDisk2Percentage FontColor #colorMain#][!UpdateMeter MeterDisk2Percentage][!Redraw][!SetOption MeterUsedDisk2 LineColor #colorMain#][!UpdateMeter MeterUsedDisk2][!Redraw]
Group=MeterDisk2

[MeterUsedDisk2]
Meter=Roundline
MeasureName=MeasureUsedDisk2
X=5R
Y=-10r
W=20
H=20
StartAngle=(Rad(270))
RotationAngle=(Rad(-360))
LineLength=10
LineColor=#colorMain#
Solid=1
AntiAlias=1
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterDisk2Unit FontColor #colorSecondary#][!UpdateMeter MeterDisk2Unit][!Redraw][!SetOption MeterDisk2Percentage FontColor #colorSecondary#][!UpdateMeter MeterDisk2Percentage][!Redraw][!SetOption MeterUsedDisk2 LineColor #colorSecondary#][!UpdateMeter MeterUsedDisk2][!Redraw]
MouseLeaveAction=[!SetOption MeterDisk2Unit FontColor #colorMain#][!UpdateMeter MeterDisk2Unit][!Redraw][!SetOption MeterDisk2Percentage FontColor #colorMain#][!UpdateMeter MeterDisk2Percentage][!Redraw][!SetOption MeterUsedDisk2 LineColor #colorMain#][!UpdateMeter MeterUsedDisk2][!Redraw]
LeftMouseDownAction=["#disk2#"]
Group=MeterDisk2

[MeterDisk3Unit]
Meter=String
MeterStyle=styleDiskUnit
Text=#disk3#
X=30R
Y=-5r
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterDisk3Unit FontColor #colorSecondary#][!UpdateMeter MeterDisk3Unit][!Redraw][!SetOption MeterDisk3Percentage FontColor #colorSecondary#][!UpdateMeter MeterDisk3Percentage][!Redraw][!SetOption MeterUsedDisk3 LineColor #colorSecondary#][!UpdateMeter MeterUsedDisk3][!Redraw]
MouseLeaveAction=[!SetOption MeterDisk3Unit FontColor #colorMain#][!UpdateMeter MeterDisk3Unit][!Redraw][!SetOption MeterDisk3Percentage FontColor #colorMain#][!UpdateMeter MeterDisk3Percentage][!Redraw][!SetOption MeterUsedDisk3 LineColor #colorMain#][!UpdateMeter MeterUsedDisk3][!Redraw]
LeftMouseDownAction=["#disk3#"]
Group=MeterDisk3

[MeterDisk3Percentage]
Meter=String
MeasureName=MeasureUsedDisk3
MeterStyle=styleDiskPercentage
Text=%1%
Percentual=1
X=0r
Y=-1R
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterDisk3Unit FontColor #colorSecondary#][!UpdateMeter MeterDisk3Unit][!Redraw][!SetOption MeterDisk3Percentage FontColor #colorSecondary#][!UpdateMeter MeterDisk3Percentage][!Redraw][!SetOption MeterUsedDisk3 LineColor #colorSecondary#][!UpdateMeter MeterUsedDisk3][!Redraw]
MouseLeaveAction=[!SetOption MeterDisk3Unit FontColor #colorMain#][!UpdateMeter MeterDisk3Unit][!Redraw][!SetOption MeterDisk3Percentage FontColor #colorMain#][!UpdateMeter MeterDisk3Percentage][!Redraw][!SetOption MeterUsedDisk3 LineColor #colorMain#][!UpdateMeter MeterUsedDisk3][!Redraw]
LeftMouseDownAction=["#disk3#"]
Group=MeterDisk3

[MeterUsedDisk3]
Meter=Roundline
MeasureName=MeasureUsedDisk3
X=5R
Y=-10r
W=20
H=20
StartAngle=(Rad(270))
RotationAngle=(Rad(-360))
LineLength=10
LineColor=#colorMain#
Solid=1
AntiAlias=1
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterDisk3Unit FontColor #colorSecondary#][!UpdateMeter MeterDisk3Unit][!Redraw][!SetOption MeterDisk3Percentage FontColor #colorSecondary#][!UpdateMeter MeterDisk3Percentage][!Redraw][!SetOption MeterUsedDisk3 LineColor #colorSecondary#][!UpdateMeter MeterUsedDisk3][!Redraw]
MouseLeaveAction=[!SetOption MeterDisk3Unit FontColor #colorMain#][!UpdateMeter MeterDisk3Unit][!Redraw][!SetOption MeterDisk3Percentage FontColor #colorMain#][!UpdateMeter MeterDisk3Percentage][!Redraw][!SetOption MeterUsedDisk3 LineColor #colorMain#][!UpdateMeter MeterUsedDisk3][!Redraw]
LeftMouseDownAction=["#disk3#"]
Group=MeterDisk3

[MeterUploadIcon]
Meter=Image
ImageName=#uploadIcon#
X=85R
Y=-30r

[MeterUploadText]
Meter=String
MeterStyle=styleSystemLabel
MeasureName=MeasureUpload
Text=%1Mb/s
Scale=(1024**2)
NumOfDecimals=2
X=5R
Y=2r

[MeterDownloadIcon]
Meter=Image
ImageName=#downloadIcon#
X=-67R
Y=10R

[MeterDownloadText]
Meter=String
MeterStyle=styleSystemLabel
MeasureName=MeasureDownload
Text=%1Mb/s
Scale=(1024**2)
NumOfDecimals=2
X=5R
Y=0r