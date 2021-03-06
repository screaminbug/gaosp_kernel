/*
 * Copyright (c) 2008 QUALCOMM USA, INC.
 * 
 * All source code in this file is licensed under the following license
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, you can find it at http://www.fsf.org
 *
 * Modem Restart Notifier API
 *
 */

#ifndef _MODEM_NOTIFIER_H
#define _MODEM_NOTIFIER_H

#include <linux/notifier.h>

#define MODEM_NOTIFIER_START_RESET 0x1
#define MODEM_NOTIFIER_END_RESET 0x2

extern int modem_register_notifier(struct notifier_block *nb);
extern int modem_unregister_notifier(struct notifier_block *nb);
extern void modem_notify(void *data, unsigned int state);
extern void modem_queue_start_reset_notify(void);
extern void modem_queue_end_reset_notify(void);


#endif /* _MODEM_NOTIFIER_H */
