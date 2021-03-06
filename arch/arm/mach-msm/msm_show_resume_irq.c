/* Copyright (c) 2011, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

#if defined(CONFIG_MACH_MSM8926_X3N_KR) || defined(CONFIG_MACH_MSM8926_G2M_KR) || defined(CONFIG_MACH_MSM8926_F70N_KR) || defined(CONFIG_MACH_MSM8926_JAGN_KR) || defined(CONFIG_MACH_MSM8926_B2LN_KR) || defined(CONFIG_MACH_MSM8926_VFP_KR)
/*enable the debug mask to print wakeup IRQ log*/
int msm_show_resume_irq_mask = 1;
#else
int msm_show_resume_irq_mask;
#endif

module_param_named(
	debug_mask, msm_show_resume_irq_mask, int, S_IRUGO | S_IWUSR | S_IWGRP
);
