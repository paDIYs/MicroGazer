# MicroGazer

<a href="http://biohackingexperience.tumblr.com/"><img src="https://github.com/paDIYs/MicroGazer/blob/master/microgazer.JPG" width="100%"/></a>


The “Micro-Gazer” is an innovative tool developed by the BioHacker Experience in collaboration with the FabLabTO: it is an automatic station for visualizing and analyzing the microbial growth on Petri Dish inoculated with the "Microbiome of a Maker" [learne more](http://biohackingexperience.tumblr.com/).

The MicroGazer is equipped with a backlit rotating plate, that can host up to 5 Petri dishes, and a capture position with a camera. It is controlled by an Arduino Yun board that manages the camera and the motor that moves the rotating plate. The images acquired by the camera are stored on the memory of the Arduino board and, if connected to the internet, uploaded to the cloud.  Thus, the images document the growth of the bacteria colonies and they can be used to create a time-lapse video that highlight the complexity (the dimensions and directions) of bacteria proliferation.

## PROCEDURE
* STEP1: The Petri Dishes are prepared with culture medium without any type of antibiotics.

* STEP2: The Maker can inoculate the Petri dish by touching the medium surface with her/his skin, breathing on it or using a buccal swab.

* STEP3: The inoculated Petri dish is placed on the MicroGazer. It could host up to 5 Petri Dish for simultaneously and comparable incubations.

* STEP4: The MicroGazer incubate the Petri Dishes and periodically capture a photograph of each Petri dish, documenting the bacteria growth.

## RECIPE & EXPERIMENT DESCRIPTION
##### Home Made DIY Solid Culture Media
* 10g table salt to provides ions for transport and osmotic balance

* 5g dried yeast for bread preparation to provide a plethora of organic compounds helpful for bacterial growth

* 3g sugar as a nutrient  to help bacterial growth

* 15g Agar- Agar, a vegetarian gelatin substitute produced from a variety of seaweed vegetation which is sold in health food stores. It is used to provide a solid medium for microorganisms growth.

Dissolve components in 1 liter of distilled water.  Put into a glass bottle and sterilize by boiling in a water bath  for 30 minutes.

Fill the Petri dish with agar medium and use the top half of the Petri dish to cover the bottom portion and allow the solution to cool and harden for at least an hour.

Inoculate the plate with your finger print or your mouth cotton swap.

Place the plates in a warm place ( 25°-37°C), in 12 hs you’ll start to see microorganisms growing into your plate and you’ll continue to see more and larger colonies for the next days.

#### Team
Stefano Paradiso, Valentina Margaria, Riccardo Castagna, Irio Lavagno, Alessandro Argenio

## BOM
* Arduino Yun
* Stepper motor
* Voltage regulator 5 volt [L7800](http://cdn.sparkfun.com/datasheets/Components/General/TO-220.pdf)
* H bridge [SN754410](https://www.sparkfun.com/datasheets/IC/SN754410.pdf)
* UVC compatible USB webcam [List](https://en.wikipedia.org/wiki/List_of_USB_video_class_devices)
* Power supply 12V
* 20cm of streep led
* 4mm plywood 100 x 60cm
* 4mm plexiglass 50 x 25cm
* n.12 bolts and nuts M3 16mm

## Software configuration

##### UVC driver and webcam software
update the software list:

    opkg update

install UVC drivers:

    opkg install kmod-video-uvc

we will also need the python-openssl:

    opkg install python-openssl

install the webcam software:

    opkg install fswebcam


##### Dropbox API

We must create un APP on our Dropbox account [https://www.dropbox.com/developers](https://www.dropbox.com/developers)
Now we will use pipt to intall the Dropbox SDk

    opkg update
    opkg install distribute
    easy_install pip
    pip install dropbox
