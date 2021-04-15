First thing we do in this room is deploy the virtual machine and access it via
open vpn on our machine.

In this case our MACHINE IP = 10.10.98.50

After initial setup, we proceed with the following sections of this authentication
vulnerability room.

<h2>Dictionary Attack</h2>

Simple yet deadly, this consists of capturing the login GET||POST request from
the site that we are testing and using Burp Suite's intruder to attack the login
fields with a dictionary

Although the room does not cover this, I believe it is important to understand any constraints that may exist during this type of attack. A site must have some way
of mitigating dictionary attack on their authentication methods using something like
gotchas and ip address restrictions.

<h2>Re-Registration</h2>

The vulnerability exists when there is a capability to re-register a user using
a slightly different version of their name. If the input from the registration form
is not sanitized properly, the attacker can gain the privileges of the targeted
user from the newly registered account.

A user with the name *admin* can be registered as *"admin "* with an additional
space an gain all of the real user's access.

My explanation is probably trash so check the THM room for proper info? ...

<h2>JSON Web Token</h2>

The following information is given in this THM room:

JSON Web Token(JWT) is one of the commonly used methods for authorization. This is a
kind of cookie that is generated using HMAC hashing or public/private keys. So unlike
any other kind of cookie, it lets the website know what kind of access the currently
logged in user has. The only special thing about JWT is that they are in JSON
format(after decoding).

JWT can be divided into 3 parts separated by a dot(.)

1)**Header**:  This consists of the algorithm used and the type of the token.

``{  "alg": "HS256", "typ": "JWT"}``

alg could be HMAC, RSA, SHA256 or can even contain None value.

2)**Payload**: This is part that contains the access given to the certain user etc.
This can vary from website to website, some can just have a simple username and some
ID and others could have a lot of other details.

3)**Signature**: This is the part that is used to make sure that the integrity of the
data was maintained while transferring it from a user's computer to the server and
back. This is encrypted with whatever algorithm or alg that was passed in the
header's value. And this can only be decrypted with a predefined secret(which should  
be difficult to)

Now to put all the 3 part together we base64 encode all of them separated by a dot(.)
so it would look something like:

`eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJzdWIiOiIxMjM0NTY3ODkwIiwibmFtZSI6IkpvaG4gRG9lIiwiaWF0IjoxNTE2MjM5MDIyfQ.SflKxwRJSMeKKF2QT4fwpMeJf36POk6yJV_adQssw5c`
