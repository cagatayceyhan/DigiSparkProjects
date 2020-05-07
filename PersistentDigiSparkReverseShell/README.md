<h1>Setup:</h1>
bgpl.ps1 = Background Payload, you'll need to change the IP listed here to the IP that you want the target to connect to

mpl.ps1 = Main Payload, downloads the other scripts needed and places them in sneaky spots
scm.ps1 = Short Cut Maker, makes a shortcut of bgpl.ps1 and places it in /Startup so it runs on PC boot

Replace the DigiSpark Keyboard header with the one listed in the file, or modify your own to include the TAB key.

On windows the header is located:

C:/Users/user_name_here/AppData/Local/Arduino15/packages/digistump/hardware/avr/version_number_here/libraries/digisparkkeyboard/

The backgroundpayload is the payload to be delivered on the target. It needs to be hosted somewhere the target can access and download


The actual digispark script is located in winrshell

Both files need minor alteration. In the payload, your host IP needs to be added, and in the script, the URL of the file needs to be added


In action here:

https://youtu.be/MT6xNZacWI0

<h1>On host Machine:</h1>

For basic netcat shell: nc -lvnp 4444

For Meterpreter Shell: 

<h1>On Target Machine: </h1>
Just plug in the Digispark to the target and allow the digispark script to run
