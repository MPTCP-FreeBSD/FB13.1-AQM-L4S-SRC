L4S FreeBSD Source:
---------------
This repository contains the source code for the FreeBSD kernel modified to support Low Latency, Low Loss, Scalable throughput (L4S) architecture in the 'ipfw' module as a separate AQM scheduler scheme.
L4S aims to reduce latency and packet loss while maintaining scalable throughput, making it ideal for real-time applications such as video conferencing, online gaming, and other interactive services.

After the FreeBSD machine is set up, you can build and install the customized AQM kernel by running the following commands:

Clone the kernel source:
```bash
git clone https://github.com/deolsatish/FB13.1-AQM-SRC.git <path>
git checkout l4s-dev
cd <path>
```
Build the world (everything but the kernel):
```bash
make buildworld
```
Build and install the kernel:
```bash
make buildkernel -j4 -DKERNFAST KERNCONF=L4SKERNEL
make installkernel -j4 -DKERNFAST KERNCONF=L4SKERNEL
shutdown -r now
```
Install the world:
```bash
cd <path>
make installworld
shutdown -r now
```

To enable L4S, use the following commands after building and installing kernel and world, and make sure the Dummynet module is loaded into the kernel.
```
ipfw -f flush;ipfw pipe 1 config bw 10Mbits/s delay 20ms ; ipfw sched 1 config pipe 1 type l4s ecn ; ipfw queue 1 config sched 1 ; ipfw add 100 queue 1 ip from 172.16.0.0/16 to 172.16.0.0/16
```
#To enable ECN, run the following command as the root user in your Sender/Client not required in the router as default is set to 2, which accepts ECN connections:
```
	sysctl net.inet.tcp.ecn.enable=1
```
Go to [FreeBSD-DRL-L4S] https://github.com/MPTCP-FreeBSD/FreeBSD-DRL-L4S/blob/main/FreeBSD%20L4S/README.md for more information regarding updating utilizing L4S.


Source Roadmap:
---------------
```
bin		System/user commands.

cddl		Various commands and libraries under the Common Development
		and Distribution License.

contrib		Packages contributed by 3rd parties.

crypto		Cryptography stuff (see crypto/README).

etc		Template files for /etc.

gnu		Commands and libraries under the GNU General Public License
		(GPL) or Lesser General Public License (LGPL).  Please see
		gnu/COPYING* for more information.

include		System include files.

kerberos5	Kerberos5 (Heimdal) package.

lib		System libraries.

libexec		System daemons.

release		Release building Makefile & associated tools.

rescue		Build system for statically linked /rescue utilities.

sbin		System commands.

secure		Cryptographic libraries and commands.

share		Shared resources.

stand		Boot loader sources.

sys		Kernel sources.

sys/<arch>/conf Kernel configuration files. GENERIC is the configuration
		used in release builds. NOTES contains documentation of
		all possible entries.

tests		Regression tests which can be run by Kyua.  See tests/README
		for additional information.

tools		Utilities for regression testing and miscellaneous tasks.

usr.bin		User commands.

usr.sbin	System administration commands.
```

For information on synchronizing your source tree with one or more of
the FreeBSD Project's development branches, please see:

  https://www.freebsd.org/doc/en_US.ISO8859-1/books/handbook/current-stable.html
