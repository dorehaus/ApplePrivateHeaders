/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/CLSInvestigationFeeder.h>

@class NSArray;

@interface PGCuratorInvestigationFeeder : CLSInvestigationFeeder {

	NSArray* _items;

}
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfItems;
-(id)initWithItems:(id)arg1 ;
-(id)allItems;
-(void)enumerateItemsUsingBlock:(/*^block*/id)arg1 ;
-(id)approximateLocation;
-(id)universalStartDate;
-(id)universalEndDate;
-(id)localStartDateComponents;
-(id)localEndDateComponents;
-(void)enumerateItemsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

