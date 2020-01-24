Replace the DigiSpark Keyboard header with the one listed in the file, or modify your own to include the TAB key.

On windows the header is located:

C:/Users/user_name_here/AppData/Local/Arduino15/packages/digistump/hardware/avr/version_number_here/libraries/digisparkkeyboard/

The backgroundpayload is the payload to be delivered on the target. It needs to be hosted somewhere the target can access and download


The actual digispark script is located in winrshell

Both files need minor alteration. In the payload, your host IP needs to be added, and in the script, the URL of the file needs to be added
