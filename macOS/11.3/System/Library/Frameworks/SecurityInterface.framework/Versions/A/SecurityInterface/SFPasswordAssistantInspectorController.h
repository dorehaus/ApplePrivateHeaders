/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SecurityInterface.framework/Versions/A/SecurityInterface
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSWindow, SFPasswordAsstView, NSTextField;

@interface SFPasswordAssistantInspectorController : NSObject {

	NSWindow* _baseWindow;
	NSWindow* _passwordAssistantPanel;
	SFPasswordAsstView* _passwordAssistantView;
	NSTextField* _originalPassword;
	NSTextField* _newPassword;
	NSTextField* _verifyPassword;
	NSTextField* _extOriginalPassword;
	NSTextField* _extNewPassword;
	NSTextField* _extVerifyPassword;

}
-(id)newPasswordField;
-(void)loadOurNib;
-(void)ourPanelWillClose:(id)arg1 ;
-(void)closePasswordAssistantPanel;
-(id)baseWindow;
-(void)dealloc;
-(id)init;
-(void)windowDidEndSheet:(id)arg1 ;
-(void)setBaseWindow:(id)arg1 ;
-(void)setNewPasswordField:(id)arg1 ;
-(void)setVerifyPasswordField:(id)arg1 ;
-(void)setOriginalPasswordField:(id)arg1 ;
-(void)showPasswordAssistantPanel:(id)arg1 ;
-(void)baseWindowWillClose:(id)arg1 ;
-(id)passwordAssistantPanel;
@end

