/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLIndexMapperDataSource;
@interface PLIndexMapper : NSObject {

	id<PLIndexMapperDataSource> _dataSource;

}
-(id)initWithDataSource:(id)arg1 ;
-(id)backingIndexesForIndexes:(id)arg1 ;
-(unsigned long long)backingIndexForIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexForBackingIndex:(unsigned long long)arg1 ;
-(char)applyContainerChangeNotification:(id)arg1 changeTypes:(int)arg2 toFilteredIndexes:(id)arg3 ;
-(id)indexesForBackingIndexes:(id)arg1 ;
@end
