/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DTXConnectionServices.framework/Versions/A/DTXConnectionServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <DTXConnectionServices/DTXConnectionServices-Structs.h>
@class NSObject, NSMutableSet;

@interface DTXSendAndWaitStats : NSObject {

	unsigned long long _totalSendBytes;
	unsigned long long _previousSendBytes;
	unsigned long long _lastStatTime;
	NSObject*<OS_dispatch_queue> _statsQueue;
	mach_timebase_info _timeBaseInfo;
	double _microsecondsPerUnit;
	unsigned long long _compressionTotalDataCompressed;
	unsigned long long _compressionTotalDataUncompressed;
	unsigned long long _compressionTotalNanosToCompress;
	NSMutableSet* _compressionTypeSet;

}
-(id)initWithQueue:(id)arg1 andMicrosPerUnit:(double)arg2 ;
-(void)sentAdditionalBytes:(unsigned long long)arg1 ;
-(void)notifyCompressedData:(unsigned long long)arg1 withUncompressedSize:(unsigned long long)arg2 nanosToCompress:(unsigned long long)arg3 usingCompressionType:(int)arg4 ;
-(void)logStats:(id)arg1 ;
@end
