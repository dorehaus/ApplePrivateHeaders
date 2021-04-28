/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSScrollViewSeparatorTrackingAdapter, NSSplitViewItemSeparatorTrackingAdapter, NSWindowSectionContentControllerDelegate;
#import <AppKit/AppKit-Structs.h>
@class NSObject, NSTrackingSeparatorToolbarItem, NSWindow;

@interface NSWindowSectionContentController : NSObject {

	NSObject*<NSScrollViewSeparatorTrackingAdapter> _scrollViewTrackingAdapter;
	NSObject*<NSSplitViewItemSeparatorTrackingAdapter> _splitViewItemTrackingAdapter;
	long long _dividerStyle;
	NSTrackingSeparatorToolbarItem* _leadingItem;
	NSTrackingSeparatorToolbarItem* _trailingItem;
	char _fullHeightDividersDisabled;
	char _fullHeightSidebarDividersDisabled;
	NSWindow* _window;
	NSObject*<NSWindowSectionContentControllerDelegate> _delegate;
	CGRect _dividerExtentRect;

}

@property (assign) long long dividerStyle;                                                                       //@synthesize dividerStyle=_dividerStyle - In the implementation block
@property (assign) CGRect dividerExtentRect;                                                                     //@synthesize dividerExtentRect=_dividerExtentRect - In the implementation block
@property (__weak) NSWindow * window;                                                                            //@synthesize window=_window - In the implementation block
@property (__weak) NSObject*<NSWindowSectionContentControllerDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) char containsSidebar; 
@property (retain) NSTrackingSeparatorToolbarItem * leadingItem; 
@property (retain) NSTrackingSeparatorToolbarItem * trailingItem; 
@property (retain) NSObject*<NSScrollViewSeparatorTrackingAdapter> scrollViewTrackingAdapter; 
@property (retain) NSObject*<NSSplitViewItemSeparatorTrackingAdapter> splitViewItemTrackingAdapter; 
@property (assign) char fullHeightDividersDisabled; 
@property (assign) char fullHeightSidebarDividersDisabled; 
+(id)keyPathsForValuesAffectingDividerStyle;
-(void)dealloc;
-(id)debugDescription;
-(NSObject*<NSWindowSectionContentControllerDelegate>)delegate;
-(void)setDelegate:(NSObject*<NSWindowSectionContentControllerDelegate>)arg1 ;
-(NSWindow *)window;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(char)fullHeightDividersDisabled;
-(void)setFullHeightDividersDisabled:(char)arg1 ;
-(void)setWindow:(NSWindow *)arg1 ;
-(void)setDividerStyle:(long long)arg1 ;
-(long long)dividerStyle;
-(void)setFullHeightSidebarDividersDisabled:(char)arg1 ;
-(id)initWithLeadingItem:(id)arg1 trailingItem:(id)arg2 ;
-(NSTrackingSeparatorToolbarItem *)trailingItem;
-(NSTrackingSeparatorToolbarItem *)leadingItem;
-(void)setLeadingItem:(NSTrackingSeparatorToolbarItem *)arg1 ;
-(NSObject*<NSScrollViewSeparatorTrackingAdapter>)scrollViewTrackingAdapter;
-(void)setScrollViewTrackingAdapter:(NSObject*<NSScrollViewSeparatorTrackingAdapter>)arg1 ;
-(NSObject*<NSSplitViewItemSeparatorTrackingAdapter>)splitViewItemTrackingAdapter;
-(void)setSplitViewItemTrackingAdapter:(NSObject*<NSSplitViewItemSeparatorTrackingAdapter>)arg1 ;
-(void)setTrailingItem:(NSTrackingSeparatorToolbarItem *)arg1 ;
-(char)fullHeightSidebarDividersDisabled;
-(CGRect)dividerExtentRect;
-(char)containsSidebar;
-(void)_beginObservingSeparatorItem:(id)arg1 ;
-(void)_updateSectionState;
-(void)_endObservingSeparatorItem:(id)arg1 ;
-(void)setDividerExtentRect:(CGRect)arg1 ;
-(void)_endObservingScrollViewSeparatorTrackingAdapter:(id)arg1 ;
-(void)_beginObservingScrollViewSeparatorTrackingAdapter:(id)arg1 ;
-(void)_endObservingSplitViewItemSeparatorTrackingAdapter:(id)arg1 ;
-(void)_beginObservingSplitViewItemSeparatorTrackingAdapter:(id)arg1 ;
@end

