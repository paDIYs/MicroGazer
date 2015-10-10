# Include the Dropbox SDK and all library
from subprocess import call
import time
import dropbox
import os
from sys import argv
import sys

coltura = str(argv[1])

# string of petriDish name and time
now = time.localtime(time.time())
d = str(time.strftime("%d%b%H%M", now))
c = ".png"
dn = coltura + d + c

# fswebcam take photo command
call(["fswebcam", "/mnt/sda1/arduino/www/" + dn, "-r", "640x480"])

# Get your app key and secret from the Dropbox developer website
app_key = 'put here your app-key'
app_secret = 'put here your app_secret'

flow = dropbox.client.DropboxOAuth2FlowNoRedirect(app_key, app_secret)
client = dropbox.client.DropboxClient("put here your access token")

# upload the photo on dropbox
dnsl = '/mnt/sda1/arduino/www/' + dn
f = open(dn, 'rb') #open(dnsl, 'rb')
response = client.put_file(dnsl, f)
print "uploaded:", response
