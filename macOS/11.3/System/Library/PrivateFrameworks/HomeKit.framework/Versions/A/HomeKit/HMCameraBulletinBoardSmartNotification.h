/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKit.framework/Versions/A/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HMBulletinBoardNotification.h>

@class NSUUID, HMCameraUserSettings;

@interface HMCameraBulletinBoardSmartNotification : HMBulletinBoardNotification {

	NSUUID* _targetUUID;
	HMCameraUserSettings* _cameraUserSettings;

}

@property (__weak) HMCameraUserSettings * cameraUserSettings;                   //@synthesize cameraUserSettings=_cameraUserSettings - In the implementation block
@property (readonly) unsigned long long significantEventTypes; 
@property (readonly) unsigned long long personFamiliarityOptions; 
@property (readonly) unsigned long long notificationEventTriggers; 
+(id)significantEventTypesInPredicate:(id)arg1 ;
+(id)personFamiliarityOptionsInPredicate:(id)arg1 ;
+(id)predicateForSignificantEventTypes:(unsigned long long)arg1 personFamiliarityOptions:(unsigned long long)arg2 ;
+(id)predicateForCameraSignificantEvent:(unsigned long long)arg1 ;
-(id)description;
-(id)targetUUID;
-(HMCameraUserSettings *)cameraUserSettings;
-(unsigned long long)significantEventTypes;
-(void)setCameraUserSettings:(HMCameraUserSettings *)arg1 ;
-(id)initWithBulletinBoardNotification:(id)arg1 ;
-(unsigned long long)personFamiliarityOptions;
-(void)commitWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)notificationEventTriggers;
-(void)__configureWithContext:(id)arg1 cameraUserSettings:(id)arg2 ;
@end
