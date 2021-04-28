/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSApplication.framework/Versions/A/TSApplication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSKit/TSKSelection.h>

@class TSAGalleryItem, NSOrderedSet;

@interface TSAGalleryItemSelection : TSKSelection {

	TSAGalleryItem* _displayedItem;
	NSOrderedSet* _items;

}

@property (nonatomic,readonly) TSAGalleryItem * displayedItem;              //@synthesize displayedItem=_displayedItem - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * items;                        //@synthesize items=_items - In the implementation block
+(Class)archivedSelectionClass;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSOrderedSet *)items;
-(id)UUIDDescription;
-(id)initWithItems:(id)arg1 displayedItem:(id)arg2 ;
-(TSAGalleryItem *)displayedItem;
@end

