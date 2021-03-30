**Crack the hash**

Can you complete the level 1 tasks by cracking the hashes?


![Level 1 screenshot](screenshots/hmcths1.png)

**Walkthrough**

These hashes are all different types at first glance, so I decided to identify
the hash types before cracking them.

The results were as hash types were as follows:

Hash | Identified Type
------------ | -------------
48bb6e862e54f2a795ffc4e541caed4d | MD5
CBFDAC6008F9CAB4083784CBD1874F76618D2A97 | SHA1
1C8BFE8F801D79745C4631D09FFF36C82AA37FC4CCE4FC946683D7B336B63032 | SHA256
$2y$12$Dwt1BZj6pcyc3Dy1FWZ5ieeUznr71EeNkJkUlypTsgbX1H68wsRom | bcrypt $2*$, Blowfish (Unix)
279412f945939ba78ce0758d3fd83daa | MD4

There are several ways to get this done, and the easiest is to try all hashes on
crackstation and see if there is a password for them already on the site. This has
the benefit of being fast is not requiring any real cracking but, for education
purposes we will go ahead and crack these hashes with good old hashcat. Also, not all hashes can be found on crackstation.

Hash 1 command(MD5):

`< hashcat -m 0 -a 0 48bb6e862e54f2a795ffc4e541caed4d /home/wordlist.txt >`

Hash 2 command(SHA1):

`< hashcat -m 0 -a 100 CBFDAC6008F9CAB4083784CBD1874F76618D2A97 /home/wordlist.txt >`

Hash 3 command(SHA256):

`< hashcat -m 0 -a 1400 1C8BFE8F801D79745C4631D09FFF36C82AA37FC4CCE4FC946683D7B336B63032 /home/wordlist.txt >`

Hash 4 command(bcrypt $2*$, Blowfish (Unix)):

`< hashcat -m 3200 -a 0 hashes.txt /home/wordlist.txt >`

Hash 5 command(MD4):

`< hashcat -m 900 -a 0 279412f945939ba78ce0758d3fd83daa /home/wordlist.txt >`
