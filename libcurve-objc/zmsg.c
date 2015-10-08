//
//  zmsg.c
//  libcurve-objc
//
//  Created by Andrew Reslan on 05/10/2015.
//  Copyright © 2015 novoĉo. All rights reserved.
//

#include "zmsg.h"

// Message manipulators.

int zmq_msg_init (zmq_msg_t *msg_)
{
    return 0; //((zmq::msg_t*) msg_)->init ();
}

int zmq_msg_init_size (zmq_msg_t *msg_, size_t size_)
{
    return 0; //((zmq::msg_t*) msg_)->init_size (size_);
}

int zmq_msg_init_data (zmq_msg_t *msg_, void *data_, size_t size_,
                       zmq_free_fn *ffn_, void *hint_)
{
    return 0; //((zmq::msg_t*) msg_)->init_data (data_, size_, ffn_, hint_);
}

int zmq_msg_send (zmq_msg_t *msg_, void *s_, int flags_)
{
    /*
    if (!s_ || !((zmq::socket_base_t*) s_)->check_tag ()) {
        errno = ENOTSOCK;
        return -1;
    }
    zmq::socket_base_t *s = (zmq::socket_base_t *) s_;
    int result = s_sendmsg (s, msg_, flags_);
    return result;
     */
    return 0;
}

int zmq_msg_recv (zmq_msg_t *msg_, void *s_, int flags_)
{
    /*
    if (!s_ || !((zmq::socket_base_t*) s_)->check_tag ()) {
        errno = ENOTSOCK;
        return -1;
    }
    zmq::socket_base_t *s = (zmq::socket_base_t *) s_;
    int result = s_recvmsg (s, msg_, flags_);
    return result;
     */
    return 0;
}

int zmq_msg_close (zmq_msg_t *msg_)
{
    return 0; //((zmq::msg_t*) msg_)->close ();
}

int zmq_msg_move (zmq_msg_t *dest_, zmq_msg_t *src_)
{
    return 0; //((zmq::msg_t*) dest_)->move (*(zmq::msg_t*) src_);
}

int zmq_msg_copy (zmq_msg_t *dest_, zmq_msg_t *src_)
{
    return 0; //((zmq::msg_t*) dest_)->copy (*(zmq::msg_t*) src_);
}

void *zmq_msg_data (zmq_msg_t *msg_)
{
    return NULL; //((zmq::msg_t*) msg_)->data ();
}

size_t zmq_msg_size (zmq_msg_t *msg_)
{
    return 0;//((zmq::msg_t*) msg_)->size ();
}

int zmq_msg_more (zmq_msg_t *msg_)
{
    return 0; //zmq_msg_get (msg_, ZMQ_MORE);
}

int zmq_msg_get (zmq_msg_t *msg_, int property_)
{
    /*
    switch (property_) {
        case ZMQ_MORE:
            return (((zmq::msg_t*) msg_)->flags () & zmq::msg_t::more)? 1: 0;
        case ZMQ_SRCFD:
            // warning: int64_t to int
            return ((zmq::msg_t*) msg_)->fd ();
        case ZMQ_SHARED:
            return (((zmq::msg_t*) msg_)->flags () & zmq::msg_t::shared)? 1: 0;
        default:
            errno = EINVAL;
            return -1;
    }
     */
    return 0;
}

int zmq_msg_set  (zmq_msg_t *msg, int property, int optval)
{
    /*
    //  No properties supported at present
    errno = EINVAL;
    return -1;
     */
    return 0;
}


//  Get message metadata string

const char *zmq_msg_gets (zmq_msg_t *msg_, const char *property_)
{
    /*
    zmq::metadata_t *metadata = ((zmq::msg_t*) msg_)->metadata ();
    const char *value = NULL;
    if (metadata)
        value = metadata->get (std::string (property_));
    if (value)
        return value;
    else {
        errno = EINVAL;
        return NULL;
    }
     */
    return NULL;
}
