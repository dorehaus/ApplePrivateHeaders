/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCFeedTransformationSort.h>

@interface FCFeedTransformationSortBlock : FCFeedTransformationSort {

	/*^block*/id _sortBlock;

}

@property (nonatomic,copy) id sortBlock;              //@synthesize sortBlock=_sortBlock - In the implementation block
+(id)transformationWithSortBlock:(/*^block*/id)arg1 ;
-(id)transformFeedItems:(id)arg1 ;
-(void)setSortBlock:(id)arg1 ;
-(id)sortBlock;
@end

