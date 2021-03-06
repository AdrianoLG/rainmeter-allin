; WEATHER METERS

[MeterWeatherIcon]
Meter=Image
MeasureName=MeasureCondition
ImageName=#iconsPath#weather\%1.png
X=10
Y=12R

[MeterCondition]
Meter=String
MeasureName=MeasureCondition
MeterStyle=styleWeather
X=10
Y=8R
W=80
H=20

[MeterWeatherTemperature]
Meter=String
MeasureName=MeasureRoundTemperatureString
Text=%1#grades#
MeterStyle=styleWeatherTemp
X=140
Y=155
W=120

[MeterCity]
Meter=String
MeasureName=MeasureCity
Text=%1
MeterStyle=styleWeatherInfo
StringCase=Upper
X=374
Y=0r
W=150

[MeterMinMaxTemp]
Meter=String
MeasureName=MeasureRoundMinString
MeasureName2=MeasureRoundMaxString
Text=Min. %1#grades# | Max. %2#grades#
MeterStyle=styleWeatherInfo
X=0r
Y=2R
W=150

[MeterHumidity]
Meter=String
MeasureName=MeasureRoundHumidityString
Text=Humedad: %1%
MeterStyle=styleWeatherInfo
X=0r
Y=2R
W=150

[MeterWindSpeed]
Meter=String
MeasureName=MeasureRoundWindSpeedString
Text=Viento: %1 #suffix#
MeterStyle=styleWeatherInfo
X=0r
Y=2R
W=150