 /*
  * @(#) scaffold.h 1.3 94/12/31 18:19:19
  * 
  * Author: Wietse Venema, Eindhoven University of Technology, The Netherlands.
  *
  * $FreeBSD: src/contrib/tcp_wrappers/scaffold.h,v 1.2.36.1.8.1 2012/03/03 06:15:13 kensmith Exp $
  */

#ifdef INET6
extern struct addrinfo *find_inet_addr();
#else
extern struct hostent *find_inet_addr();
#endif
extern int check_dns();
extern int check_path();
