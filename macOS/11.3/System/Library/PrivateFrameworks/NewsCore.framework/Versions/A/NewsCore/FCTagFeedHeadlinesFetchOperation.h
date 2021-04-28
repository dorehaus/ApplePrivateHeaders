/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@protocol FCCoreConfiguration, FCFeedPersonalizing;
@class NSDate, FCFeedRange, NSArray, NSSet, FCCloudContext, FCFeedDescriptor;

@interface FCTagFeedHeadlinesFetchOperation : FCOperation {

	/*^block*/id _fetchCompletionHandler;
	NSDate* _topOfFeedDate;
	FCFeedRange* _freeFeedRange;
	FCFeedRange* _paidFeedRange;
	long long _maxFetchCount;
	NSArray* _precedingAdjacentHeadlines;
	NSArray* _followingAdjacentHeadlines;
	NSSet* _shownArticleIDs;
	NSSet* _shownClusterIDs;
	id<FCCoreConfiguration> _configuration;
	FCCloudContext* _cloudContext;
	FCFeedDescriptor* _feedDescriptor;
	id<FCFeedPersonalizing> _personalizer;

}

@property (nonatomic,copy) id fetchCompletionHandler;                         //@synthesize fetchCompletionHandler=_fetchCompletionHandler - In the implementation block
@property (nonatomic,copy) NSDate * topOfFeedDate;                            //@synthesize topOfFeedDate=_topOfFeedDate - In the implementation block
@property (nonatomic,copy) FCFeedRange * freeFeedRange;                       //@synthesize freeFeedRange=_freeFeedRange - In the implementation block
@property (nonatomic,copy) FCFeedRange * paidFeedRange;                       //@synthesize paidFeedRange=_paidFeedRange - In the implementation block
@property (assign,nonatomic) long long maxFetchCount;                         //@synthesize maxFetchCount=_maxFetchCount - In the implementation block
@property (nonatomic,copy) NSArray * precedingAdjacentHeadlines;              //@synthesize precedingAdjacentHeadlines=_precedingAdjacentHeadlines - In the implementation block
@property (nonatomic,copy) NSArray * followingAdjacentHeadlines;              //@synthesize followingAdjacentHeadlines=_followingAdjacentHeadlines - In the implementation block
@property (nonatomic,copy) NSSet * shownArticleIDs;                           //@synthesize shownArticleIDs=_shownArticleIDs - In the implementation block
@property (nonatomic,copy) NSSet * shownClusterIDs;                           //@synthesize shownClusterIDs=_shownClusterIDs - In the implementation block
-(void)performOperation;
-(void)setFetchCompletionHandler:(id)arg1 ;
-(id)fetchCompletionHandler;
-(FCFeedRange *)freeFeedRange;
-(long long)maxFetchCount;
-(FCFeedRange *)paidFeedRange;
-(NSDate *)topOfFeedDate;
-(NSArray *)precedingAdjacentHeadlines;
-(NSArray *)followingAdjacentHeadlines;
-(NSSet *)shownArticleIDs;
-(NSSet *)shownClusterIDs;
-(id)initWithConfiguration:(id)arg1 cloudContext:(id)arg2 feedDescriptor:(id)arg3 personalizer:(id)arg4 ;
-(void)setTopOfFeedDate:(NSDate *)arg1 ;
-(void)setFreeFeedRange:(FCFeedRange *)arg1 ;
-(void)setPaidFeedRange:(FCFeedRange *)arg1 ;
-(void)setMaxFetchCount:(long long)arg1 ;
-(void)setPrecedingAdjacentHeadlines:(NSArray *)arg1 ;
-(void)setFollowingAdjacentHeadlines:(NSArray *)arg1 ;
-(void)setShownArticleIDs:(NSSet *)arg1 ;
-(void)setShownClusterIDs:(NSSet *)arg1 ;
@end
