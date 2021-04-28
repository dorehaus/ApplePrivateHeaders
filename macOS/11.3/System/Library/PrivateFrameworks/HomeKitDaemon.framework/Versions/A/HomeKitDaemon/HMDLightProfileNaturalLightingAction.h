/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDAction.h>

@class HMDLightProfile, NSUUID, HMFUnfairLock, NSNotificationCenter;

@interface HMDLightProfileNaturalLightingAction : HMDAction {

	char _naturalLightingEnabled;
	HMDLightProfile* _lightProfile;
	NSUUID* _lightProfileUUID;
	HMFUnfairLock* _lock;
	NSNotificationCenter* _notificationCenter;

}

@property (readonly) HMFUnfairLock * lock;                                            //@synthesize lock=_lock - In the implementation block
@property (getter=isNaturalLightingEnabled) char naturalLightingEnabled;              //@synthesize naturalLightingEnabled=_naturalLightingEnabled - In the implementation block
@property (readonly) NSNotificationCenter * notificationCenter;                       //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (copy,readonly) NSUUID * lightProfileUUID;                                  //@synthesize lightProfileUUID=_lightProfileUUID - In the implementation block
@property (retain) HMDLightProfile * lightProfile;                                    //@synthesize lightProfile=_lightProfile - In the implementation block
+(char)supportsSecureCoding;
+(id)logCategory;
+(id)actionWithDictionaryRepresentation:(id)arg1 home:(id)arg2 ;
+(id)actionWithDictionaryRepresentation:(id)arg1 actionSet:(id)arg2 ;
-(HMFUnfairLock *)lock;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)type;
-(id)dictionaryRepresentation;
-(NSNotificationCenter *)notificationCenter;
-(Class)modelClass;
-(id)attributeDescriptions;
-(char)isNaturalLightingEnabled;
-(void)setNaturalLightingEnabled:(char)arg1 ;
-(NSUUID *)lightProfileUUID;
-(HMDLightProfile *)lightProfile;
-(void)setLightProfile:(HMDLightProfile *)arg1 ;
-(char)isAssociatedWithAccessory:(id)arg1 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2 ;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(id)stateDump;
-(id)associatedAccessories;
-(id)initWithModelObject:(id)arg1 parent:(id)arg2 error:(id*)arg3 ;
-(void)configureWithHome:(id)arg1 ;
-(id)initWithUUID:(id)arg1 lightProfileUUID:(id)arg2 naturalLightingEnabled:(char)arg3 actionSet:(id)arg4 notificationCenter:(id)arg5 ;
-(id)initWithUUID:(id)arg1 lightProfileUUID:(id)arg2 naturalLightingEnabled:(char)arg3 actionSet:(id)arg4 ;
-(void)handleAccessoryProfileAddedNotification:(id)arg1 ;
@end

