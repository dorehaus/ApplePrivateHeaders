/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitDaemon/HMDCameraRecordingSessionSignificantEvent.h>

@class NSDate, NSUUID, NSSet, NSData;

@interface HMDMutableCameraRecordingSessionSignificantEvent : HMDCameraRecordingSessionSignificantEvent

@property (assign) unsigned long long reason; 
@property (copy) NSDate * dateOfOccurrence; 
@property (assign) unsigned long long confidenceLevel; 
@property (copy) NSUUID * sessionEntityUUID; 
@property (copy) NSSet * faceClassifications; 
@property (retain) NSData * heroFrameData; 
@property (retain) NSData * faceCropData; 
@property (assign) double timeOffsetWithinClip; 
-(id)copyWithZone:(NSZone*)arg1 ;
@end

