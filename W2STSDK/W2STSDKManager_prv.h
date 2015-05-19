//
//  W2STSDKManager_prv.h
//  W2STSDK
//
//  Created by Giovanni Visentini on 19/05/15.
//  Copyright (c) 2015 STCentralLab. All rights reserved.
//

#ifndef W2STSDK_W2STSDKManager_prv_h
#define W2STSDK_W2STSDKManager_prv_h

#include "W2STSDKManager.h"

/**
 *  private method
 */
@interface W2STSDKManager(Prv)

/**
 *  start a connection with a ble preipheral
 *
 *  @param peripheral device to connect
 */
-(void)connect:(CBPeripheral*)peripheral;


/**
 *  close the connection with a ble peripheral
 *
 *  @param peripheral device to disconnect
 */
-(void)disconnect:(CBPeripheral*)peripheral;

@end

#endif
