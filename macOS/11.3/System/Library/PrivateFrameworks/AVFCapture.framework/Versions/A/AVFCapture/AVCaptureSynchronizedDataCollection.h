/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/Versions/A/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class AVCaptureSynchronizedDataCollectionInternal;

@interface AVCaptureSynchronizedDataCollection : NSObject <NSFastEnumeration> {

	AVCaptureSynchronizedDataCollectionInternal* _internal;

}

@property (readonly) unsigned long long count; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_AV10*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)_shortStringForDataOutput:(id)arg1 syncedData:(id)arg2 ;
-(id)_shortStringForDataDroppedReason:(long long)arg1 ;
-(id)synchronizedDataForCaptureOutput:(id)arg1 ;
-(id)_initWithPossibleDataOutputs:(id)arg1 ;
-(void)_setSynchronizedData:(id)arg1 forCaptureOutput:(id)arg2 ;
@end

