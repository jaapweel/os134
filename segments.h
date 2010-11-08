/* OS134, Copyright (C) 2005, Benjamin Stein, Jaap Weel, Ting Liao --
This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or (at
your option) any later version.  This program is distributed in the
hope that it will be useful, but WITHOUT ANY WARRANTY; without even
the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
PURPOSE.  See the GNU General Public License for more details.  You
should have received a copy of the GNU General Public License along
with this program; if not, write to the Free Software Foundation,
Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA */

/*
 * Segments. This header can be included form C and assembly files.
 */

#ifndef _SEGMENTS_H
#define _SEGMENTS_H

/*
 * These are some fixed offsets into the GDT.
 */
#define I386_DATA_SEGMENT_DESCRIPTOR_OFFSET 0x10
#define I386_CODE_SEGMENT_DESCRIPTOR_OFFSET 0x08

#ifdef C_CODE
general_error segments_install_gdt(void);
#endif /* C_CODE */

#endif /* _SEGMENTS_H */