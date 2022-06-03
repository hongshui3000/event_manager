/*
 * Copyright (c) 2022 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef _ORDER_EVENT_H_
#define _ORDER_EVENT_H_

/**
 * @brief Order Event
 * @defgroup order_event Order Event
 * @{
 */

#include <app_event_manager.h>

#ifdef __cplusplus
extern "C" {
#endif

struct order_event {
	struct app_event_header header;

	int val;
};

APP_EVENT_TYPE_DECLARE(order_event);

#ifdef __cplusplus
}
#endif

/**
 * @}
 */

#endif /* _ORDER_EVENT_H_ */
