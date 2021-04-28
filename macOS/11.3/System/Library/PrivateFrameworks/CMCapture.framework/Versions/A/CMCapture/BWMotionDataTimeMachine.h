/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CMCapture/CMCapture-Structs.h>
@class NSMutableArray, NSArray;

@interface BWMotionDataTimeMachine : NSObject {

	NSMutableArray* _cache;
	NSArray* _motionMetadataKeys;
	NSArray* _sampleBufferAttachmentKeys;
	unsigned long long _earliestAvailableMotionDataSerialNumber;
	unsigned long long _latestAvailableMotionDataSerialNumber;
	unsigned long long _capacity;
	char _synchronizedSlaveMotionDataCachingEnabled;
	char _cacheEntireMetadataDictionary;
	OpaqueFigSimpleMutexRef _propertyMutex;

}

@property (readonly) char synchronizedSlaveMotionDataCachingEnabled; 
@property (readonly) unsigned long long earliestAvailableMotionDataSerialNumber; 
@property (readonly) unsigned long long latestAvailableMotionDataSerialNumber; 
+(void)initialize;
-(void)dealloc;
-(id)_copyMotionDataForSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 synchronizedSlaveMotionDataCachingEnabled:(char)arg2 cacheEntireMetadataDictionary:(char)arg3 ;
-(char)synchronizedSlaveMotionDataCachingEnabled;
-(unsigned long long)earliestAvailableMotionDataSerialNumber;
-(unsigned long long)latestAvailableMotionDataSerialNumber;
-(unsigned long long)addMotionDataToCacheForSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)copyMotionDataForSerialNumber:(unsigned long long)arg1 ;
-(id)copyMotionDataForStartingSerialNumber:(unsigned long long)arg1 endingSerialNumber:(unsigned long long)arg2 ;
@end

