/* arch/arm/mach-msm/include/mach/msm_audio_amrnb.h
 *
 * Copyright (c) 2009 QUALCOMM USA, INC.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, you can find it at http://www.fsf.org.
 *
 */

#ifndef __MSM_AUDIO_AMRNB_H
#define __MSM_AUDIO_AMRNB_H

#include <linux/msm_audio.h>

#define AUDIO_GET_AMRNB_ENC_CONFIG  _IOW(AUDIO_IOCTL_MAGIC, \
	(AUDIO_MAX_COMMON_IOCTL_NUM+0), unsigned)
#define AUDIO_SET_AMRNB_ENC_CONFIG  _IOR(AUDIO_IOCTL_MAGIC, \
	(AUDIO_MAX_COMMON_IOCTL_NUM+1), unsigned)

struct msm_audio_amrnb_enc_config {
	unsigned short voicememoencweight1;
	unsigned short voicememoencweight2;
	unsigned short voicememoencweight3;
	unsigned short voicememoencweight4;
	unsigned short dtx_mode_enable; /* 0xFFFF - enable, 0- disable */
	unsigned short test_mode_enable; /* 0xFFFF - enable, 0- disable */
	unsigned short enc_mode; /* 0-MR475,1-MR515,2-MR59,3-MR67,4-MR74
				5-MR795, 6- MR102, 7- MR122(default) */
};
#endif /* __MSM_AUDIO_AMRNB_H */
