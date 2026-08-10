ABSTARCT 
The project focuses on controlling the speed of a single-phase AC motor using an ESP32 microcontroller. It involves designing an inverter that converts 12V DC to 220V AC, enabling efficient motor operation. The system ensures smooth speed regulation through precise control, making it suitable for various industrial and home automation applications.

INVERTER DESIGN 
This inverter design aims to efficiently convert a 12V DC input from a lead-acid battery into a stable 220V AC output, suitable for powering single-phase AC motors. At the heart of the system is the SG3525ANG PWM controller, which generates precise pulse-width modulation (PWM) signals. These signals help control the frequency and duty cycle of the output, ensuring a consistent and smooth 220V AC signal. The IRFZ44N MOSFETs act as the primary switching elements, enabling efficient handling of current and minimizing power loss. The SG3525ANG directly controls these MOSFETs, allowing for high-accuracy regulation of the AC output.

A potentiometer (POT) is incorporated for adjustable resistance, permitting the user to modify the output characteristics by fine-tuning the PWM signals. Resistors of different values (10K, 4.7K, 47Ω, and 10Ω) manage and limit current flow through various circuit sections, while capacitors (1000µF, 1µF, and 0.1µF) act as filters to smooth out any ripple and provide stability across the DC-AC conversion process. An LED indicator serves as a visual confirmation of the inverter’s operational status, alerting the user when it is active.


A 12-0-12 transformer steps up the inverter’s output from 12V to 220V AC, suitable for the voltage requirements of single-phase AC motors. Powered by a 12V lead-acid battery, this inverter is both portable and efficient, enabling reliable operation for motor-driven applications while maintaining stable output performance. This design ensures a balance of efficiency, stability, and ease of control, making it ideal for various AC motor applications.


PROJECT:
<img width="975" height="1235" alt="image" src="https://github.com/user-attachments/assets/32b68f85-8800-4b27-b793-5936104f6b92" />
