/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/Versions/A/PodcastsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface MTCoalescableWorkManifest : NSObject {

	/*^block*/id _workBlock;
	NSArray* _completions;

}

@property (nonatomic,copy) id workBlock;                         //@synthesize workBlock=_workBlock - In the implementation block
@property (nonatomic,retain) NSArray * completions;              //@synthesize completions=_completions - In the implementation block
-(id)description;
-(NSArray *)completions;
-(void)setWorkBlock:(id)arg1 ;
-(id)workBlock;
-(void)setCompletions:(NSArray *)arg1 ;
-(id)initWithWorkBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)manifestByReplacingWorkBlock:(/*^block*/id)arg1 appendingCompletion:(/*^block*/id)arg2 ;
-(id)initWithWorkBlock:(/*^block*/id)arg1 completions:(id)arg2 ;
@end

