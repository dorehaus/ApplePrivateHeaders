/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/CALayer.h>

@class IKSSIndexHandler, IKSlideshowHandler;

@interface IKSSContentLayer : CALayer {

	IKSSIndexHandler* _indexHandler;
	IKSlideshowHandler* _slideshow;
	int _thumbnailCount;
	int _thumbnailSize;
	int _itemsPerRow;
	int _rowsPerScreen;
	int _numberOfRows;

}

@property (assign) int thumbnailCount;              //@synthesize thumbnailCount=_thumbnailCount - In the implementation block
@property (assign) int thumbnailSize;               //@synthesize thumbnailSize=_thumbnailSize - In the implementation block
@property (assign) int itemsPerRow;                 //@synthesize itemsPerRow=_itemsPerRow - In the implementation block
@property (assign) int rowsPerScreen;               //@synthesize rowsPerScreen=_rowsPerScreen - In the implementation block
@property (assign) int numberOfRows;                //@synthesize numberOfRows=_numberOfRows - In the implementation block
-(void)setRowsPerScreen:(int)arg1 ;
-(void)layoutSublayers2;
-(int)rowsPerScreen;
-(id)initWithSlideshow:(id)arg1 indexHandler:(id)arg2 ;
-(id)visibleThumbnails;
-(void)setThumbnailCount:(int)arg1 ;
-(int)numberOfRows;
-(void)layoutSublayers;
-(void)setItemsPerRow:(int)arg1 ;
-(int)itemsPerRow;
-(int)thumbnailSize;
-(void)setThumbnailSize:(int)arg1 ;
-(void)setNumberOfRows:(int)arg1 ;
-(int)thumbnailCount;
@end
