/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UniversalAccess.framework/Versions/A/UniversalAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSWindow, UAScrollZoomSheet, NSWindowController;

@interface UAScrollZoomSheetController : NSObject {

	NSWindow* HostWindow;
	UAScrollZoomSheet* _scrollZoomSheet;
	char _hideModifiersEditor;
	char _hideScrollZoomCheckbox;
	NSWindowController* _zoomWindowController;

}
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)beginSheetOnWindow:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)modifiersEditorSetHidden:(char)arg1 ;
-(void)scrollZoomCheckboxSetHidden:(char)arg1 ;
-(void)displaySheet:(id)arg1 ;
@end
