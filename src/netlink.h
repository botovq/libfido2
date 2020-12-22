/*
 * Copyright (c) 2020 Yubico AB. All rights reserved.
 * Use of this source code is governed by a BSD-style
 * license that can be found in the LICENSE file.
 */

#ifndef _FIDO_NETLINK_H
#define _FIDO_NETLINK_H

#include <stdlib.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct fido_nl;
typedef struct fido_nl fido_nl_t;

fido_nl_t *fido_nl_new(void);
void fido_nl_free(struct fido_nl **);
int fido_nl_power_nfc(struct fido_nl *, uint32_t);
int fido_nl_get_nfc_target(struct fido_nl *, uint32_t , uint32_t *);

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* !_FIDO_NETLINK_H */