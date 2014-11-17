//
//  OODefaultPlayerInfo.h
//  OoyalaSDK
//
//  Created by Michael Len on 8/27/13.
//  Copyright (c) 2013 Ooyala, Inc. All rights reserved.
//
//  This is the default implementation of OOPlayerInfo.  OOPlayerInfo is used for providing information for Authorization
//  You can extend this class and override any of the settings in OOPlayerInfo, then call
//  [OOStreamPlayer setDefaultPlayerInfo:customPlayerInfo]; before you setEmbedCode

#include "OOPlayerInfo.h"

@interface OODefaultPlayerInfo : NSObject <OOPlayerInfo>
@end
