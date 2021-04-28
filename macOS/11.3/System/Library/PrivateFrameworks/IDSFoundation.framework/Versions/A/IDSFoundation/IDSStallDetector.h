/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/Versions/A/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IDSFoundation/IDSFoundation-Structs.h>
@class NSMutableArray;

@interface IDSStallDetector : NSObject {

	char _verboseLogging;
	os_unfair_lock_s _lock;
	/*^block*/id _stallDetectedBlock;
	/*^block*/id _stallWarningBlock;
	unsigned long long _consumeDelayThreshold;
	double _byteMovementDelayThreshold;
	NSMutableArray* _bytesHistory;
	NSMutableArray* _bytesTimestamps;

}

@property (assign,nonatomic) char verboseLogging;                                   //@synthesize verboseLogging=_verboseLogging - In the implementation block
@property (assign,nonatomic) unsigned long long consumeDelayThreshold; 
@property (assign,nonatomic) double byteMovementDelayThreshold; 
+(id)newDetectorWithName:(id)arg1 stallDetectedBlock:(/*^block*/id)arg2 stallWarningBlock:(/*^block*/id)arg3 ;
+(id)detectorWithName:(id)arg1 ;
+(void)removeDetectorWithName:(id)arg1 ;
-(void)reset;
-(char)consumeTimeCheckForEvent:(id)arg1 produceTime:(unsigned long long)arg2 consumeTime:(unsigned long long)arg3 ;
-(unsigned long long)consumeDelayThreshold;
-(void)setConsumeDelayThreshold:(unsigned long long)arg1 ;
-(double)byteMovementDelayThreshold;
-(void)setByteMovementDelayThreshold:(double)arg1 ;
-(char)byteMovementCheckForEvent:(id)arg1 ;
-(void)produceBytes:(int)arg1 ;
-(void)consumeBytes:(int)arg1 ;
-(void)forceTriggerStallDetectedBlockWithEventName:(id)arg1 ;
-(char)verboseLogging;
-(void)setVerboseLogging:(char)arg1 ;
@end

