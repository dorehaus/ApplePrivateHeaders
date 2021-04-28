/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKit.framework/Versions/A/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HMCameraSource.h>

@class _HMCameraSnapshot, NSDate;

@interface HMCameraSnapshot : HMCameraSource {

	_HMCameraSnapshot* _snapshot;

}

@property (nonatomic,retain) _HMCameraSnapshot * snapshot;              //@synthesize snapshot=_snapshot - In the implementation block
@property (nonatomic,copy,readonly) NSDate * captureDate; 
-(_HMCameraSnapshot *)snapshot;
-(void)setSnapshot:(_HMCameraSnapshot *)arg1 ;
-(NSDate *)captureDate;
-(id)initWithSnapshot:(id)arg1 ;
@end

