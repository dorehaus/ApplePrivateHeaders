/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSView.h>
#import <libobjc.A.dylib/VisualTabPickerNewTabViewDelegate.h>
#import <libobjc.A.dylib/VisualTabPickerThumbnailDataSource.h>
#import <libobjc.A.dylib/VisualTabPickerThumbnailDelegate.h>

@protocol VisualTabPickerTileContainerDataSource, VisualTabPickerTileContainerDelegate;
@class VisualTabPickerShadowTileView, NSTextField, VisualTabPickerGridView, NSString;

@interface VisualTabPickerTileContainerView : NSView <VisualTabPickerNewTabViewDelegate, VisualTabPickerThumbnailDataSource, VisualTabPickerThumbnailDelegate> {

	VisualTabPickerShadowTileView* _thumbnailView;
	NSTextField* _title;
	char _didSetTileConstraints;
	char _visibleToUser;
	id<VisualTabPickerTileContainerDataSource> _dataSource;
	id<VisualTabPickerTileContainerDelegate> _delegate;
	VisualTabPickerGridView* _visualTabPickerGridView;
	long long _tileContainerType;

}

@property (assign,nonatomic,__weak) id<VisualTabPickerTileContainerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<VisualTabPickerTileContainerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) VisualTabPickerGridView * visualTabPickerGridView;                  //@synthesize visualTabPickerGridView=_visualTabPickerGridView - In the implementation block
@property (assign,nonatomic) long long tileContainerType;                                               //@synthesize tileContainerType=_tileContainerType - In the implementation block
@property (nonatomic,readonly) CGRect thumbnailContainerFrame; 
@property (assign,nonatomic) char visibleToUser;                                                        //@synthesize visibleToUser=_visibleToUser - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<VisualTabPickerTileContainerDelegate>)delegate;
-(void)setDelegate:(id<VisualTabPickerTileContainerDelegate>)arg1 ;
-(void)setHidden:(char)arg1 ;
-(void)layout;
-(void)setFrame:(CGRect)arg1 ;
-(id<VisualTabPickerTileContainerDataSource>)dataSource;
-(void)reloadData;
-(void)setDataSource:(id<VisualTabPickerTileContainerDataSource>)arg1 ;
-(id)makeBackingLayer;
-(void)mouseMoved:(id)arg1 ;
-(void)_createNewTabContainerView;
-(CGRect)_containerTileFrame;
-(VisualTabPickerGridView *)visualTabPickerGridView;
-(id)_createTitleTextField;
-(void)didSelectVisualTabPickerThumbnailView:(id)arg1 ;
-(void)didCloseVisualTabPickerThumbnailView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 visualTabPickerGridView:(id)arg2 containerType:(long long)arg3 ;
-(void)setVisualTabPickerGridView:(VisualTabPickerGridView *)arg1 ;
-(long long)tileContainerType;
-(void)setTileContainerType:(long long)arg1 ;
-(void)updateIcon;
-(char)visibleToUser;
-(void)setVisibleToUser:(char)arg1 ;
-(void)hideCloseButton;
-(void)showCloseButtonIfNecessary;
-(void)resetScaleFactor;
-(CGRect)thumbnailContainerFrame;
-(void)cleanUpAnimations;
-(void)animateSidebarWithImage:(id)arg1 width:(double)arg2 gridAnimation:(long long)arg3 ;
-(void)animateToolbarWithImage:(id)arg1 height:(double)arg2 gridAnimation:(long long)arg3 ;
-(void)updateMuteButton;
-(void)didRequestNewTabForVisualTabPickerNewTabView:(id)arg1 ;
-(id)viewForVisualTabPickerTileThumbnailView:(id)arg1 lowResolution:(char)arg2 ;
-(long long)muteButtonStateForVisualTabPickerTileThumbnailView:(id)arg1 ;
-(char)shouldShowMuteButtonForVisualTabPickerTileThumbnailView:(id)arg1 ;
-(char)canCloseTabInVisualTabPickerThumbnailView:(id)arg1 ;
-(CGRect)visibleBoundsForVisualTabPickerTileThumbnailView:(id)arg1 ;
-(id)titleForVisualTabPickerThumbnailView:(id)arg1 ;
-(id)siteIconForVisualTabPickerThumbnailView:(id)arg1 ;
-(void)didToggleMuteButtonInVisualTabPickerThumbnailView:(id)arg1 ;
-(void)_updateThumbnailLayout;
-(void)_setUpThumbnail;
-(void)_showCloseButtonIfNeededWithMouseLocation:(CGPoint)arg1 ;
@end

