#Getting started with nrf52840-dk. Ubuntu/Linux

## Step 1. Install gcc-arm

```
sudo apt-get install gcc-arm-none-eabi
```

### Step 2. Show version of gcc-arm

```
$ arm-none-eabi-gcc --version
arm-none-eabi-gcc (15:9-2019-q4-0ubuntu1) 9.2.1 20191025 (release) [ARM/arm-9-branch revision 277599]
Copyright (C) 2019 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
```

### Step 3. Download nRF5_SDK

```
https://www.nordicsemi.com/Products/Low-power-short-range-wireless/nRF52840/Compatible-downloads#infotabs
```

Move nRF5_SDK to $HOME/projects/nRF5_SDK

### Step 4. Donwload J-Link and install

```
https://www.segger.com/downloads/jlink/JLink_Linux_x86_64_beta.deb
```

Install 

```
sudo dpkg -i JLink_Linux_V695d_x86_64.deb
```



### Step 5. Download nRF-Command-Line-Tools

```
https://www.nordicsemi.com/Software-and-tools/Development-Tools/nRF-Command-Line-Tools/Download#infotabs
```


### Step 6. Clone repo

```
git clone https://github.com/NikolayDenisov/nrf52840-dk-vscode.git 
```


### Step 7. Edit Makefile.posix and Makefile

```
vim nRF5_SDK/components/toolchain/gcc/Makefile.posix
```

And change

```
GNU_INSTALL_ROOT ?= /usr/bin/
GNU_VERSION ?= 9.2.1 // Show your version step#2
GNU_PREFIX ?= arm-none-eabi
```

Open Makefile in nrf52840-dk-vscode/armgcc/Makefile and set your location

```
SDK_ROOT := /home/nick/projects/iot/nRF5_SDK_17_0_2/
PROJ_DIR := /home/nick/projects/iot/nrf52840-dk-vscode/

```


### Step 8. Open project in VSCODE

Install extensions

https://marketplace.visualstudio.com/items?itemName=marus25.cortex-debug

https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools




### Step 9. Run -> Start Debugging
