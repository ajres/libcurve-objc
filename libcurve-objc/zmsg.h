//
//  zmsg.h
//  libcurve-objc
//
//  Created by Andrew Reslan on 05/10/2015.
//  Copyright © 2015 novoĉo. All rights reserved.
//

#ifndef zmsg_h
#define zmsg_h

#include <stdio.h>

typedef struct zmq_msg_t {unsigned char _ [48];} zmq_msg_t;

typedef void (zmq_free_fn) (void *data, void *hint);

int zmq_msg_init (zmq_msg_t *msg);
int zmq_msg_init_size (zmq_msg_t *msg, size_t size);
int zmq_msg_init_data (zmq_msg_t *msg, void *data,
                                  size_t size, zmq_free_fn *ffn, void *hint);
int zmq_msg_send (zmq_msg_t *msg, void *s, int flags);
int zmq_msg_recv (zmq_msg_t *msg, void *s, int flags);
int zmq_msg_close (zmq_msg_t *msg);
int zmq_msg_move (zmq_msg_t *dest, zmq_msg_t *src);
int zmq_msg_copy (zmq_msg_t *dest, zmq_msg_t *src);
void *zmq_msg_data (zmq_msg_t *msg);
size_t zmq_msg_size (zmq_msg_t *msg);
int zmq_msg_more (zmq_msg_t *msg);
int zmq_msg_get (zmq_msg_t *msg, int property);
int zmq_msg_set (zmq_msg_t *msg, int property, int optval);
const char *zmq_msg_gets (zmq_msg_t *msg, const char *property);

#endif /* zmsg_h */
