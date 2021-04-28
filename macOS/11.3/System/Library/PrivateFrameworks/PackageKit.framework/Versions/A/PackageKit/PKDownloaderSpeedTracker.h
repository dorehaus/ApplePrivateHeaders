/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface PKDownloaderSpeedTracker : NSObject {

	unsigned long long _averageBytesPerSecond;
	NSDate* _queueStartTime;
	unsigned long long _bytesSinceQueueStart;
	unsigned long long _bytesAtLastUpdate;

}
-(unsigned long long)averageBytesPerSecond;
-(void)didGetBytes:(unsigned long long)arg1 ;
-(void)updateSpeed;
-(void)setAverageBytesPerSecond:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)description;
-(id)init;
@end

