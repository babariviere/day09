IP=`ifconfig | grep 'inet' | sed -n '/\([0-9]\{1,3\}\.\)\{3\}[0-9]\{1,3\}/p' | cut -c 7- | cut -d' ' -f1`

if [ -z "$IP" ];
then
	echo "Je suis perdu!\n"
else
   for ip_addr in $IP;do
	   echo $ip_addr
   done
fi
