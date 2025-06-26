Getting Started with Digispark and ATTiny85
Follow these steps to set up your development environment and use your Digispark board with ATTiny85:
1. Install ATTinyCore in Arduino IDE
ATTinyCore is a software package (known as a core) that enables support for programming ATTiny microcontrollers.
To install:
- Open the Arduino IDE. Go to File → Preferences.
- In the Additional Boards Manager URLs textbox, add:
http://drazzy.com/package_drazzy.com_index.json
- Click OK.
- Navigate to Tools → Board → Boards Manager.
- Search for ATTinyCore, then install it.
2. Install the USB Driver (Windows)
From the attached folder, install the USB driver:
Digistump.Drivers.zip (1.6 MB)
This step is required for proper communication between the board and your PC.
3. Select the Board
In the Arduino IDE, go to Tools → Board and select:
Digispark (Default - 16.5 MHz) or ATTiny85, depending on your board type.
4. (Optional) Add Turkish Q Keyboard Support
If you're planning to use a Turkish Q keyboard layout, include the following library:
DigisparkKeyboard-master.zip
Install it via Sketch → Include Library → Add .ZIP Library.
5. Upload and Run
- Verify and upload your code in the Arduino IDE.
- Wait for the "Upload complete" message.
- Then, plug in the Digispark board.
- After a few seconds, unplug—it’s now ready to use!
