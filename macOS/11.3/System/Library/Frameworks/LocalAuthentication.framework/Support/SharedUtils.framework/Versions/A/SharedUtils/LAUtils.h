/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/SharedUtils.framework/Versions/A/SharedUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SharedUtils/SharedUtils-Structs.h>
@interface LAUtils : NSObject
+(char)isScreenLockedWithError:(id*)arg1 ;
+(int)_eosDeviceType;
+(float)globalPreferencesFloatValue:(CFStringRef)arg1 defaultValue:(float)arg2 ;
+(char)isApplePayPolicy:(long long)arg1 inApp:(char)arg2 ;
+(char)isBiometricOnlyPolicy:(long long)arg1 ;
+(char)isSecureBootCapable;
+(char)isGibraltar;
+(char)isApplePayPolicy:(long long)arg1 ;
+(id)auditTokenToData:(SCD_Struct_LA4)arg1 ;
+(char)hasSEP;
+(int)currentUID;
+(char)isAppleSilicon;
+(void*)_loadCTK;
+(char)runningInOsxSystemContext;
+(id)truncateString:(id)arg1 maxLength:(long long)arg2 ;
+(id)UIDFromUserName:(id)arg1 ;
+(char)doesSessionExistForUUID:(unsigned)arg1 ;
+(id)userNameFromUID:(id)arg1 ;
+(char)runningInOsxRecovery;
+(char)isDaytona;
+(Class)ctkClassFromString:(id)arg1 ;
@end
