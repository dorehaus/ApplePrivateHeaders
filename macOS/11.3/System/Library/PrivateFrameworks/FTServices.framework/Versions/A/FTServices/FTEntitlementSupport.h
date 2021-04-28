/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/Versions/A/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <FTServices/FTServices-Structs.h>
@class NSDictionary;

@interface FTEntitlementSupport : NSObject

@property (nonatomic,readonly) char faceTimeNonWiFiEntitled; 
@property (nonatomic,readonly) NSDictionary * registrationState; 
+(id)sharedInstance;
-(id)init;
-(char)_setupCTServerConnection;
-(NSDictionary *)registrationState;
-(char)faceTimeNonWiFiEntitled;
-(id)_rawEntitlementValue;
-(void)_entitlementStatusChanged;
-(void)_updateEntitlementStatusUsingCTEntitlementsInfo:(CFDictionaryRef)arg1 ;
-(char)_registerForCTEntitlementNotifications;
-(void)_unregisterForCTEntitlementNotifications;
-(void)_cleanupMachInfo;
-(char)_reconnectCTServerConnectionIfNecessary;
-(char)_disconnectCTServerConnection;
@end

