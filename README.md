# Relay
This projects toggles a single pole double throw with an Arduino Uno. Furthermore, this report details how to wire the relay for button control.
## Single Pole Double Throw Relay Module
A single pole double throw relay is an electronicly controlled switch which toggles between a normally open and normally closed output.
### Datasheet
* [Relay Store Link and Technical Information]([url](https://store-usa.arduino.cc/products/1-relay-module-5-vdc-10a-assembled?queryID=bddbe27c2756fdc2e1ba27be88c12172&selectedStore=us))
  
![image](https://github.com/IanPascoe/Relay/assets/95391563/383834c6-d5a2-4fee-9af7-59b87644c96d)

* Power supply: 5 VDC
* Number of relays: 1
* Output contacts: N.A. - Common - N.C.
* Contact range: 10 A 250 VAC - 10 A 30 VDC
* Activation voltage: 2.5 - 5 VDC
* Dimensions (mm): 34x26x19
* Price per unit: $5.00
### How a Relay Works
![image](https://github.com/IanPascoe/Relay/assets/95391563/1fa9c6c3-254b-400f-ad43-ee4604ea121e)

The switching element of a relay is magnetically controlled by a coil resting below the Armeture. When current is fed into the coil it induces a magnetic field which pulls the Armeture to the normally closed contact patch.
### Typical Applications
In general, a relay allows for low-voltage control of high-voltage circuits. Its advantage over other electronic switching elements, for example transistors, is safety. Since a relay physically opens the circuit, there is extreamly high-level of electronic isolation. Because of this, relays are often used as the primary on-off control for high-voltage systems.
## Relay Control Via Arduino Uno
### Components
* Required
* Arduino Uno
* Relay


