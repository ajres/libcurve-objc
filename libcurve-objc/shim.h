//
//  zmq-shim.h
//  libcurve-objc
//
//  Created by Andrew Reslan on 26/09/2015.
//  Copyright © 2015 novoĉo. All rights reserved.
//

#ifndef zmq_shim_h
#define zmq_shim_h

#define streq(s1,s2)    (!strcmp ((s1), (s2)))
#define strneq(s1,s2)   (strcmp ((s1), (s2)))

//  Provide random number from 0..(num-1)
#if (defined (__WINDOWS__))
#   define randof(num)  (int) ((float) (num) * rand () / (RAND_MAX + 1.0))
#else
#   define randof(num)  (int) ((float) (num) * random () / (RAND_MAX + 1.0))
#endif

typedef unsigned char   byte;           //  Single unsigned byte = 8 bits



typedef struct _zcert_t zcert_t;


#endif /* zmq_shim_h */
