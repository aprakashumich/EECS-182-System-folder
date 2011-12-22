#!/bin/sh
if [ -d /media/"VMware Tools" ]; then
	cp /media/"VMware Tools"/* /tmp
	cd /tmp
	tar xzf /tmp/VMwareTools*.tar.gz 
	sudo /tmp/vmware-tools-distrib/vmware-install.pl
	rm -f /tmp/VMwareTools*
	rm -rf /tmp/vmware-tools-distrib
else
	echo "You need to first install VMWare tools by going to VMware menu -> Virtual Machines -> Install VMware tools"
fi



