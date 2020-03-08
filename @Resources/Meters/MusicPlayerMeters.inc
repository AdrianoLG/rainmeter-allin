[MeterMusicCover]
Meter=Image
MeterStyle=styleMusicCover
MeasureName=MeasureMusicCover
X=10
Y=12r
W=90
H=90
Group=Music

[MeterMusicArtist]
Meter=String
MeterStyle=styleMusicArtist
MeasureName=MeasureMusicArtist
Text=%1
X=8R
Y=-3r
W=275
Group=Music

[MeterMusicAlbum]
Meter=String
MeterStyle=styleMusicAlbum
MeasureName=MeasureMusicAlbum
Text=%1
X=0r
Y=1R
W=275
Group=Music

[MeterMusicTitle]
Meter=String
MeterStyle=styleMusicTitle
MeasureName=MeasureMusicTitle
Text=%1
X=0r
Y=4R
W=275
Group=Music

[MeterMusicProgressTrack]
Meter=Bar
MeasureName=MeasureMusicProgress
BarOrientation=HORIZONTAL
SolidColor=0,0,0,10
BarColor=#colorPrimary#
X=0r
Y=32R
W=265
H=5
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterMusicProgressTrack BarColor #colorSecondary#][!UpdateMeter MeterMusicProgressTrack][!Redraw]
MouseLeaveAction=[!SetOption MeterMusicProgressTrack BarColor #colorPrimary#][!UpdateMeter MeterMusicProgressTrack][!Redraw]
LeftMouseDownAction=[!CommandMeasure "#MeasureMusicTitle#" "SetPosition $MouseX:%$"][!Update][!Redraw]
DynamicVariables=1
Group=Music

[MeterMusicStop]
Meter=Image
ImageName=#iconsPath#\player\stop.png
X=0r
Y=-25R
W=15
H=15
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterMusicStop ImageName #iconsPath#\player\stopH.png][!UpdateMeter MeterMusicStop][!Redraw]
MouseLeaveAction=[!SetOption MeterMusicStop ImageName #iconsPath#\player\stop.png][!UpdateMeter MeterMusicStop][!Redraw]
LeftMouseUpAction=[!CommandMeasure "MeasureMusicTitle" "Stop"]
Group=Music

[MeterMusicPlay]
Meter=Image
ImageName=#iconsPath#\player\play.png
X=5R
Y=0r
W=15
H=15
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterMusicPlay ImageName #iconsPath#\player\playH.png][!UpdateMeter MeterMusicPlay][!Redraw]
MouseLeaveAction=[!SetOption MeterMusicPlay ImageName #iconsPath#\player\play.png][!UpdateMeter MeterMusicPlay][!Redraw]
LeftMouseUpAction=[!CommandMeasure "MeasureMusicTitle" "Play"]
Group=Music

[MeterMusicPrevious]
Meter=Image
ImageName=#iconsPath#\player\previous.png
X=194R
Y=0r
W=15
H=15
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterMusicPrevious ImageName #iconsPath#\player\previousH.png][!UpdateMeter MeterMusicPrevious][!Redraw]
MouseLeaveAction=[!SetOption MeterMusicPrevious ImageName #iconsPath#\player\previous.png][!UpdateMeter MeterMusicPrevious][!Redraw]
LeftMouseUpAction=[!CommandMeasure "MeasureMusicTitle" "Previous"]
Group=Music

[MeterMusicNext]
Meter=Image
ImageName=#iconsPath#\player\next.png
X=5R
Y=0r
W=15
H=15
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterMusicNext ImageName #iconsPath#\player\nextH.png][!UpdateMeter MeterMusicNext][!Redraw]
MouseLeaveAction=[!SetOption MeterMusicNext ImageName #iconsPath#\player\next.png][!UpdateMeter MeterMusicNext][!Redraw]
LeftMouseUpAction=[!CommandMeasure "MeasureMusicTitle" "Next"]
Group=Music

[MeterAlbum1]
Meter=Image
ImageName=#coversPath#\#album1#
X=10
Y=-10r
W=45
H=45
ImageAlpha=200
Group=MusicLists
LeftMouseUpAction=["#album1path#"]
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterAlbum1 ImageAlpha 255][!UpdateMeter MeterAlbum1][!Redraw]
MouseLeaveAction=[!SetOption MeterAlbum1 ImageAlpha 200][!UpdateMeter MeterAlbum1][!Redraw]

[MeterAlbum2]
Meter=Image
ImageName=#coversPath#\#album2#
X=0R
Y=0r
W=45
H=45
ImageAlpha=200
Group=MusicLists
LeftMouseUpAction=["#album2path#"]
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterAlbum2 ImageAlpha 255][!UpdateMeter MeterAlbum2][!Redraw]
MouseLeaveAction=[!SetOption MeterAlbum2 ImageAlpha 200][!UpdateMeter MeterAlbum2][!Redraw]

[MeterAlbum3]
Meter=Image
ImageName=#coversPath#\#album3#
X=0R
Y=0r
W=45
H=45
ImageAlpha=200
Group=MusicLists
LeftMouseUpAction=["#album3path#"]
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterAlbum3 ImageAlpha 255][!UpdateMeter MeterAlbum3][!Redraw]
MouseLeaveAction=[!SetOption MeterAlbum3 ImageAlpha 200][!UpdateMeter MeterAlbum3][!Redraw]

[MeterAlbum4]
Meter=Image
ImageName=#coversPath#\#album4#
X=0R
Y=0r
W=45
H=45
ImageAlpha=200
Group=MusicLists
LeftMouseUpAction=["#album4path#"]
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterAlbum4 ImageAlpha 255][!UpdateMeter MeterAlbum4][!Redraw]
MouseLeaveAction=[!SetOption MeterAlbum4 ImageAlpha 200][!UpdateMeter MeterAlbum4][!Redraw]

[MeterAlbum5]
Meter=Image
ImageName=#coversPath#\#album5#
X=0R
Y=0r
W=45
H=45
ImageAlpha=200
Group=MusicLists
LeftMouseUpAction=["#album5path#"]
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterAlbum5 ImageAlpha 255][!UpdateMeter MeterAlbum5][!Redraw]
MouseLeaveAction=[!SetOption MeterAlbum5 ImageAlpha 200][!UpdateMeter MeterAlbum5][!Redraw]

