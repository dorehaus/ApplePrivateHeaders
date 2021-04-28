/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSWindow, NSTextField, NSPopUpButton, NSRulerView;

@interface NSRulerViewAccessibilityPanelController : NSObject {

	NSWindow* _accessibilityPanel;
	NSTextField* _valueField;
	NSPopUpButton* _markerTypeButton;
	NSRulerView* _rulerView;

}

@property (setter=_setAccessibilityPanel:,retain) NSWindow * _accessibilityPanel;              //@synthesize accessibilityPanel=_accessibilityPanel - In the implementation block
-(void)dealloc;
-(void)_setAccessibilityPanel:(id)arg1 ;
-(void)_addMarker:(id)arg1 ;
-(void)_cancelAddMarker:(id)arg1 ;
-(void)set_accessibilityPanel:(NSWindow *)arg1 ;
-(id)initWithRulerView:(id)arg1 ;
-(id)_valueField;
-(id)_markerTypeButton;
-(NSWindow *)_accessibilityPanel;
@end
