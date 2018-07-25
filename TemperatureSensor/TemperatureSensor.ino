const int temperaturePin = A0;

void setup()
{
    Serial.begin(9600); 
}

void loop()
{
    float voltage, degreesC, degreesF; //Declare 3 floating point variables
    voltage = getVoltage(temperaturePin); //Measure the voltage at the analog pin
    degreesC = (voltage - 0.5) * 100.0; // Convert the voltage to degrees Celsius
    degreesF = degreesC * (9.0 / 5.0) + 32.0; //Convert degrees Celsius to Fahrenheit
    
    Serial.print("voltage: ");
    Serial.print(voltage);
    Serial.print("  deg C: ");
    Serial.print(degreesC);
    Serial.print("  deg F: ");
    Serial.println(degreesF);

    delay(200); 
}

float getVoltage(int pin)
{
    return (analogRead(pin) * 0.004882814); 
    // This equation converts the 0 to 1023 value that analogRead()
    // returns, into a 0.0 to 5.0 value that is the true voltage
    // being read at that pin.
}
