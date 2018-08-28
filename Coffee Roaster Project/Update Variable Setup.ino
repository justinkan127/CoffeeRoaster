void updateSet() {

  File dataFile = FileSystem.open(filePath, FILE_READ);   //open file (path has been set elsewhere and works)
  String json = dataFile.readString();                    // read data to 'json' variable
  dataFile.close();                                       // close file


// ArdunoJson.h //

//  const int BUFFER_SIZE = JSON_OBJECT_SIZE(12); //alternate way of declaring buffer size (but doesn't work for me) 
//  StaticJsonBuffer<BUFFER_SIZE> jsonBuffer; 

  StaticJsonBuffer<400> jsonBuffer;       // buffer must be big enough to hold the whole JSON string
  JsonObject& root = jsonBuffer.parseObject(json);    // breaks the JSON string into individual items, saves into JsonObject 'root'

  Serial.println(json);

  if (!root.success()) {
    Serial.println("parseObject() failed");
    return;   //if parsing failed, this will exit the function and not change the values to 00

  } else { // update variables

    lightDay = root["LI"];
    lightTime = writeTime( root["LH"] , root["LM"] , 0 );
    lightDuration = writeTime( root["LDH"] , root["LDM"] , root["LDS"] );
    lightEnd = addTime( lightTime, lightDuration);

    waterDay = root["WI"];
    waterTime = writeTime( root["WH"] , root["WM"] , 0 );
    waterDuration = writeTime( root["WDH"] , root["WDM"] , root["WDS"] );
    waterEnd = addTime( waterTime, waterDuration);

    Serial.println("values updated");
    Serial.print("lightTime: ");
    Serial.println(lightTime);
    Serial.print("lightDay: ");
    Serial.println(lightDay);

    Serial.print("waterTime: ");
    Serial.println(waterTime);
    Serial.print("waterDay: ");
    Serial.println(waterDay);

    counterLight = lightDay; 
    counterWater = waterDay;


  } // end of if(!root.success())
}
