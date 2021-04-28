/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol HMFLocking;
@class HMDHome, NSMutableDictionary, NSString, NSMutableSet, HMFTimer, NSUUID;

@interface HMDDeviceNotificationHandler : HMFObject <HMFTimerDelegate> {

	id<HMFLocking> _lock;
	char _delaySupported;
	HMDHome* _home;
	NSMutableDictionary* _updatedMediaPropertiesByMediaProfile;
	NSString* _destination;
	NSString* _requestIdentifier;
	NSMutableSet* _updatedCharacteristics;
	HMFTimer* _coalesceTimer;
	HMFTimer* _delayTimer;
	NSUUID* _notificationUpdateIdentifier;

}

@property (nonatomic,retain) NSString * destination;                                                  //@synthesize destination=_destination - In the implementation block
@property (nonatomic,retain) NSString * requestIdentifier;                                            //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (assign,nonatomic,__weak) HMDHome * home;                                                   //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) NSMutableSet * updatedCharacteristics;                                   //@synthesize updatedCharacteristics=_updatedCharacteristics - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * updatedMediaPropertiesByMediaProfile;              //@synthesize updatedMediaPropertiesByMediaProfile=_updatedMediaPropertiesByMediaProfile - In the implementation block
@property (nonatomic,retain) HMFTimer * coalesceTimer;                                                //@synthesize coalesceTimer=_coalesceTimer - In the implementation block
@property (nonatomic,retain) HMFTimer * delayTimer;                                                   //@synthesize delayTimer=_delayTimer - In the implementation block
@property (assign,nonatomic) char delaySupported;                                                     //@synthesize delaySupported=_delaySupported - In the implementation block
@property (nonatomic,retain) NSUUID * notificationUpdateIdentifier;                                   //@synthesize notificationUpdateIdentifier=_notificationUpdateIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)destination;
-(void)setDestination:(NSString *)arg1 ;
-(HMDHome *)home;
-(NSString *)requestIdentifier;
-(HMFTimer *)delayTimer;
-(void)setDelayTimer:(HMFTimer *)arg1 ;
-(void)setHome:(HMDHome *)arg1 ;
-(void)setRequestIdentifier:(NSString *)arg1 ;
-(void)timerDidFire:(id)arg1 ;
-(id)initWithDestination:(id)arg1 watchDevice:(char)arg2 withRequestIdentifier:(id)arg3 home:(id)arg4 ;
-(id)sendNotificationForCharacteristicChanges:(id)arg1 withRequestIdentifier:(id)arg2 ;
-(id)sendNotificationForMediaProperties:(id)arg1 withRequestIdentifier:(id)arg2 ;
-(NSMutableSet *)updatedCharacteristics;
-(id)_beginCoalesce:(char)arg1 ;
-(id)_dispatchNotification;
-(HMFTimer *)coalesceTimer;
-(void)setCoalesceTimer:(HMFTimer *)arg1 ;
-(char)delaySupported;
-(NSUUID *)notificationUpdateIdentifier;
-(void)setNotificationUpdateIdentifier:(NSUUID *)arg1 ;
-(void)setUpdatedCharacteristics:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)updatedMediaPropertiesByMediaProfile;
-(void)setUpdatedMediaPropertiesByMediaProfile:(NSMutableDictionary *)arg1 ;
-(void)setDelaySupported:(char)arg1 ;
@end

