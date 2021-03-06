; WEATHER MEASURES
[MeasureWeatherData]
Measure=WebParser
URL=http://api.openweathermap.org/data/2.5/weather?id=#city#&APPID=#token#&units=#units#
RegExp=(?siU)"main":"(.*)".*"temp":(.*),"feels_like":(.*),"temp_min":(.*),"temp_max":(.*),.*"humidity":(.*)}.*"wind":{"speed":(.*),.*"name":"(.*)"

[MeasureCondition]
Measure=WebParser
URL=[MeasureWeatherData]
StringIndex=1
Substitute="Clouds":"Nubes","Clear":"Despejado","Mist":"Niebla","Thunderstorm":"Tormenta","Drizzle":"Llovizna","Rain":"Lluvia","Snow":"Nieve","Smoke":"Humo","Haze":"Neblina","Dust":"Polvo","Fog":"Bruma","Sand":"Arena","Ash":"Ceniza","Squall":"Tempestad"
UpdateDivider=(15*60)
DynamicVariables=1

[MeasureTemperature]
Measure=WebParser
URL=[MeasureWeatherData]
StringIndex=2
UpdateDivider=(15*60)
DynamicVariables=1

[MeasureRoundTemperature]
Measure=Calc
Formula=[MeasureTemperature]
DynamicVariables=1

[MeasureRoundTemperatureString]
Measure=String
String=[MeasureRoundTemperature:0]
DynamicVariables=1

[MeasureCity]
Measure=WebParser
URL=[MeasureWeatherData]
StringIndex=8
DynamicVariables=1
Substitute="Vallecas":"Vallekas"

[MeasureMinTemp]
Measure=WebParser
URL=[MeasureWeatherData]
StringIndex=4
DynamicVariables=1

[MeasureRoundMinTemp]
Measure=Calc
Formula=[MeasureMinTemp]
DynamicVariables=1

[MeasureRoundMinString]
Measure=String
String=[MeasureRoundMinTemp:0]
DynamicVariables=1

[MeasureMaxTemp]
Measure=WebParser
URL=[MeasureWeatherData]
StringIndex=5
DynamicVariables=1

[MeasureRoundMaxTemp]
Measure=Calc
Formula=[MeasureMaxTemp]
DynamicVariables=1

[MeasureRoundMaxString]
Measure=String
String=[MeasureRoundMaxTemp:0]
DynamicVariables=1

[MeasureHumidity]
Measure=WebParser
URL=[MeasureWeatherData]
StringIndex=6
DynamicVariables=1

[MeasureRoundHumidity]
Measure=Calc
Formula=[MeasureHumidity]
DynamicVariables=1

[MeasureRoundHumidityString]
Measure=String
String=[MeasureRoundHumidity:0]
DynamicVariables=1

[MeasureWindSpeed]
Measure=WebParser
URL=[MeasureWeatherData]
StringIndex=7
DynamicVariables=1

[MeasureRoundWindSpeed]
Measure=Calc
Formula=[MeasureWindSpeed]
DynamicVariables=1

[MeasureRoundWindSpeedString]
Measure=String
String=[MeasureRoundWindSpeed:0]
DynamicVariables=1