/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/GameController.framework/Versions/A/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class GCDeviceHaptics, NSArray;


@protocol GCDeviceHapticCapabilityInfo <GCControllerComponent>
@property (readonly) GCDeviceHaptics * deviceHaptics; 
@property (copy,readonly) NSArray * hapticEngines; 
@required
-(void)initializeHapticEngines;
-(void)removeHapticEngines;
-(GCDeviceHaptics *)deviceHaptics;
-(NSArray *)hapticEngines;

@end

