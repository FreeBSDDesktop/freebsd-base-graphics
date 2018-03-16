/*-
 * Copyright (c) 2010 Isilon Systems, Inc.
 * Copyright (c) 2010 iX Systems, Inc.
 * Copyright (c) 2010 Panasas, Inc.
 * Copyright (c) 2013, 2014 Mellanox Technologies, Ltd.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice unmodified, this list of conditions, and the following
 *    disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * $FreeBSD$
 */
#ifndef _ASM_UACCESS_H_
#define _ASM_UACCESS_H_

/*

Disable. Need __{get,put}_user_size() functions...
Use defaults in linux/uaccess.h for now.

#define	user_access_begin() stac()
#define	user_access_end()   clac()

#define	unsafe_put_user(x, ptr, err_label)				\
	do {								\
		int __error;						\
		__typeof__(*(ptr)) __x = (x);				\
		__put_user_size(__x, (ptr), sizeof(*(ptr)),		\
		    __error, -EFAULT);					\
		if (unlikely(__error)) goto err_label;			\
	} while (0)

#define	unsafe_get_user(x, ptr, err_label)				\
	do {								\
		int __error;						\
		__inttype(*(ptr)) __x;					\
		__get_user_size(__x, (ptr), sizeof(*(ptr)),		\
		    __error, -EFAULT);					\
		(x) = (__force __typeof__(*(ptr)))__x;			\
		if (unlikely(__error)) goto err_label;			\
	} while (0)
*/

#endif	/* _ASM_UACCESS_H_ */
