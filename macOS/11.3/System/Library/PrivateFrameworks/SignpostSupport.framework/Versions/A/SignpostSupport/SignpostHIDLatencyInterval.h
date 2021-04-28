/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/Versions/A/SignpostSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SignpostSupport/SignpostAnimationSubInterval.h>
#import <SignpostSupport/SignpostCARenderServerFrameMetadata.h>

@interface SignpostHIDLatencyInterval : SignpostAnimationSubInterval <SignpostCARenderServerFrameMetadata> {

	unsigned _swapId;
	unsigned _frameSeed;

}

@property (nonatomic,readonly) unsigned swapId;                 //@synthesize swapId=_swapId - In the implementation block
@property (nonatomic,readonly) unsigned frameSeed;              //@synthesize frameSeed=_frameSeed - In the implementation block
-(unsigned)frameSeed;
-(id)initWithHIDLatencyInterval:(id)arg1 ;
-(unsigned)swapId;
-(id)initWithStartMCT:(unsigned long long)arg1 endMCT:(unsigned long long)arg2 timebaseRatio:(double)arg3 swapID:(unsigned)arg4 frameSeed:(unsigned)arg5 ;
@end

