#!/bin/bash

#!/bin/bash

clear &&
make re &&
value=`./bin | cat -e` &&
toCompare="The ship USS Kreog has been finished.$
It is 289 m in length and 132 m in width.$
It can go to Warp 6!$
The independent ship Greok just finished its construction.$
It is 150 m in length and 230 m in width.$
USS Kreog: The core is set.$
USS Kreog: The core is stable at the time.$
Greok: The core is set.$
Greok: The core is stable at the time.$
USS Kreog: The core is unstable at the time.$
Greok: The core is unstable at the time.$
The ship USS Kreog has been finished.$
It is 289 m in length and 132 m in width.$
It can go to Warp 6!$
Ensign Pavel Chekov, awaiting orders.$
USS Kreog: The core is set.$
USS Kreog: The core is stable at the time.$
James T. Kirk: I'm glad to be the captain of the USS Kreog.$
We are the Borgs. Lower your shields and surrender yourselves unconditionally.$
Your biological characteristics and technologies will be assimilated.$
Resistance is futile.$
Everything is in order.$"
echo "-------------------------------"
echo "$value"
echo "-------------------------------"
echo "$toCompare"
echo "-------------------------------"
if [ "$value" == "$toCompare" ]; then
   echo "success"
else
   echo "failure"
fi
