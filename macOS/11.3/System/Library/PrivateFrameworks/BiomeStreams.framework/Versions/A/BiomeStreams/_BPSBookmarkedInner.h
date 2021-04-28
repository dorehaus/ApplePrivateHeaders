/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/Versions/A/BiomeStreams
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiomeStreams/BiomeStreams-Structs.h>
#import <BiomePubSub/BPSSubscription.h>
#import <libobjc.A.dylib/BPSSubscriber.h>

@protocol BPSSubscriber, BPSPublisher;
@class BPSSubscription, NSString;

@interface _BPSBookmarkedInner : BPSSubscription <BPSSubscriber> {

	os_unfair_lock_s _lock;
	id<BPSSubscriber> _downstream;
	id<BPSPublisher> _upstream;
	BPSSubscription* _subscription;
	id _state;

}

@property (nonatomic,retain) id<BPSSubscriber> downstream;                //@synthesize downstream=_downstream - In the implementation block
@property (nonatomic,retain) id<BPSPublisher> upstream;                   //@synthesize upstream=_upstream - In the implementation block
@property (nonatomic,retain) BPSSubscription * subscription;              //@synthesize subscription=_subscription - In the implementation block
@property (nonatomic,retain) id state;                                    //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)state;
-(void)setState:(id)arg1 ;
-(void)cancel;
-(void)setSubscription:(BPSSubscription *)arg1 ;
-(BPSSubscription *)subscription;
-(id<BPSSubscriber>)downstream;
-(void)receiveCompletion:(id)arg1 ;
-(long long)receiveInput:(id)arg1 ;
-(void)setDownstream:(id<BPSSubscriber>)arg1 ;
-(void)requestDemand:(long long)arg1 ;
-(void)receiveSubscription:(id)arg1 ;
-(id)newBookmark;
-(id<BPSPublisher>)upstream;
-(id)initWithUpstream:(id)arg1 downstream:(id)arg2 state:(id)arg3 ;
-(void)setUpstream:(id<BPSPublisher>)arg1 ;
@end
