README:

Step 0:
Ensure that two terminals are opened and that the current working directory (cwd) is .../Project-2-RDT-main.

Step 1:
Navigate to the starter code directory in one of the terminals using either terminal 1 or 2, compile using 'make', then navigate to the ../obj directory. In the other terminal, navigate directly to the obj directory.

Step 2:
Run the Receiver:
Command: `./rdt_receiver 5454 new_sample.txt`
- 5454 represents the port number.
- new_sample.txt is the filename where data will be written upon reception from the sender.

Step 3:
Before executing the Sender code, run the following command for Mahi-Mahi:
```
mm-delay 5 mm-loss uplink 0.2 mm-loss downlink 0.5
```
This command introduces a 5ms delay to each packet, 20% loss to the uplink capacity, and 50% loss for the downlink.
Note: Currently, file reception might be incorrect due to packet loss. To receive files correctly in the starter code of rdt_sender/rdt_receiver, utilize only delay without loss: `mm-delay 5`.

Step 4:
Run the Sender:
Command: `./rdt_sender $MAHIMAHI_BASE 5454 sample.txt`
- $MAHIMAHI_BASE serves as the proxy between sender and receiver. Simply specify the string '$MAHIMAHI_BASE', and Mahi-Mahi will fill in the address.
- 5454 denotes the port number of the receiver.
