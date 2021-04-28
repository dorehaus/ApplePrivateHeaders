/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCFeedDescriptor.h>

@protocol FCChannelProviding;
@class NSString;

@interface FCDraftFeedDescriptor : FCFeedDescriptor {

	NSString* _articleListID;
	NSString* _issueListID;
	id<FCChannelProviding> _channel;

}

@property (nonatomic,readonly) id<FCChannelProviding> channel;              //@synthesize channel=_channel - In the implementation block
@property (nonatomic,readonly) NSString * articleListID;                    //@synthesize articleListID=_articleListID - In the implementation block
@property (nonatomic,readonly) NSString * issueListID;                      //@synthesize issueListID=_issueListID - In the implementation block
-(id)name;
-(id<FCChannelProviding>)channel;
-(long long)feedType;
-(NSString *)articleListID;
-(id)initWithChannel:(id)arg1 articleListID:(id)arg2 issueListID:(id)arg3 ;
-(id)backingTag;
-(id)backingChannel;
-(NSString *)issueListID;
@end

