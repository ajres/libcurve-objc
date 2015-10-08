//
//  zcert.h
//  libcurve-objc
//
//  Created by Andrew Reslan on 27/09/2015.
//  Copyright © 2015 novoĉo. All rights reserved.
//

#ifndef zcert_h
#define zcert_h

typedef struct _zcert_t zcert_t;

zcert_t *zcert_new_from (unsigned char *public_key, unsigned char *secret_key);

zcert_t *zcert_new (void);

zcert_t *zcert_new_from (unsigned char *public_key, unsigned char *secret_key);

void zcert_destroy (zcert_t **self_p);

unsigned char *zcert_public_key (zcert_t *self);

unsigned char *zcert_secret_key (zcert_t *self);

zcert_t *zcert_dup (zcert_t *self);

#endif /* zcert_h */
