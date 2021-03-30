**Crack the hash**

Can you complete the level 1 tasks by cracking the hashes?


![Task 1 screenshot](screenshots/hmcths1.png)

**Task 1**

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

**Task 2**
![Task 2 screenshot](screenshots/task2.png)

Hash | Identified Type | Salt | Rounds
------------ | ------------- | ------------ | ------------
F09EDCB1FCEFC6DFB23DC3505A882655FF77375ED8AA2D1C13F640FCCC2D0C85 | MD5
1DFECA0C002AE40B8619ECF94819CC1B | NTLM
$6$aReallyHardSalt$6WKUTqzq.UQQmrm0p/T7MPpMbGNnzXPMAXi4bJMl9be.cfi3/qxIf.hsGpS41BqMhSrHVXgMpdjS6xeKZAs02 | SHA-512, many rounds | aReallyHardSalt | 5
e5d8870e5bdd26602cab8dbe07a942c8669e56d6 | SHA1
