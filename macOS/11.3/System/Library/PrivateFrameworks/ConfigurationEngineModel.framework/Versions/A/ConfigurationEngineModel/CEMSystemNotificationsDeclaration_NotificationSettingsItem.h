/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/Versions/A/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString, NSNumber;

@interface CEMSystemNotificationsDeclaration_NotificationSettingsItem : CEMPayloadBase {

	NSString* _payloadBundleIdentifier;
	NSNumber* _payloadNotificationsEnabled;
	NSNumber* _payloadShowInNotificationCenter;
	NSNumber* _payloadShowInLockScreen;
	NSNumber* _payloadAlertType;
	NSNumber* _payloadBadgesEnabled;
	NSNumber* _payloadSoundsEnabled;
	NSNumber* _payloadShowInCarPlay;
	NSNumber* _payloadEmergencyEnabled;
	NSNumber* _payloadCriticalAlertEnabled;
	NSNumber* _payloadGroupingType;

}

@property (nonatomic,copy) NSString * payloadBundleIdentifier;                      //@synthesize payloadBundleIdentifier=_payloadBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * payloadNotificationsEnabled;                  //@synthesize payloadNotificationsEnabled=_payloadNotificationsEnabled - In the implementation block
@property (nonatomic,copy) NSNumber * payloadShowInNotificationCenter;              //@synthesize payloadShowInNotificationCenter=_payloadShowInNotificationCenter - In the implementation block
@property (nonatomic,copy) NSNumber * payloadShowInLockScreen;                      //@synthesize payloadShowInLockScreen=_payloadShowInLockScreen - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAlertType;                             //@synthesize payloadAlertType=_payloadAlertType - In the implementation block
@property (nonatomic,copy) NSNumber * payloadBadgesEnabled;                         //@synthesize payloadBadgesEnabled=_payloadBadgesEnabled - In the implementation block
@property (nonatomic,copy) NSNumber * payloadSoundsEnabled;                         //@synthesize payloadSoundsEnabled=_payloadSoundsEnabled - In the implementation block
@property (nonatomic,copy) NSNumber * payloadShowInCarPlay;                         //@synthesize payloadShowInCarPlay=_payloadShowInCarPlay - In the implementation block
@property (nonatomic,copy) NSNumber * payloadEmergencyEnabled;                      //@synthesize payloadEmergencyEnabled=_payloadEmergencyEnabled - In the implementation block
@property (nonatomic,copy) NSNumber * payloadCriticalAlertEnabled;                  //@synthesize payloadCriticalAlertEnabled=_payloadCriticalAlertEnabled - In the implementation block
@property (nonatomic,copy) NSNumber * payloadGroupingType;                          //@synthesize payloadGroupingType=_payloadGroupingType - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithBundleIdentifier:(id)arg1 ;
+(id)buildWithBundleIdentifier:(id)arg1 withNotificationsEnabled:(id)arg2 withShowInNotificationCenter:(id)arg3 withShowInLockScreen:(id)arg4 withAlertType:(id)arg5 withBadgesEnabled:(id)arg6 withSoundsEnabled:(id)arg7 withShowInCarPlay:(id)arg8 withEmergencyEnabled:(id)arg9 withCriticalAlertEnabled:(id)arg10 withGroupingType:(id)arg11 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadBundleIdentifier:(NSString *)arg1 ;
-(NSString *)payloadBundleIdentifier;
-(void)setPayloadNotificationsEnabled:(NSNumber *)arg1 ;
-(void)setPayloadShowInNotificationCenter:(NSNumber *)arg1 ;
-(void)setPayloadShowInLockScreen:(NSNumber *)arg1 ;
-(void)setPayloadAlertType:(NSNumber *)arg1 ;
-(void)setPayloadBadgesEnabled:(NSNumber *)arg1 ;
-(void)setPayloadSoundsEnabled:(NSNumber *)arg1 ;
-(void)setPayloadShowInCarPlay:(NSNumber *)arg1 ;
-(void)setPayloadEmergencyEnabled:(NSNumber *)arg1 ;
-(void)setPayloadCriticalAlertEnabled:(NSNumber *)arg1 ;
-(void)setPayloadGroupingType:(NSNumber *)arg1 ;
-(NSNumber *)payloadNotificationsEnabled;
-(NSNumber *)payloadShowInNotificationCenter;
-(NSNumber *)payloadShowInLockScreen;
-(NSNumber *)payloadAlertType;
-(NSNumber *)payloadBadgesEnabled;
-(NSNumber *)payloadSoundsEnabled;
-(NSNumber *)payloadShowInCarPlay;
-(NSNumber *)payloadEmergencyEnabled;
-(NSNumber *)payloadCriticalAlertEnabled;
-(NSNumber *)payloadGroupingType;
@end

