/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Versions/A/Frameworks/MPSCore.framework/Versions/A/MPSCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLBuffer;
@interface MPSPredicate : NSObject {

	id<MTLBuffer> _predicateBuffer;
	unsigned long long _predicateOffset;

}

@property (nonatomic,retain,readonly) id<MTLBuffer> predicateBuffer;              //@synthesize predicateBuffer=_predicateBuffer - In the implementation block
@property (nonatomic,readonly) unsigned long long predicateOffset;                //@synthesize predicateOffset=_predicateOffset - In the implementation block
+(id)predicateWithBuffer:(id)arg1 offset:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)debugDescription;
-(id)init;
-(id)initWithDevice:(id)arg1 ;
-(id)debugQuickLookObject;
-(id)initWithBuffer:(id)arg1 offset:(unsigned long long)arg2 ;
-(id<MTLBuffer>)predicateBuffer;
-(unsigned long long)predicateOffset;
@end

