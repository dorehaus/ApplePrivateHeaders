/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MailUI.framework/Versions/A/MailUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WKUIDelegatePrivate <WKUIDelegate>
@optional
-(void)_webView:(id)arg1 didInsertAttachment:(id)arg2 withSource:(id)arg3;
-(void)_webView:(id)arg1 didRemoveAttachment:(id)arg2;
-(void)_webView:(id)arg1 didInvalidateDataForAttachment:(id)arg2;
-(void)_webView:(id)arg1 editorStateDidChange:(id)arg2;
-(void)_prepareForImmediateActionAnimationForWebView:(id)arg1;
-(void)_cancelImmediateActionAnimationForWebView:(id)arg1;
-(void)_completeImmediateActionAnimationForWebView:(id)arg1;
-(unsigned long long)_webView:(id)arg1 dragDestinationActionMaskForDraggingInfo:(id)arg2;
-(void)_webView:(id)arg1 didPerformDragOperation:(char)arg2;
-(void)_webViewDidEnterFullscreen:(id)arg1;
-(void)_webViewDidExitFullscreen:(id)arg1;
-(void)_webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)_webView:(id)arg1 requestStorageAccessPanelForDomain:(id)arg2 underCurrentDomain:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)_webView:(id)arg1 runBeforeUnloadConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)_webView:(id)arg1 requestGeolocationPermissionForFrame:(id)arg2 decisionHandler:(/*^block*/id)arg3;
-(void)_webView:(id)arg1 didResignInputElementStrongPasswordAppearanceWithUserInfo:(id)arg2;
-(void)_webView:(id)arg1 takeFocus:(long long)arg2;
-(void)_webView:(id)arg1 handleAutoplayEvent:(long long)arg2 withFlags:(unsigned long long)arg3;
-(void)_showWebView:(id)arg1;
-(void)_focusWebView:(id)arg1;
-(void)_unfocusWebView:(id)arg1;
-(void)_webViewRunModal:(id)arg1;
-(void)_webViewDidScroll:(id)arg1;
-(void)_webView:(id)arg1 getToolbarsAreVisibleWithCompletionHandler:(/*^block*/id)arg2;
-(void)_webView:(id)arg1 didNotHandleWheelEvent:(id)arg2;
-(void)_webView:(id)arg1 setResizable:(char)arg2;
-(void)_webView:(id)arg1 getWindowFrameWithCompletionHandler:(/*^block*/id)arg2;
-(void)_webView:(id)arg1 setWindowFrame:(CGRect)arg2;
-(void)_webView:(id)arg1 unavailablePlugInButtonClickedWithReason:(long long)arg2 plugInInfo:(id)arg3;
-(void)_webView:(id)arg1 didClickAutoFillButtonWithUserInfo:(id)arg2;
-(void)_webView:(id)arg1 drawHeaderInRect:(CGRect)arg2 forPageWithTitle:(id)arg3 URL:(id)arg4;
-(void)_webView:(id)arg1 drawFooterInRect:(CGRect)arg2 forPageWithTitle:(id)arg3 URL:(id)arg4;
-(double)_webViewHeaderHeight:(id)arg1;
-(double)_webViewFooterHeight:(id)arg1;
-(void)_webView:(id)arg1 mouseDidMoveOverElement:(id)arg2 withFlags:(unsigned long long)arg3 userInfo:(id)arg4;
-(void)_webView:(id)arg1 didExceedBackgroundResourceLimitWhileInForeground:(long long)arg2;
-(void)_webView:(id)arg1 saveDataToFile:(id)arg2 suggestedFilename:(id)arg3 mimeType:(id)arg4 originatingURL:(id)arg5;
-(void)_webView:(id)arg1 requestNotificationPermissionForSecurityOrigin:(id)arg2 decisionHandler:(/*^block*/id)arg3;
-(id)_webView:(id)arg1 configurationForLocalInspector:(id)arg2;
-(void)_webView:(id)arg1 didAttachLocalInspector:(id)arg2;
-(void)_webView:(id)arg1 willCloseLocalInspector:(id)arg2;
-(void)_webView:(id)arg1 decideDatabaseQuotaForSecurityOrigin:(id)arg2 currentQuota:(unsigned long long)arg3 currentOriginUsage:(unsigned long long)arg4 currentDatabaseUsage:(unsigned long long)arg5 expectedUsage:(unsigned long long)arg6 decisionHandler:(/*^block*/id)arg7;
-(void)_webView:(id)arg1 decideDatabaseQuotaForSecurityOrigin:(id)arg2 databaseName:(id)arg3 displayName:(id)arg4 currentQuota:(unsigned long long)arg5 currentOriginUsage:(unsigned long long)arg6 currentDatabaseUsage:(unsigned long long)arg7 expectedUsage:(unsigned long long)arg8 decisionHandler:(/*^block*/id)arg9;
-(void)_webView:(id)arg1 decideWebApplicationCacheQuotaForSecurityOrigin:(id)arg2 currentQuota:(unsigned long long)arg3 totalBytesNeeded:(unsigned long long)arg4 decisionHandler:(/*^block*/id)arg5;
-(void)_webView:(id)arg1 printFrame:(id)arg2;
-(void)_webView:(id)arg1 printFrame:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)_webViewClose:(id)arg1;
-(void)_webViewFullscreenMayReturnToInline:(id)arg1;
-(void)_webView:(id)arg1 checkUserMediaPermissionForURL:(id)arg2 mainFrameURL:(id)arg3 frameIdentifier:(unsigned long long)arg4 decisionHandler:(/*^block*/id)arg5;
-(void)_webView:(id)arg1 includeSensitiveMediaDeviceDetails:(/*^block*/id)arg2;
-(void)_webView:(id)arg1 mediaCaptureStateDidChange:(unsigned long long)arg2;
-(void)_webView:(id)arg1 didChangeFontAttributes:(id)arg2;
-(id)_dataDetectionContextForWebView:(id)arg1;
-(void)_webView:(id)arg1 imageOrMediaDocumentSizeChanged:(CGSize)arg2;
-(void)_webViewRequestPointerLock:(id)arg1;
-(void)_webViewDidRequestPointerLock:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)_webViewDidLosePointerLock:(id)arg1;
-(id)_webView:(id)arg1 contextMenu:(id)arg2 forElement:(id)arg3;
-(id)_webView:(id)arg1 contextMenu:(id)arg2 forElement:(id)arg3 userInfo:(id)arg4;
-(void)_webView:(id)arg1 getContextMenuFromProposedMenu:(id)arg2 forElement:(id)arg3 userInfo:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)_webView:(id)arg1 hasVideoInPictureInPictureDidChange:(char)arg2;
-(void)_webViewDidShowSafeBrowsingWarning:(id)arg1;
-(void)_webView:(id)arg1 shouldAllowPDFAtURL:(id)arg2 toOpenFromFrame:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)_webView:(id)arg1 runWebAuthenticationPanel:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)_webView:(id)arg1 requestMediaCaptureAuthorization:(unsigned long long)arg2 decisionHandler:(/*^block*/id)arg3;
-(void)_webView:(id)arg1 requestUserMediaAuthorizationForDevices:(unsigned long long)arg2 url:(id)arg3 mainFrameURL:(id)arg4 decisionHandler:(/*^block*/id)arg5;
-(void)_webView:(id)arg1 requestSpeechRecognitionPermissionForOrigin:(id)arg2 decisionHandler:(/*^block*/id)arg3;
-(void)_webView:(id)arg1 willShareActivityItems:(id)arg2;

@end

