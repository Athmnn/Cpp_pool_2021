#!/bin/bash

#!/bin/bash

clear &&
make re &&
value=`./bin | cat -e` &&
toCompare="3$
5$
lemon$
banana$
3$
lemon$" &&
echo "-------------------------------" &&
echo "$value" &&
echo "-------------------------------" &&
echo "$toCompare" &&
echo "-------------------------------" &&
if [ "$value" == "$toCompare" ]; then
   echo "success"
else
   echo "failure"
fi
