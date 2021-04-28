/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSArray, NSMutableArray, NSObject, NSString, PSIGroup;

@interface PSIGroupAggregate : NSObject {

	NSArray* _searchTokens;
	NSMutableArray* _groupAggregateItems;
	NSMutableArray* _aggregatedGroupIds;
	NSMutableArray* _aggregateItemPool;
	unsigned long long _filenameGroupCount;
	NSObject*<OS_dispatch_queue> _groupResultsQueue;
	NSString* _transientToken;
	PSIGroup* _filenameGroupInAggregate;

}

@property (nonatomic,readonly) NSArray * searchTokens;                           //@synthesize searchTokens=_searchTokens - In the implementation block
@property (nonatomic,copy) NSString * transientToken;                            //@synthesize transientToken=_transientToken - In the implementation block
@property (nonatomic,readonly) PSIGroup * filenameGroupInAggregate;              //@synthesize filenameGroupInAggregate=_filenameGroupInAggregate - In the implementation block
-(void)pop;
-(NSArray *)searchTokens;
-(char)pushGroup:(id)arg1 ;
-(void)setTransientToken:(NSString *)arg1 ;
-(id)initWithSearchTokens:(id)arg1 groupResultsQueue:(id)arg2 ;
-(PSIGroup *)filenameGroupInAggregate;
-(NSString *)transientToken;
-(id)newGroupResultWithDateFilter:(id)arg1 datedTokens:(id)arg2 ;
-(NSRange)_rangeOfString:(id)arg1 inGroup:(id)arg2 useNormalizedString:(char)arg3 extendingSearchRange:(char)arg4 matchingFullToken:(char)arg5 excludingRanges:(id)arg6 ;
-(id)aggregateItemWithSearchToken:(id)arg1 rangeMatchingToken:(id)arg2 group:(id)arg3 ;
-(char)_verifySortedGroupIdsUnique;
-(CFArrayRef)_newSortedGroupIds;
-(id)newGroupResult;
@end

