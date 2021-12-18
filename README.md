# CD-Room
Arduino Project

Abstract:
  The most significant issues which face Egypt over the coming years are tied mostly to securing and increasing more renewable sources equivalent to the country's population and eliminating pollution. Egypt's population increases disproportionately to available resources. This results in growing need for energy production. Almost all the processes associated with energy production increase catastrophic emissions to the air which is a major reason for 'global warming', increasing contamination in water and damaging aquatic life; furthermore, contaminated water used in irrigation affects harmfully on the soil. Increasing the use of alternative energy will contribute to making a massive transition from a mere third-world country to a developed country. Alternative technology targets more than 20% of Egypt's power generation. As technologies are used for numerous different purposes whether to achieve high efficiency, reduce pollution, or make work easier. The best solution is increasing the use of alternative energy facilitated by communication and technology. Although the Egyptian national railway is one of the largest economic institutions in Egypt and the Arab world, train stations are consumptive sources of Egypt's total power generation. CD Disc Generator, a simpler model of a turbine, is the promising future of electric generation. A simple press on CD-ROM can produce electricity for lighting a LED. Similar to the CD-ROMs technique, the trains' coil springs pressure can generate enough power for lighting the whole system either in stations or inside trains themselves. Design requirements the prototype should meet to be successful are producing high voltage and power and achieving high efficiency.
 
Methods:
*	Hardware >>

The steps of constructing the prototype:
Firstly, CD-ROM has a generator connected by its electrodes.  Next, CD-ROM’s generator is connected with current and voltage sensor by GND and Vin pins. The generator’s positive electrode is connected to Vin and the negative is connected with GND. And VOUT pin is connected with LED. Then the sensor’s AT, VT, and GND pins are connected to Arduino to measure the outputs from CD-ROM. 

Bluetooth module HC-05 is needed to read results from Arduino. We connect VCC in pin 2 and GND in pin 3 to Arduino. Finally, Tx (transmitter) and Rx (receiver) are connected to pin A4 and A5 in Arduino. 

The prototype should be connected to serial Bluetooth terminal app to display results by device name HC05 and password 1234. 
