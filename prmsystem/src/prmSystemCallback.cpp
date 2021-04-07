/*!****************************************************************************
 * @file		prmSystemCallback.c
 * @author		d_el
 * @version		V1.0
 * @date		17.03.2021
 * @brief
 */

/*!****************************************************************************
 * Include
 */
#include <iostream>
#include "prmSystem.h"

void d7CallBack(Prm::Val<uint32_t>& prm, bool read, void *arg){
	std::cout << " (" << __FUNCTION__ << ") ";
	prm.val += reinterpret_cast<size_t>(prm.getarg());
}

/***************** Copyright (C) Storozhenko Roman ******* END OF FILE *******/
