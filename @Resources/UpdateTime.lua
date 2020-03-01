function Initialize()

   msMeasureTime = SKIN:GetMeasure('UpdateTime')
   
end

function Update()

   updateTime = msMeasureTime:GetStringValue()
   
   Hour, Minute, Meridiem = string.match(updateTime, '^(.-):(.-) (.-)$')
   Hour24 = ParseTwelveHourTime(tonumber(Hour), Meridiem)
   if tonumber(Hour24) < 10 then
      Hour24 = '0'..Hour24
   end
   
   SELF:Disable()
   return (Hour24..':'..Minute)
   
end   

function ParseTwelveHourTime(Hour, Meridiem)
   if (Meridiem == 'AM') and (Hour == 12) then
      Hour = 0
   elseif (Meridiem == 'PM') and (Hour < 12) then
      Hour = Hour + 12
   end
   return Hour
end
