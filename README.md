README Instructions:

Step 0:
Ensure that you have two terminals open and confirm that the current working directory (cwd) is .../Project-2-RDT-main.

Step 1:
In one terminal, navigate to the starter code directory using:
```bash
cd starter_code
```
Then, navigate to the obj directory using:
```bash
cd ../obj
```
In the other terminal, simply navigate to the obj directory using:
```bash
cd obj
```

Step 2:
Run the Receiver:
```bash
Command: ./rdt_receiver 5454 new_sample.txt
```
Where:
- 5454 is the port number.
- new_sample.txt is the filename where received data will be written.

Step 3:
Before running the Sender code, execute the following command for mahi-mahi:
```bash
mm-delay 5 mm-loss uplink 0.2 mm-loss downlink 0.5
```
This command introduces a 5ms delay to each packet, 20% loss to the uplink capacity, and 50% loss for the downlink. Currently, file reception may not be successful due to packet loss. To receive the file correctly in the starter code of rdt_sender/rdt_receiver, use delay without loss: 
```bash
mm-delay 5
```

Step 4:
Run the Sender:
```bash
Command: ./rdt_sender $MAHIMAHI_BASE 5454 sample.txt
```
Where:
- $MAHIMAHI_BASE serves as a proxy between sender and receiver. Simply specify the string '$MAHIMAHI_BASE', and mahimahi will fill in the address.
- 5454 is the port number of the receiver.
