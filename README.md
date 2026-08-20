ABSTARCT 
The project focuses on controlling the speed of a single-phase AC motor using an ESP32 microcontroller. It involves designing an inverter that converts 12V DC to 220V AC, enabling efficient motor operation. The system ensures smooth speed regulation through precise control, making it suitable for various industrial and home automation applications.

INVERTER DESIGN 
This inverter design aims to convert a 12V DC input from a lead-acid battery into a stable 220V AC output, suitable for powering single-phase AC motors. At the heart of the system is the SG3525ANG PWM controller, which generates precise pulse-width modulation (PWM) signals. These signals help control the frequency and duty cycle of the output, ensuring a consistent and smooth 220V AC signal. The IRFZ44N MOSFETs act as the primary switching elements, enabling efficient handling of current and minimizing power loss. The SG3525ANG directly controls these MOSFETs, allowing for high-accuracy regulation of the AC output. 

the potentiometer connected to pi 6 and cap connected to pin 5 are the timing capacitance and the timing resistance used for fixing the frequency of the PWM signals.Resistors of different values (10K, 4.7K, 47Ω, and 10Ω) manage and limit current flow through various circuit sections, while capacitors (1000µF, 1µF, and 0.1µF) act as filters to smooth out any ripple and provide stability across the DC-AC conversion process.

A 12-0-12 transformer steps up the inverter’s output from 12V to 220V AC, suitable for the voltage requirements of single-phase AC motors. Powered by a 12V lead-acid battery.ESP32 is connected to pin 9 (compensation pin) of the IC to control the duty cycle by sending a filtered DC signal using a RC filter.

frequency equation : <img width="280" height="125" alt="image" src="https://github.com/user-attachments/assets/05ea595c-910b-46be-a338-3880ee418a11" />

IC diagram: <img width="946" height="447" alt="image" src="https://github.com/user-attachments/assets/70c5b116-4446-4216-8102-3685aeb7f262" />

schematic : <img width="962" height="429" alt="image" src="https://github.com/user-attachments/assets/d0bebbde-a86d-4832-b8e7-8a7d24a52f12" />

PROJECT:
<img width="975" height="1235" alt="image" src="https://github.com/user-attachments/assets/32b68f85-8800-4b27-b793-5936104f6b92" />
