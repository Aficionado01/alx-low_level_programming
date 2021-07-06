# Steps To Crack The crackme2 File

1) Run `ltrace ./crackme2`
2) Notice the calls to strncmp with "jennieandjayloveasm="
and the output of running `declare -x`
3) Run `declare -x jennieandjayloveasm=`
4) Notice that another condition is unveiled and this runs an MD5Hash on a substring of our declared variable in step 3 However it is with an empty string. Notice how the substring changes when we add characters at the end. Hence the MD5Hash is computed from the substring after the first "=" character.
5) There is another strncmp call made to the hash with the string "e99a18c428cb38d5f260853678922e03". This means our password must have the form "jennieandjayloveasm=&lt;string>", where string has hash == "e99a18c428cb38d5f260853678922e03".
6) The problem is finding a string that would have the hash "e99a18c428cb38d5f260853678922e03"
7) The first step is to try some common passwords. I visited [passwordrandom](https://www.passwordrandom.com/most-popular-passwords) and [SecLists](https://github.com/danielmiessler/SecLists/blob/master/Passwords/Common-Credentials/10k-most-common.txt) to get access to a list of common passwords. Password Random listed the hash as well so I was able to arrive at the password rather quickly. With the list of passwords from the SecLists repository owned by [DanielMiessler](https://github.com/danielmiessler), one could compute the MD5 hash of the string and compare it to the aforementioned hash.
8) You can find a decent MD5 Hash algorithm implemented in C [here](https://www.programmersought.com/article/65533692468/).
