/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CMCapture/CMCapture-Structs.h>
@class NSMutableArray;

@interface BWVideoOrientationTimeMachine : NSObject {

	NSMutableArray* _cache;
	unsigned long long _capacity;
	opaqueCMFormatDescriptionRef _formatDescription;
	unsigned _metadataLocalID;
	OpaqueFigSimpleMutexRef _propertyMutex;

}
+(void)initialize;
-(void)dealloc;
-(id)debugDescription;
-(id)initWithCapacity:(unsigned long long)arg1 formatDescription:(opaqueCMFormatDescriptionRef)arg2 metadataLocalID:(unsigned)arg3 ;
-(void)addItemToCacheWithPTS:(SCD_Struct_Fi8)arg1 exifOrientation:(short)arg2 ;
-(id)_cachedItemsFromPTSSeconds:(double)arg1 toPTSSeconds:(double)arg2 ;
-(opaqueCMSampleBufferRef)_newSbufWithCachedItem:(id)arg1 trimAtStartPTS:(SCD_Struct_Fi8)arg2 referencePTS:(SCD_Struct_Fi8)arg3 ;
-(id)copyVideoOrientationSbufFromPTS:(SCD_Struct_Fi8)arg1 toPTS:(SCD_Struct_Fi8)arg2 referencePTS:(SCD_Struct_Fi8)arg3 ;
@end
