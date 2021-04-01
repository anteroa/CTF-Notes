<h1>Mr Robot :fsociety: </h1>

![task 2 screenshot](screenshots/MRtask2.png)

<h2>What is key 1?</h1>

Hint: Robots

This hint should take anyone that has done a few ctfs somewhere fast,
it is a suggestion to go check the robots.txt file of the site:

If you haven' yet, go to browser an put the machine ip address, then
after spending some unfruitful time watching Mr. Robot advertisements(/s)
you can go ahead and check out the robots.txt of the site:

`MACHINE_IP/robots.txt`

Below is a screenshot of robots.txt:

![robots screenshot](screenshots/robots.png)

As you can see there are two interesting pieces of information.
The *key-1-of-3.txt* and *fsocity.dic* pages have been placed here to keep crawlers
from indexing them.

So,  lets check them out.

First, *key-1-of-3.txt* :

![key 1 screenshot](screenshots/k1of3.png)

And we got our first key. :sunglasses:

Then *fsocity.dic*,

![fsoc screenshot](screenshots/fsoc.png)

Depending on what browser you are using, you will be able to see the
words in this site or be prompted to download the file immediately upon
visiting the page. Save the file (which seems to be a dictionary) and continue on.

<h2>What is key 2?</h1>

Hint: White colored font

For this answer, we will try to identify the rest of the flags following the
methodology provided in the [official walkthrough](https://www.youtube.com/watch?v=BQ4xeeNAbaw) by DarkSec for TryHackMe.

The next thing to do then, is run gobuster on the site so that we can identify
additional subdomains. This will help us locate a good place to put the
*fsocity.dic* file to use.

You can get gobuster here: https://github.com/OJ/gobuster

Then run the following command. 
