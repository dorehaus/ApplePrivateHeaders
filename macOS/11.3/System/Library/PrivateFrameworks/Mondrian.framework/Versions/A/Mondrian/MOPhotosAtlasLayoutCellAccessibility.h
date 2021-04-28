/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Mondrian.framework/Versions/A/Mondrian
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Mondrian/Mondrian-Structs.h>
#import <AppKit/NSAccessibilityElement.h>

@protocol MOPhotoAtlasLayoutCellAXDelegate;
@class MOPhotosAtlasSupplementaryRow, NSAccessibilityElement, MOMediaItem;

@interface MOPhotosAtlasLayoutCellAccessibility : NSAccessibilityElement {

	MOPhotosAtlasSupplementaryRow* _row;
	NSAccessibilityElement* _image;
	long long _indexOfRow;
	id<MOPhotoAtlasLayoutCellAXDelegate> _axDelegate;
	MOMediaItem* _mediaItem;
	CGRect _frameInRow;

}

@property (assign,nonatomic) CGRect frameInRow;                                                   //@synthesize frameInRow=_frameInRow - In the implementation block
@property (assign,nonatomic) long long indexOfRow;                                                //@synthesize indexOfRow=_indexOfRow - In the implementation block
@property (assign,nonatomic,__weak) MOPhotosAtlasSupplementaryRow * row;                          //@synthesize row=_row - In the implementation block
@property (assign,nonatomic,__weak) MOMediaItem * mediaItem;                                      //@synthesize mediaItem=_mediaItem - In the implementation block
@property (nonatomic,readonly) NSAccessibilityElement * image;                                    //@synthesize image=_image - In the implementation block
@property (assign,nonatomic,__weak) id<MOPhotoAtlasLayoutCellAXDelegate> axDelegate;              //@synthesize axDelegate=_axDelegate - In the implementation block
-(id)accessibilityAttributeNames;
-(NSAccessibilityElement *)image;
-(id)accessibilityRole;
-(id)accessibilityLabel;
-(CGRect)accessibilityFrame;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(id)accessibilityRoleDescription;
-(id)accessibilityActionNames;
-(id)accessibilityActionDescription:(id)arg1 ;
-(void)accessibilityPerformAction:(id)arg1 ;
-(MOPhotosAtlasSupplementaryRow *)row;
-(char)accessibilityPerformPick;
-(char)accessibilityPerformPress;
-(id)accessibilityTitle;
-(char)isAccessibilitySelected;
-(void)setAccessibilitySelected:(char)arg1 ;
-(id)accessibilityHelp;
-(char)accessibilityPerformScrollToVisible;
-(MOMediaItem *)mediaItem;
-(void)setMediaItem:(MOMediaItem *)arg1 ;
-(void)setRow:(MOPhotosAtlasSupplementaryRow *)arg1 ;
-(id)_layoutSectionAccessibility;
-(id)initWithMediaItem:(id)arg1 row:(id)arg2 frameInRow:(CGRect)arg3 indexOfRow:(long long)arg4 ;
-(id)_actualIndexPath;
-(long long)indexOfRow;
-(void)setIndexOfRow:(long long)arg1 ;
-(id<MOPhotoAtlasLayoutCellAXDelegate>)axDelegate;
-(void)setAxDelegate:(id<MOPhotoAtlasLayoutCellAXDelegate>)arg1 ;
-(CGRect)frameInRow;
-(void)setFrameInRow:(CGRect)arg1 ;
@end

