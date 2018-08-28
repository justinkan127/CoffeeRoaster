#include "ArduinoJson.h"

void updateSet() {

  byte bufferSize = 150; //define number of bytes expected on the JSON thread, should be more
  char json[bufferSize]; //create a char array buffer

  //Opens a 'settings.json' text file on SD that has has a JSON string stored in filePath = /mnt/sd/arduino/www/[your_sketch_name]
  File dataFile = FileSystem.open(filePath, FILE_READ);
  dataFile.readBytes(json, bufferSize);
  dataFile.close();

  Serial.println(json); //prints whatever JSON string values were read

  StaticJsonBuffer<JSON_OBJECT_SIZE(12)> jsonBuffer; //Need more buffer (more than 12byte) for array mapping
  JsonObject& root = jsonBuffer.parseObject(json);    // breaks the JSON string into individual items, saves into JsonObject 'root'

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
    Serial.println();

    counterLight = lightDay; //update day counters for light
    counterWater = waterDay; //update day counters for irrigation

  }
}
