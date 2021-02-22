//輸出Arduino全部12組ADC for Serial-studio 使用
#define ADC_PIN0 A0
#define ADC_PIN1 A1
#define ADC_PIN2 A2
#define ADC_PIN3 A3
#define ADC_PIN4 A4
#define ADC_PIN5 A5
#define ADC_PIN6 A6
#define ADC_PIN7 A7
#define ADC_PIN8 A8
#define ADC_PIN9 A9
#define ADC_PIN10 A10
#define ADC_PIN11 A11
void setup() {
   // Initialize Serial port at 9600 bauds
   Serial.begin(115200);
   analogReadResolution(12);
   // Configure analog input
   pinMode(ADC_PIN0, INPUT);
   pinMode(ADC_PIN1, INPUT);
   pinMode(ADC_PIN2, INPUT);
   pinMode(ADC_PIN3, INPUT);
   pinMode(ADC_PIN4, INPUT);
   pinMode(ADC_PIN5, INPUT);
   pinMode(ADC_PIN6, INPUT);
   pinMode(ADC_PIN7, INPUT);
   pinMode(ADC_PIN8, INPUT);
   pinMode(ADC_PIN9, INPUT);
   pinMode(ADC_PIN10, INPUT);
   pinMode(ADC_PIN11, INPUT);
}

void loop() {
   // Read voltage @ ADC_PIN
   int adc_value_0 = analogRead(ADC_PIN0);
   int voltage_0 = adc_value_0;  //12bit ADC 除4096, 10bit ADC 除 1023//float voltage_0 = adc_value_0 * (3.30 / 4095.00)
   delay(1);
   int adc_value_1 = analogRead(ADC_PIN1);
   int voltage_1 = adc_value_1;
   delay(1);
   int adc_value_2 = analogRead(ADC_PIN2);
   int voltage_2 = adc_value_2;
   delay(1);
   int adc_value_3 = analogRead(ADC_PIN3);
   int voltage_3 = adc_value_3;
   delay(1);
   int adc_value_4 = analogRead(ADC_PIN4);
   int voltage_4 = adc_value_4;
   delay(1);
   int adc_value_5 = analogRead(ADC_PIN5);
   int voltage_5 = adc_value_5;
   delay(1);
   int adc_value_6 = analogRead(ADC_PIN6);
   int voltage_6 = adc_value_6;
   delay(1);
   int adc_value_7 = analogRead(ADC_PIN7);
   int voltage_7 = adc_value_7;
   delay(1);
   int adc_value_8 = analogRead(ADC_PIN8);
   int voltage_8 = adc_value_8;
   delay(1);
   int adc_value_9 = analogRead(ADC_PIN9);
   int voltage_9 = adc_value_9;
   delay(1);
   int adc_value_10 = analogRead(ADC_PIN10);
   int voltage_10 = adc_value_10;
   delay(1);
   int adc_value_11 = analogRead(ADC_PIN11);
   int voltage_11 = adc_value_11;
  
   // Send current ms & reading through serial
   Serial.print("/*");        // Frame start sequence  [/*]
   Serial.print(millis());    // Add MCU runtime       [ms]
   Serial.print(",");         // Separator character   [,]
   Serial.print(voltage_0);     // Add voltage           [V]
   Serial.print(",");         // Separator character   [,]
   Serial.print(voltage_1);     // Add voltage           [V]
   Serial.print(",");         // Separator character   [,]
   Serial.print(voltage_2);     // Add voltage           [V]
   Serial.print(",");         // Separator character   [,]
   Serial.print(voltage_3);     // Add voltage           [V]
   Serial.print(",");         // Separator character   [,]
   Serial.print(voltage_4);     // Add voltage           [V]
   Serial.print(",");         // Separator character   [,]
   Serial.print(voltage_5);     // Add voltage           [V]
   Serial.print(",");         // Separator character   [,]
   Serial.print(voltage_6);     // Add voltage           [V]
   Serial.print(",");         // Separator character   [,]
   Serial.print(voltage_7);     // Add voltage           [V]
   Serial.print(",");         // Separator character   [,]
   Serial.print(voltage_8);     // Add voltage           [V]
   Serial.print(",");         // Separator character   [,]
   Serial.print(voltage_9);     // Add voltage           [V]
   Serial.print(",");         // Separator character   [,]
   Serial.print(voltage_10);     // Add voltage           [V]
   Serial.print(",");         // Separator character   [,]
   Serial.print(voltage_11);     // Add voltage           [V]
   Serial.print("*/");        // Frame finish sequence [*/]
   Serial.println();
   
   // Wait 10 ms
   //delay(10);
}
