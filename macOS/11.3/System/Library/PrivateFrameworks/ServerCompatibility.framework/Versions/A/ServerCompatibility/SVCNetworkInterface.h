/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ServerCompatibility.framework/Versions/A/ServerCompatibility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ServerCompatibility/ServerCompatibility-Structs.h>
@interface SVCNetworkInterface : NSObject
+(id)reservedNetworkInterfaceBSDNamesWithDynamicStoreRef:(SCDynamicStoreRef)arg1 ;
+(id)reservedNetworkInterfaceBSDNamesWithNetworkSharingSettings:(id)arg1 ;
+(id)allNetworkInterfaceBSDNames;
+(id)interfaceBSDNameForBridgeBSDName:(id)arg1 ;
+(id)reservedNetworkInterfaceBSDNames;
+(SCNetworkInterfaceRef)SCNetworkInterfaceCreateWithBSDName:(id)arg1 ;
+(char)SCNetworkInterfaceIsPhysicalEthernet:(SCNetworkInterfaceRef)arg1 ;
@end

