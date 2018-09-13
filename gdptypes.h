/***************************************************************************
 * STM32 VGA demo
 * Copyright (C) 2012 Artekit Italy
 * http://www.artekit.eu
 * Written by Ruben H. Meleca
 
### gditypes.h
 
#   This program is free software; you can redistribute it and/or modify
#   it under the terms of the GNU General Public License as published by
#   the Free Software Foundation; either version 2 of the License, or
#   (at your option) any later version.
#
#   This program is distributed in the hope that it will be useful,
#   but WITHOUT ANY WARRANTY; without even the implied warranty of
#   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#   GNU General Public License for more details.
#
#   You should have received a copy of the GNU General Public License
#   along with this program; if not, write to the Free Software
#   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

***************************************************************************/
#ifndef	__GDPTYPES_H
#define	__GDPTYPES_H

#define	NULL			0x0

//	Types
typedef	int				i32;
typedef	unsigned short	u16;
typedef	short			i16;
typedef	unsigned char	u8;
typedef u16				*pu16;

// Compatibility with GCC
typedef	char			*pu8;
#define __irq
#define __packed
#define __gccPacked __attribute__((packed))
#define __align(x) __attribute__ ((aligned (x)))

#endif	// __GDPTYPES_H
