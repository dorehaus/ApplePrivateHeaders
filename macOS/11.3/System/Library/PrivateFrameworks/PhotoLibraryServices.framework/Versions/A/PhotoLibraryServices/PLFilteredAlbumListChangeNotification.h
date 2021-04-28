/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLAssetContainerListChangeNotification.h>
#import <libobjc.A.dylib/PLIndexMapperDataSource.h>

@class PLFilteredAlbumList, NSIndexSet, PLIndexMapper, PLAssetContainerListChangeNotification, NSString;

@interface PLFilteredAlbumListChangeNotification : PLAssetContainerListChangeNotification <PLIndexMapperDataSource> {

	PLFilteredAlbumList* _albumList;
	NSIndexSet* _oldFilteredIndexes;
	NSIndexSet* _filteredIndexes;
	PLIndexMapper* _indexMapper;
	PLAssetContainerListChangeNotification* _backingNotification;

}

@property (nonatomic,retain,readonly) NSIndexSet * updatedFilteredIndexes; 
@property (nonatomic,copy) NSIndexSet * filteredIndexes; 
@property (nonatomic,retain,readonly) PLIndexMapper * indexMapper; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)notificationForDerivedObject:(id)arg1 priorChangeState:(id)arg2 forBackingObjectNotification:(id)arg3 ;
-(NSString *)description;
-(id)init;
-(id)object;
-(id)_changedObjects;
-(char)shouldReload;
-(PLIndexMapper *)indexMapper;
-(NSIndexSet *)filteredIndexes;
-(char)shouldIncludeObjectAtIndex:(unsigned long long)arg1 ;
-(char)_getOldSet:(id*)arg1 newSet:(id*)arg2 ;
-(id)_diffDescription;
-(char)countDidChange;
-(NSIndexSet *)updatedFilteredIndexes;
-(void)setFilteredIndexes:(NSIndexSet *)arg1 ;
-(id)albumList;
-(id)initWithFilteredAlbumList:(id)arg1 albumListChangeNotification:(id)arg2 ;
@end
