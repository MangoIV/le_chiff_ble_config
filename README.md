# le_chiff_ble_config

This is the [zmk](https://zmk.dev) firmware for the [le_chiffre ble](https://github.com/MangoIV/le_chiff_ble) drop-in replacement PCB. 

### How to use 

- fork this repo
- `git clone` your repo (if you have issues with git, try something like [gitkraken](https://www.gitkraken.com/) or read a [tutorial](https://www.atlassian.com/git/tutorials))
- adjust the `.keymap` file (find all the keycodes on [the zmk docs pages](https://zmk.dev/docs/codes/))
- `git push` your repo 
- on the GitHub page of your repo navigate to "Actions"
- download and unzip the `.zip` Archive that contains the latest firmware
- connect your PCB to your PC, press reset twice
- the PCB should now appear as a mass storage device
- drag'n'drop your firmware `.uf2` file onto the storage device 

**Congrats, you should now have the firmware on your board!**
