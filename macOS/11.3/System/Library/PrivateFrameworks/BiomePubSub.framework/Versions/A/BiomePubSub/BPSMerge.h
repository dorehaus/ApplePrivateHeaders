/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/Versions/A/BiomePubSub
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiomePubSub/BPSPublisher.h>

@class BPSPublisher;

@interface BPSMerge : BPSPublisher {

	BPSPublisher* _a;
	BPSPublisher* _b;

}

@property (a,nonatomic,readonly) BPSPublisher * a;              //@synthesize a=_a - In the implementation block
@property (b,nonatomic,readonly) BPSPublisher * b;              //@synthesize b=_b - In the implementation block
-(id)initWithUpstreams:(id)arg1 bookmarkState:(id)arg2 ;
-(char)canStoreInternalStateInBookmark;
-(id)bookmarkableUpstreams;
-(id)init;
-(BPSPublisher *)a;
-(BPSPublisher *)b;
-(void)subscribe:(id)arg1 ;
-(id)initWithA:(id)arg1 b:(id)arg2 ;
@end

