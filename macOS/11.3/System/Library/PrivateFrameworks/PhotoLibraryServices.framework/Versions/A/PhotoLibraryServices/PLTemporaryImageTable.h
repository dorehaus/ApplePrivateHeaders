/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLThumbPersistenceManager;
@class NSMutableArray, NSString;

@interface PLTemporaryImageTable : NSObject {

	id<PLThumbPersistenceManager> _imageTable;
	unsigned long long _nextTableEntryIndex;
	NSMutableArray* _itemIndexToThumbEntryMapping;
	NSString* _imageTablePath;
	unsigned short _imageFormat;

}
-(void)dealloc;
-(void)reset;
-(void)insertItemAtIndex:(unsigned long long)arg1 ;
-(void)removeItemAtIndex:(unsigned long long)arg1 ;
-(void)_cleanup;
-(void)_positional_setThumbnailsWithIdentifier:(id)arg1 thumbnailIndex:(unsigned long long)arg2 image:(id)arg3 assetUUID:(id)arg4 ;
-(id)initWithWithPath:(id)arg1 imageFormat:(unsigned short)arg2 ;
-(void)setImage:(id)arg1 forItemAtIndex:(unsigned long long)arg2 ;
-(unsigned long long)_imageTableIndexForItemIndex:(unsigned long long)arg1 ;
-(id)imageForItemAtIndex:(unsigned long long)arg1 ;
@end
