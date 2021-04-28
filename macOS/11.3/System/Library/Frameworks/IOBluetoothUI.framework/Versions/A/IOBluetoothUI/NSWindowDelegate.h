/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/IOBluetoothUI.framework/Versions/A/IOBluetoothUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSWindowDelegate <NSObject>
@optional
-(unsigned long long)window:(id)arg1 willUseFullScreenPresentationOptions:(unsigned long long)arg2;
-(void)windowDidBecomeKey:(id)arg1;
-(char)windowShouldClose:(id)arg1;
-(id)windowWillReturnFieldEditor:(id)arg1 toObject:(id)arg2;
-(CGSize*)windowWillResize:(id)arg1 toSize:(CGSize)arg2;
-(CGRect*)windowWillUseStandardFrame:(id)arg1 defaultFrame:(CGRect)arg2;
-(char)windowShouldZoom:(id)arg1 toFrame:(CGRect)arg2;
-(id)windowWillReturnUndoManager:(id)arg1;
-(CGRect*)window:(id)arg1 willPositionSheet:(id)arg2 usingRect:(CGRect)arg3;
-(char)window:(id)arg1 shouldPopUpDocumentPathMenu:(id)arg2;
-(char)window:(id)arg1 shouldDragDocumentWithEvent:(id)arg2 from:(CGPoint)arg3 withPasteboard:(id)arg4;
-(CGSize*)window:(id)arg1 willUseFullScreenContentSize:(CGSize)arg2;
-(id)customWindowsToEnterFullScreenForWindow:(id)arg1;
-(void)window:(id)arg1 startCustomAnimationToEnterFullScreenWithDuration:(double)arg2;
-(void)windowDidFailToEnterFullScreen:(id)arg1;
-(id)customWindowsToExitFullScreenForWindow:(id)arg1;
-(void)window:(id)arg1 startCustomAnimationToExitFullScreenWithDuration:(double)arg2;
-(id)customWindowsToEnterFullScreenForWindow:(id)arg1 onScreen:(id)arg2;
-(void)window:(id)arg1 startCustomAnimationToEnterFullScreenOnScreen:(id)arg2 withDuration:(double)arg3;
-(void)windowDidFailToExitFullScreen:(id)arg1;
-(CGSize*)window:(id)arg1 willResizeForVersionBrowserWithMaxPreferredSize:(CGSize)arg2 maxAllowedSize:(CGSize)arg3;
-(void)window:(id)arg1 willEncodeRestorableState:(id)arg2;
-(void)window:(id)arg1 didDecodeRestorableState:(id)arg2;
-(void)windowDidResize:(id)arg1;
-(void)windowDidExpose:(id)arg1;
-(void)windowWillMove:(id)arg1;
-(void)windowDidMove:(id)arg1;
-(void)windowDidResignKey:(id)arg1;
-(void)windowDidBecomeMain:(id)arg1;
-(void)windowDidResignMain:(id)arg1;
-(void)windowWillClose:(id)arg1;
-(void)windowWillMiniaturize:(id)arg1;
-(void)windowDidMiniaturize:(id)arg1;
-(void)windowDidDeminiaturize:(id)arg1;
-(void)windowDidUpdate:(id)arg1;
-(void)windowDidChangeScreen:(id)arg1;
-(void)windowDidChangeScreenProfile:(id)arg1;
-(void)windowDidChangeBackingProperties:(id)arg1;
-(void)windowWillBeginSheet:(id)arg1;
-(void)windowDidEndSheet:(id)arg1;
-(void)windowWillStartLiveResize:(id)arg1;
-(void)windowDidEndLiveResize:(id)arg1;
-(void)windowWillEnterFullScreen:(id)arg1;
-(void)windowDidEnterFullScreen:(id)arg1;
-(void)windowWillExitFullScreen:(id)arg1;
-(void)windowDidExitFullScreen:(id)arg1;
-(void)windowWillEnterVersionBrowser:(id)arg1;
-(void)windowDidEnterVersionBrowser:(id)arg1;
-(void)windowWillExitVersionBrowser:(id)arg1;
-(void)windowDidExitVersionBrowser:(id)arg1;
-(void)windowDidChangeOcclusionState:(id)arg1;

@end

