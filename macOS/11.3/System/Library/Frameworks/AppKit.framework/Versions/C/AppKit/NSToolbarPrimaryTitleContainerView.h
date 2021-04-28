/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class NSWindow, NSStackView, NSTextField, NSThemeDocumentButton, NSDocumentAutosaveButton, NSLayoutConstraint, NSButton;

@interface NSToolbarPrimaryTitleContainerView : NSView {

	NSWindow* _representedWindow;
	NSStackView* _primaryTitleStack;
	NSTextField* _titleTextField;
	NSThemeDocumentButton* _documentProxyButton;
	NSDocumentAutosaveButton* _autosaveButton;
	char _isShowingDocumentMenu;
	NSLayoutConstraint* _leadingTitleConstraint;
	NSLayoutConstraint* _leadingDocumentConstraint;
	NSLayoutConstraint* _trailingTitleConstraint;

}

@property (__weak) NSWindow * representedWindow;                               //@synthesize representedWindow=_representedWindow - In the implementation block
@property (readonly) NSTextField * titleTextField;                             //@synthesize titleTextField=_titleTextField - In the implementation block
@property (readonly) CGRect titleRect; 
@property (readonly) double expandedWidth; 
@property (readonly) char showsDocumentProxy; 
@property (readonly) char isShowingAutosavePopup; 
@property (readonly) char isShowingDocumentMenu;                               //@synthesize isShowingDocumentMenu=_isShowingDocumentMenu - In the implementation block
@property (readonly) CGRect mouseHoverSensitiveRect; 
@property (readonly) NSButton * fileButton; 
@property (readonly) NSDocumentAutosaveButton * autosaveButton;                //@synthesize autosaveButton=_autosaveButton - In the implementation block
@property (readonly) NSThemeDocumentButton * documentProxyButton;              //@synthesize documentProxyButton=_documentProxyButton - In the implementation block
+(id)keyPathsForValuesAffectingIsShowingAutosavePopup;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setFrameSize:(CGSize)arg1 ;
-(void)setFrameOrigin:(CGPoint)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(char)mouseDownCanMoveWindow;
-(void)rightMouseDown:(id)arg1 ;
-(CGRect)titleRect;
-(char)acceptsFirstMouse:(id)arg1 ;
-(id)firstBaselineAnchor;
-(double)expandedWidth;
-(NSDocumentAutosaveButton *)autosaveButton;
-(id)newAutosaveButton;
-(NSButton *)fileButton;
-(char)_performMouseDownWithEvent:(id)arg1 ;
-(void)setRepresentedWindow:(NSWindow *)arg1 ;
-(CGRect)maxTitleRect;
-(void)_configureWithRepresentedURL:(id)arg1 ;
-(void)_configureForShowingAutosave:(char)arg1 editingState:(long long)arg2 autosavingError:(id)arg3 nonModalError:(id)arg4 ;
-(id)newDocumentProxyButton;
-(char)showsDocumentProxy;
-(void)_showDocumentPopover;
-(void)_showAutosavePopover;
-(char)isShowingAutosavePopup;
-(char)isShowingDocumentMenu;
-(void)updateTextPropertiesWithFont:(id)arg1 ;
-(void)updateTitleProperties:(id)arg1 ;
-(CGRect)mouseHoverSensitiveRect;
-(void)expand;
-(void)collapse;
-(void)expandCollapseAnimationDidFinish;
-(char)_shouldToolbarStealEvent:(id)arg1 ;
-(NSWindow *)representedWindow;
-(NSTextField *)titleTextField;
-(NSThemeDocumentButton *)documentProxyButton;
@end

