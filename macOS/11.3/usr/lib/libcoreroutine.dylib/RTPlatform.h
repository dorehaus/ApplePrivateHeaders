/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
@interface RTPlatform : NSObject
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)currentPlatform;
+(char)version:(SCD_Struct_RT5)arg1 equalToVersion:(SCD_Struct_RT5)arg2 ;
+(char)version:(SCD_Struct_RT5)arg1 noGreaterThanVersion:(SCD_Struct_RT5)arg2 ;
+(char)operatingSystemNoGreaterThanVersion:(SCD_Struct_RT5)arg1 ;
+(char)operatingSystemAtLeastVersion:(SCD_Struct_RT5)arg1 ;
+(char)version:(SCD_Struct_RT5)arg1 atLeastVersion:(SCD_Struct_RT5)arg2 ;
+(SCD_Struct_RT5)operatingSystemVersionFromString:(id)arg1 ;
-(id)systemVersion;
-(id)serialNumber;
-(id)productType;
-(id)deviceClass;
-(char)internalInstall;
-(id)buildVersion;
-(char)paired;
-(unsigned long long)deviceMemorySize;
-(char)supportsCoreRoutineCapability;
-(id)userAssignedDeviceName;
-(id)systemModel;
-(char)iPhonePlatform;
-(char)watchPlatform;
-(char)macOSPlatform;
-(char)simulatorPlatform;
-(char)usesTSCForClustering;
-(char)lowEndHardware;
-(char)supportsMultiUser;
-(char)iPhoneDevice;
-(char)supportsPairedDevice;
-(char)supportsScenarioTriggers;
-(char)isTinkerPaired;
@end
