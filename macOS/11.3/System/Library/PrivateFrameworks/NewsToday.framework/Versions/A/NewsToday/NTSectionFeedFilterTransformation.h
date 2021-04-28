/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/Versions/A/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NTFeedTransforming.h>

@protocol NTFeedTransforming;
@class NSString;

@interface NTSectionFeedFilterTransformation : NSObject <NTFeedTransforming> {

	unsigned long long _embedsLimit;
	id<NTFeedTransforming> _underlyingTransformation;

}

@property (nonatomic,readonly) unsigned long long embedsLimit;                               //@synthesize embedsLimit=_embedsLimit - In the implementation block
@property (nonatomic,readonly) id<NTFeedTransforming> underlyingTransformation;              //@synthesize underlyingTransformation=_underlyingTransformation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(unsigned long long)embedsLimit;
-(id)transformFeedItems:(id)arg1 ;
-(id<NTFeedTransforming>)underlyingTransformation;
-(id)initWithTodayData:(id)arg1 configurationManager:(id)arg2 readArticlesFilterMethod:(int)arg3 seenArticlesFilterMethod:(int)arg4 minimumTimeSinceFirstSeenToFilter:(double)arg5 supplementalFeedFilterOptions:(long long)arg6 embedsLimit:(unsigned long long)arg7 otherArticleIDs:(id)arg8 otherClusterIDs:(id)arg9 filterDate:(id)arg10 ;
@end

