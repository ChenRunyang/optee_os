/* SPDX-License-Identifier: (GPL-2.0-only OR BSD-2-Clause) */
/*
 * Copyright (C) 2020-2024, STMicroelectronics - All Rights Reserved
 */

#ifndef _DT_BINDINGS_FIREWALL_STM32MP15_TZC400_H
#define _DT_BINDINGS_FIREWALL_STM32MP15_TZC400_H

#include <dt-bindings/firewall/tzc400.h>

/* NSAID */
#define STM32MP1_TZC_A7_ID		0
#define STM32MP1_TZC_M4_ID		1
#define STM32MP1_TZC_LCD_ID		3
#define STM32MP1_TZC_GPU_ID		4
#define STM32MP1_TZC_MDMA_ID		5
#define STM32MP1_TZC_DMA_ID		6
#define STM32MP1_TZC_USB_HOST_ID	7
#define STM32MP1_TZC_USB_OTG_ID		8
#define STM32MP1_TZC_SDMMC_ID		9
#define STM32MP1_TZC_ETH_ID		10
#define STM32MP1_TZC_DAP_ID		15

#define TZC_REGION_NSEC_ALL_ACCESS_RDWR \
	(TZC_REGION_ACCESS_RDWR(STM32MP1_TZC_A7_ID) | \
	 TZC_REGION_ACCESS_RDWR(STM32MP1_TZC_M4_ID) | \
	 TZC_REGION_ACCESS_RDWR(STM32MP1_TZC_LCD_ID) | \
	 TZC_REGION_ACCESS_RDWR(STM32MP1_TZC_GPU_ID) | \
	 TZC_REGION_ACCESS_RDWR(STM32MP1_TZC_MDMA_ID) | \
	 TZC_REGION_ACCESS_RDWR(STM32MP1_TZC_DMA_ID) | \
	 TZC_REGION_ACCESS_RDWR(STM32MP1_TZC_USB_HOST_ID) | \
	 TZC_REGION_ACCESS_RDWR(STM32MP1_TZC_USB_OTG_ID) | \
	 TZC_REGION_ACCESS_RDWR(STM32MP1_TZC_SDMMC_ID) | \
	 TZC_REGION_ACCESS_RDWR(STM32MP1_TZC_ETH_ID) | \
	 TZC_REGION_ACCESS_RDWR(STM32MP1_TZC_DAP_ID))

#endif /* _DT_BINDINGS_FIREWALL_STM32MP15_TZC400_H */
