CODE 
// Define PWM parameters
const int pwmPin = 12;          // PWM output pin connected to SG3525 pin 6
const int irSensorPin = 14;     // IR sensor input pin to measure motor speed
const int pwmChannel = 0;       
const int pwmFrequency = 500;   // PWM frequency in Hz
const int pwmResolution = 8;    // 8-bit resolution (0-255)

// Variables
volatile int pulseCount = 0;    // To count IR sensor pulses for speed measurement
unsigned long lastTime = 0;     // To calculate RPM every second
int dutyCycle = 128;            // Initial duty cycle (50%)

// Function to increment pulse count on each interrupt (for speed measurement)
void IRAM_ATTR countPulse() {
  pulseCount++;
}

void setup() {
  Serial.begin(115200);

  // Setup PWM
  ledcSetup(pwmChannel, pwmFrequency, pwmResolution);
  ledcAttachPin(pwmPin, pwmChannel);
  ledcWrite(pwmChannel, dutyCycle);

  // Setup IR sensor as input and attach interrupt
  pinMode(irSensorPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(irSensorPin), countPulse, FALLING);
}

void loop() {
  // Calculate motor speed (RPM) every second
  if (millis() - lastTime >= 1000) {
    lastTime = millis();

    // Calculate RPM: (pulseCount / number of pulses per revolution) * 60
    // Assuming each pulse from the IR sensor corresponds to one revolution
    int rpm = pulseCount * 60;  // Calculate RPM directly if 1 pulse = 1 revolution
    pulseCount = 0;             // Reset pulse count for next measurement

    // Print duty cycle and RPM
    Serial.print("Duty Cycle: ");
    Serial.print(dutyCycle * 100 / 255); // Convert duty cycle to percentage
    Serial.print("%, Motor Speed (RPM): ");
    Serial.println(rpm);
  }

  // Example: Adjust the duty cycle up and down (simulate speed control)
  dutyCycle = (dutyCycle + 16) % 256; // Increment duty cycle and wrap around at 255
  ledcWrite(pwmChannel, dutyCycle);

  delay(500); // Delay to see the effect of changing duty cycle gradually
}

