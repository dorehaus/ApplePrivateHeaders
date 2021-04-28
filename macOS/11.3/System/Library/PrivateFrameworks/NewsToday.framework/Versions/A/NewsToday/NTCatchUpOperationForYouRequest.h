/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/Versions/A/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol FCBundleSubscriptionProviderType;
@class NSString, NSSet;

@interface NTCatchUpOperationForYouRequest : NSObject <NSCopying> {

	NSString* _topStoriesChannelID;
	NSSet* _hiddenFeedIDs;
	NSString* _paidBundleFeedID;
	NSSet* _mutedTagIDs;
	NSSet* _purchasedTagIDs;
	NSSet* _subscribedTagIDs;
	id<FCBundleSubscriptionProviderType> _bundleSubscriptionProvider;
	long long _cutoffTime;
	unsigned long long _headlinesPerFeedFetchCount;
	long long _fetchingBin;
	NSString* _throttlingIdentifier;
	double _minimumUpdateInterval;

}

@property (nonatomic,copy,readonly) NSString * topStoriesChannelID;                                               //@synthesize topStoriesChannelID=_topStoriesChannelID - In the implementation block
@property (nonatomic,copy,readonly) NSSet * hiddenFeedIDs;                                                        //@synthesize hiddenFeedIDs=_hiddenFeedIDs - In the implementation block
@property (nonatomic,copy,readonly) NSString * paidBundleFeedID;                                                  //@synthesize paidBundleFeedID=_paidBundleFeedID - In the implementation block
@property (nonatomic,copy,readonly) NSSet * mutedTagIDs;                                                          //@synthesize mutedTagIDs=_mutedTagIDs - In the implementation block
@property (nonatomic,copy,readonly) NSSet * purchasedTagIDs;                                                      //@synthesize purchasedTagIDs=_purchasedTagIDs - In the implementation block
@property (nonatomic,copy,readonly) NSSet * subscribedTagIDs;                                                     //@synthesize subscribedTagIDs=_subscribedTagIDs - In the implementation block
@property (nonatomic,copy,readonly) id<FCBundleSubscriptionProviderType> bundleSubscriptionProvider;              //@synthesize bundleSubscriptionProvider=_bundleSubscriptionProvider - In the implementation block
@property (nonatomic,readonly) long long cutoffTime;                                                              //@synthesize cutoffTime=_cutoffTime - In the implementation block
@property (nonatomic,readonly) unsigned long long headlinesPerFeedFetchCount;                                     //@synthesize headlinesPerFeedFetchCount=_headlinesPerFeedFetchCount - In the implementation block
@property (nonatomic,readonly) long long fetchingBin;                                                             //@synthesize fetchingBin=_fetchingBin - In the implementation block
@property (nonatomic,copy,readonly) NSString * throttlingIdentifier;                                              //@synthesize throttlingIdentifier=_throttlingIdentifier - In the implementation block
@property (nonatomic,readonly) double minimumUpdateInterval;                                                      //@synthesize minimumUpdateInterval=_minimumUpdateInterval - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(long long)fetchingBin;
-(long long)cutoffTime;
-(unsigned long long)headlinesPerFeedFetchCount;
-(double)minimumUpdateInterval;
-(NSSet *)purchasedTagIDs;
-(NSSet *)mutedTagIDs;
-(NSSet *)hiddenFeedIDs;
-(NSSet *)subscribedTagIDs;
-(id<FCBundleSubscriptionProviderType>)bundleSubscriptionProvider;
-(id)initWithForYouTodaySectionSpecificConfig:(id)arg1 appConfiguration:(id)arg2 topStoriesChannelID:(id)arg3 hiddenFeedIDs:(id)arg4 paidBundleFeedID:(id)arg5 mutedTagIDs:(id)arg6 purchasedTagIDs:(id)arg7 subscribedTagIDs:(id)arg8 bundleSubscriptionProvider:(id)arg9 throttlingIdentifier:(id)arg10 ;
-(NSString *)topStoriesChannelID;
-(NSString *)paidBundleFeedID;
-(NSString *)throttlingIdentifier;
@end

