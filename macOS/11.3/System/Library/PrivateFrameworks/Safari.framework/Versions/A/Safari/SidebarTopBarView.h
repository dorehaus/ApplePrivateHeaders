/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSView.h>
#import <libobjc.A.dylib/CustomKeyViewLoop.h>

@protocol SidebarTopBarViewDelegate;
@class SegmentedControlWithDynamicWidth, NSButton, NSString;

@interface SidebarTopBarView : NSView <CustomKeyViewLoop> {

	SegmentedControlWithDynamicWidth* _segmentedControl;
	NSButton* _backButton;
	id<SidebarTopBarViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SidebarTopBarViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char showsBackButton; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SidebarTopBarViewDelegate>)delegate;
-(void)setDelegate:(id<SidebarTopBarViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)safari_keyViews;
-(void)_setUpSegmentedControl;
-(void)_setUpSeparatorView;
-(id)_segmentIdentifiersThatCanBeShown;
-(id)_allSegmentIdentifiers;
-(char)_canShowSegmentWithIdentifier:(id)arg1 ;
-(void)_addBackButton;
-(void)_removeBackButton;
-(char)showsBackButton;
-(void)_didSelectBackButton:(id)arg1 ;
-(void)_segmentedControlSelectionDidChange:(id)arg1 ;
-(id)_imageForSegmentWithIdentifier:(id)arg1 ;
-(CGRect)frameOfTabWithIdentifier:(id)arg1 ;
-(void)setShowsBackButton:(char)arg1 ;
-(void)setMenuForBookmarksSegment:(id)arg1 ;
-(id)selectedSegmentIdentifier;
-(void)setSelectedSegmentIdentifier:(id)arg1 ;
@end