[MeterAlbum6]
Meter=Image
ImageName=#coversPath#\#album6#
X=0R
Y=0r
W=45
H=45
ImageAlpha=200
Group=MusicLists
LeftMouseUpAction=["#album6path#"]
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterAlbum6 ImageAlpha 255][!UpdateMeter MeterAlbum6][!Redraw]
MouseLeaveAction=[!SetOption MeterAlbum6 ImageAlpha 200][!UpdateMeter MeterAlbum6][!Redraw]

[MeterAlbum7]
Meter=Image
ImageName=#coversPath#\#album7#
X=0R
Y=0r
W=45
H=45
ImageAlpha=200
Group=MusicLists
LeftMouseUpAction=["#album7path#"]
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterAlbum7 ImageAlpha 255][!UpdateMeter MeterAlbum7][!Redraw]
MouseLeaveAction=[!SetOption MeterAlbum7 ImageAlpha 200][!UpdateMeter MeterAlbum7][!Redraw]

[MeterAlbum8]
Meter=Image
ImageName=#coversPath#\#album8#
X=0R
Y=0r
W=45
H=45
ImageAlpha=200
Group=MusicLists
LeftMouseUpAction=["#album8path#"]
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterAlbum8 ImageAlpha 255][!UpdateMeter MeterAlbum8][!Redraw]
MouseLeaveAction=[!SetOption MeterAlbum8 ImageAlpha 200][!UpdateMeter MeterAlbum8][!Redraw]

