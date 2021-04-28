/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/Versions/A/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VCPObjectPool;

@interface VCPLoaned : NSObject {

	id _object;
	VCPObjectPool* _pool;

}

@property (nonatomic,readonly) id object;              //@synthesize object=_object - In the implementation block
-(void)dealloc;
-(id)object;
-(id)initWithObject:(id)arg1 fromPool:(id)arg2 ;
@end

