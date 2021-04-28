/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCHeadlineClustering.h>

@class FCHeadlineClusteringRules, NSSet, NSDictionary, FCSolHeuristic, NSMutableArray, NSMutableSet, NSString;

@interface FCHeadlineClusteringSol : NSObject <FCHeadlineClustering> {

	FCHeadlineClusteringRules* _rules;
	NSSet* _articleIds;
	NSDictionary* _articlesByTag;
	NSDictionary* _tagsByArticle;
	NSDictionary* _tagScores;
	NSDictionary* _headlinesById;
	NSSet* _hardOrphans;
	FCSolHeuristic* _heuristic;
	FCSolHeuristic* _autoFavoriteHeuristic;
	NSMutableArray* _articleGroups;
	NSMutableSet* _groupableTags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)clusterHeadlinesByTopic:(id)arg1 subscribedTags:(id)arg2 favoritesPersonalizer:(id)arg3 personalizer:(id)arg4 rules:(id)arg5 translationProvider:(id)arg6 unpaidHeadlineIDs:(id)arg7 ;
@end

