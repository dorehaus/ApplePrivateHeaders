/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Install.framework/Versions/A/Install
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Install/Install-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface IFPerformanceElement : NSObject <NSCopying> {

	timeval _startTime;
	double _elapsedTime;
	double _progressPart;
	double _predictedTime;
	double _actualPercent;
	unsigned _privMRegStart;
	unsigned _privPriRegStart;
	unsigned _privMRegEnd;
	unsigned _privPriRegEnd;
	unsigned long long _privateSizeStart;
	unsigned long long _totalPrivateSizeStart;
	unsigned long long _heapSizeStart;
	unsigned long long _totalHeapSizeStart;
	unsigned long long _privateSizeEnd;
	unsigned long long _totalPrivateSizeEnd;
	unsigned long long _heapSizeEnd;
	unsigned long long _totalHeapSizeEnd;
	char _collectMemory;
	char _didOneShot;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(timeval)startTime;
-(void)stopTimer;
-(void)startTimer;
-(unsigned long long)heapSize;
-(void)setTotalTime:(id)arg1 ;
-(double)elapsedTime;
-(id)memoryInfo;
-(double)progressPart;
-(void)setProgressPart:(double)arg1 ;
-(void)accumulatePerformanceWithItem:(id)arg1 ;
-(void)setCollectMemory:(char)arg1 ;
-(void)pingMemory;
-(unsigned)mallocRegions;
-(unsigned)privateRegions;
-(unsigned long long)privateSize;
-(unsigned long long)totalPrivateSize;
-(unsigned long long)totalHeapSize;
-(double)predictedTime;
-(double)actualPercent;
@end
