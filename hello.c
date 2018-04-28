/******************************************************************************
 *
 *   Copyright (C) 2011. All rights reserved.
 *
 *   This program is free software;  you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; version 2 of the License.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY;  without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See
 *   the GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program;  if not, write to the Free Software
 *   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 *
 *****************************************************************************/
#include <linux/module.h>
 
/* The license type -- this affects runtime behavior */
MODULE_LICENSE("GPL");
 
/* The author -- visible when you use modinfo */
MODULE_AUTHOR("Qingmin Liu <calmarrow@gmail.com>");
 
/* The description -- see modinfo */
MODULE_DESCRIPTION("A simple Hello world LKM!");
 
/* The version of the module */
MODULE_VERSION("0.1");
 
static int __init hello_start(void)
{
    printk(KERN_INFO "Loading hello module...\n");
    printk(KERN_INFO "Hello world!\n");

    return 0;
}
 
static void __exit hello_end(void)
{
    printk(KERN_INFO "Goodbye.\n");
}
 
module_init(hello_start);
module_exit(hello_end);

/* end of file */
