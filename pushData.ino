void pushData(){
  FirebaseJson json;

  json.addDouble("temperature", s.temp);
  json.addDouble("o2", s.od);
  json.addDouble("turbidez", s.turbidez);
  json.addDouble("ph", s.ph);
  json.addInt("time", s.timer);

  if (Firebase.pushJSON(firebaseData, "/sensors/id:01", json)) {
    //PUSHING TEMPERATURE
 // if (Firebase.pushDouble(firebaseData, "/sensors/temperature", s.temperature)) {

    Serial.println(firebaseData.dataPath());

    Serial.println(firebaseData.pushName());

    //Serial.println(firebaseData.dataPath() + "/"+ firebaseData.pushName());

  } else {
    Serial.println(firebaseData.errorReason());
  } 
