/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSWindowDelegate.h>
#import <libobjc.A.dylib/NSDebugMenuItemProvider.h>

@protocol NSDebugTouchBarUIDelegate;
@class NSMenuItem, NSPanel, NSWindow, NSString;

@interface NSDebugMenuTouchBarProvider : NSObject <NSWindowDelegate, NSDebugMenuItemProvider> {

	NSMenuItem* _menuItem;
	NSPanel* _panel;
	NSWindow* _observedWindow;
	id<NSDebugTouchBarUIDelegate> _uiDelegate;
	char _observingPanelVisibility;
	char _observingKeyWindow;

}

@property (__weak) id<NSDebugTouchBarUIDelegate> uiDelegate;              //@synthesize uiDelegate=_uiDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSMenuItem * menuItem; 
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSMenuItem *)menuItem;
-(id)_sharedPanel;
-(void)switchObservedWindow:(id)arg1 ;
-(void)toggleResponderChainPanel:(id)arg1 ;
-(void)setUiDelegate:(id<NSDebugTouchBarUIDelegate>)arg1 ;
-(void)toggleObservingKeyWindow:(char)arg1 ;
-(id<NSDebugTouchBarUIDelegate>)uiDelegate;
-(void)updateTouchBarProviderChain;
@end