[MeterAlbum9]
Meter=Image
ImageName=#coversPath#\#album9#
X=-360R
Y=0R
W=45
H=45
ImageAlpha=200
Group=MusicLists
LeftMouseUpAction=["#album9path#"]
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterAlbum9 ImageAlpha 255][!UpdateMeter MeterAlbum9][!Redraw]
MouseLeaveAction=[!SetOption MeterAlbum9 ImageAlpha 200][!UpdateMeter MeterAlbum9][!Redraw]

[MeterAlbum10]
Meter=Image
ImageName=#coversPath#\#album10#
X=0R
Y=0r
W=45
H=45
ImageAlpha=200
Group=MusicLists
LeftMouseUpAction=["#album10path#"]
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterAlbum10 ImageAlpha 255][!UpdateMeter MeterAlbum10][!Redraw]
MouseLeaveAction=[!SetOption MeterAlbum10 ImageAlpha 200][!UpdateMeter MeterAlbum10][!Redraw]

[MeterAlbum11]
Meter=Image
ImageName=#coversPath#\#album11#
X=0R
Y=0r
W=45
H=45
ImageAlpha=200
Group=MusicLists
LeftMouseUpAction=["#album11path#"]
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterAlbum11 ImageAlpha 255][!UpdateMeter MeterAlbum11][!Redraw]
MouseLeaveAction=[!SetOption MeterAlbum11 ImageAlpha 200][!UpdateMeter MeterAlbum11][!Redraw]

[MeterAlbum12]
Meter=Image
ImageName=#coversPath#\#album12#
X=0R
Y=0r
W=45
H=45
ImageAlpha=200
Group=MusicLists
LeftMouseUpAction=["#album12path#"]
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterAlbum12 ImageAlpha 255][!UpdateMeter MeterAlbum12][!Redraw]
MouseLeaveAction=[!SetOption MeterAlbum12 ImageAlpha 200][!UpdateMeter MeterAlbum12][!Redraw]

[MeterAlbum13]
Meter=Image
ImageName=#coversPath#\#album13#
X=0R
Y=0r
W=45
H=45
ImageAlpha=200
Group=MusicLists
LeftMouseUpAction=["#album13path#"]
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterAlbum13 ImageAlpha 255][!UpdateMeter MeterAlbum13][!Redraw]
MouseLeaveAction=[!SetOption MeterAlbum13 ImageAlpha 200][!UpdateMeter MeterAlbum13][!Redraw]

[MeterAlbum14]
Meter=Image
ImageName=#coversPath#\#album14#
X=0R
Y=0r
W=45
H=45
ImageAlpha=200
Group=MusicLists
LeftMouseUpAction=["#album14path#"]
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterAlbum14 ImageAlpha 255][!UpdateMeter MeterAlbum14][!Redraw]
MouseLeaveAction=[!SetOption MeterAlbum14 ImageAlpha 200][!UpdateMeter MeterAlbum14][!Redraw]

[MeterAlbum15]
Meter=Image
ImageName=#coversPath#\#album15#
X=0R
Y=0r
W=45
H=45
ImageAlpha=200
Group=MusicLists
LeftMouseUpAction=["#album15path#"]
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterAlbum15 ImageAlpha 255][!UpdateMeter MeterAlbum15][!Redraw]
MouseLeaveAction=[!SetOption MeterAlbum15 ImageAlpha 200][!UpdateMeter MeterAlbum15][!Redraw]

[MeterAlbum16]
Meter=Image
ImageName=#coversPath#\#album16#
X=0R
Y=0r
W=45
H=45
ImageAlpha=200
Group=MusicLists
LeftMouseUpAction=["#album16path#"]
MouseOverAction=[Play #soundsPath#\hover.wav][!SetOption MeterAlbum16 ImageAlpha 255][!UpdateMeter MeterAlbum16][!Redraw]
MouseLeaveAction=[!SetOption MeterAlbum16 ImageAlpha 200][!UpdateMeter MeterAlbum16][!Redraw]