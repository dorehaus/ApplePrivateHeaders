/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSMutableArray;

@interface HMDCameraAccessorySettingsConfiguration : HMFObject {

	char _isRecordingCapable;
	char _isRecordingEnabled;
	char _isRecordingAudioEnabled;
	char _inclusionZone;
	char _smartBulletinBoardNotificationEnabled;
	char _reachabilityNotificationEnabled;
	unsigned long long _recordingEventTriggers;
	unsigned long long _numActivityZones;
	NSMutableArray* _numPointsInActivityZones;

}

@property (nonatomic,retain) NSMutableArray * numPointsInActivityZones;              //@synthesize numPointsInActivityZones=_numPointsInActivityZones - In the implementation block
@property (readonly) char isRecordingCapable;                                        //@synthesize isRecordingCapable=_isRecordingCapable - In the implementation block
@property (readonly) char isRecordingEnabled;                                        //@synthesize isRecordingEnabled=_isRecordingEnabled - In the implementation block
@property (readonly) char isRecordingAudioEnabled;                                   //@synthesize isRecordingAudioEnabled=_isRecordingAudioEnabled - In the implementation block
@property (readonly) unsigned long long recordingEventTriggers;                      //@synthesize recordingEventTriggers=_recordingEventTriggers - In the implementation block
@property (readonly) unsigned long long numActivityZones;                            //@synthesize numActivityZones=_numActivityZones - In the implementation block
@property (readonly) char inclusionZone;                                             //@synthesize inclusionZone=_inclusionZone - In the implementation block
@property (readonly) char smartBulletinBoardNotificationEnabled;                     //@synthesize smartBulletinBoardNotificationEnabled=_smartBulletinBoardNotificationEnabled - In the implementation block
@property (readonly) char reachabilityNotificationEnabled;                           //@synthesize reachabilityNotificationEnabled=_reachabilityNotificationEnabled - In the implementation block
-(char)smartBulletinBoardNotificationEnabled;
-(unsigned long long)recordingEventTriggers;
-(char)isRecordingAudioEnabled;
-(char)isRecordingEnabled;
-(id)initWithCameraAccessory:(id)arg1 ;
-(unsigned long long)numActivityZones;
-(char)isRecordingCapable;
-(NSMutableArray *)numPointsInActivityZones;
-(void)setNumPointsInActivityZones:(NSMutableArray *)arg1 ;
-(char)inclusionZone;
-(char)reachabilityNotificationEnabled;
@end
