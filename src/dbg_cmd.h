/* 
Copyright (C) 2004 Free Software Foundation, Inc.
This file is part of GNU Make.

GNU Make is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GNU Make is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GNU Make; see the file COPYING.  If not, write to
the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA.  */

#ifndef SEEN_DBG_CMD_H
#define SEEN_DBG_CMD_H
#include "job.h"

extern bool b_in_debugger;

/*!
  debugger command interface. 
*/
extern debug_return_t enter_debugger (target_stack_node_t *p, 
				      file_t *p_target, int err);

#endif /* SEEN_DBG_CMD_H*/