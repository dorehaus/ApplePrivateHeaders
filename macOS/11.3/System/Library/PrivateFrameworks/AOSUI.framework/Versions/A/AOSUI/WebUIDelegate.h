/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WebUIDelegate <NSObject>
@optional
-(id)webView:(id)arg1 createWebViewWithRequest:(id)arg2;
-(void)webViewShow:(id)arg1;
-(id)webView:(id)arg1 createWebViewModalDialogWithRequest:(id)arg2;
-(void)webViewRunModal:(id)arg1;
-(void)webViewClose:(id)arg1;
-(void)webViewFocus:(id)arg1;
-(void)webViewUnfocus:(id)arg1;
-(id)webViewFirstResponder:(id)arg1;
-(void)webView:(id)arg1 makeFirstResponder:(id)arg2;
-(void)webView:(id)arg1 setStatusText:(id)arg2;
-(id)webViewStatusText:(id)arg1;
-(char)webViewAreToolbarsVisible:(id)arg1;
-(void)webView:(id)arg1 setToolbarsVisible:(char)arg2;
-(char)webViewIsStatusBarVisible:(id)arg1;
-(void)webView:(id)arg1 setStatusBarVisible:(char)arg2;
-(char)webViewIsResizable:(id)arg1;
-(void)webView:(id)arg1 setResizable:(char)arg2;
-(void)webView:(id)arg1 setFrame:(CGRect)arg2;
-(CGRect*)webViewFrame:(id)arg1;
-(void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
-(char)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
-(id)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4;
-(char)webView:(id)arg1 runBeforeUnloadConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
-(void)webView:(id)arg1 runOpenPanelForFileButtonWithResultListener:(id)arg2;
-(void)webView:(id)arg1 runOpenPanelForFileButtonWithResultListener:(id)arg2 allowMultipleFiles:(char)arg3;
-(void)webView:(id)arg1 mouseDidMoveOverElement:(id)arg2 modifierFlags:(unsigned long long)arg3;
-(id)webView:(id)arg1 contextMenuItemsForElement:(id)arg2 defaultMenuItems:(id)arg3;
-(char)webView:(id)arg1 validateUserInterfaceItem:(id)arg2 defaultValidation:(char)arg3;
-(char)webView:(id)arg1 shouldPerformAction:(SEL)arg2 fromSender:(id)arg3;
-(unsigned long long)webView:(id)arg1 dragDestinationActionMaskForDraggingInfo:(id)arg2;
-(void)webView:(id)arg1 willPerformDragDestinationAction:(unsigned long long)arg2 forDraggingInfo:(id)arg3;
-(unsigned long long)webView:(id)arg1 dragSourceActionMaskForPoint:(CGPoint)arg2;
-(void)webView:(id)arg1 willPerformDragSourceAction:(unsigned long long)arg2 fromPoint:(CGPoint)arg3 withPasteboard:(id)arg4;
-(void)webView:(id)arg1 printFrameView:(id)arg2;
-(float)webViewHeaderHeight:(id)arg1;
-(float)webViewFooterHeight:(id)arg1;
-(void)webView:(id)arg1 drawHeaderInRect:(CGRect)arg2;
-(void)webView:(id)arg1 drawFooterInRect:(CGRect)arg2;
-(void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2;
-(char)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2;
-(id)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3;
-(void)webView:(id)arg1 setContentRect:(CGRect)arg2;
-(CGRect*)webViewContentRect:(id)arg1;

@end

