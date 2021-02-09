///*!****************************************************************************
// * @file		prmSystemCallback.c
// * @author		d_el
// * @version		V1.0
// * @date		Dec 11, 2019
// * @brief
// */
//
///*!****************************************************************************
// * Include
// */
//#include <string.h>
//#include <stddef.h>
//#include <plog.h>
//#include "prmSystemCallback.h"
//
///*!****************************************************************************
// * MEMORY
// */
//#define LOG_LOCAL_LEVEL P_LOG_VERBOSE /*P_LOG_ERROR P_LOG_VERBOSE*/
//static const char *logTag = "prmSystemCallback";
//
///*!****************************************************************************
// * @brief
// */
//void cpyfrom(const Prm& prm, bool read, void *arg){
//	const Prm *p = Prm::get(prm.parameter());
//	if(p == NULL){
//		return;
//	}
//	if(prm.type() != p->type()){
//		return;
//	}
//	switch(prm.type()){
//		case Prm::Type::boolFrmt:
//			prm.write(p->read(false).tbool, false);
//			break;
//		case Prm::Type::charFrmt:
//			p->write(p->read(false).tchar, false);
//			break;
//		case Prm::Type::u8Frmt:
//			prm.write(p->read(false).u8, false);
//			break;
//		case Prm::Type::s8Frmt:
//			prm.write(p->read(false).s8, false);
//			break;
//		case Prm::Type::u16Frmt:
//			prm.write(p->read(false).u16, false);
//			break;
//		case Prm::Type::s16Frmt:
//			prm.write(p->read(false).s16, false);
//			break;
//		case Prm::Type::u32Frmt:
//			prm.write(p->read(false).u32, false);
//			break;
//		case Prm::Type::s32Frmt:
//			prm.write(p->read(false).s32, false);
//			break;
//		case Prm::Type::floatFrmt:
//			prm.write(p->read(false).tfloat, false);
//			break;
//		case Prm::Type::unixTimeFrmt:
//		case Prm::Type::ipAdrFrmt:
//		case Prm::Type::bytesFmt:
//			prm.write(p->read(false).u32, false);
//			break;
//	}
//}
//
///***************** Copyright (C) Storozhenko Roman ******* END OF FILE *******/
