/*
  Copyright (c) 1999 Rafal Wojtczuk <nergal@icm.edu.pl>. All rights reserved.
  See the file COPYING for license details.
*/

#ifndef _NIDS_IP_FRAGMENT_H
#define _NIDS_IP_FRAGMENT_H

#define IPF_NOTF 1	//该包不是分片包
#define IPF_NEW  2	//该包是重组的包
#define IPF_ISF  3	//该包是分片包，且不足以和之前的分片重组为完整的包

void ip_frag_init(int);
void ip_frag_exit(void);
int ip_defrag_stub(struct ip *, struct ip **);

#endif /* _NIDS_IP_FRAGMENT_H */
