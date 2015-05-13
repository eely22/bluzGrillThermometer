#define THERMOMETER_PIN A0

void setup() {

}

void loop() {
    //0.62 and 180 are calculated first, then calibrated from experimentation
	int temp = analogRead(THERMOMETER_PIN) * 0.62 - 180;

	char json[60];
	sprintf(json,"{\"temp\": %d}", temp);

	Spark.publish("Meat_Thermometer_Temp_F", json);
    delay(1000);
}
