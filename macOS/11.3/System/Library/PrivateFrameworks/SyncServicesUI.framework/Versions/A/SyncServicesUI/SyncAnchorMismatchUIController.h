/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SyncServicesUI.framework/Versions/A/SyncServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SyncUIController, NSPanel, NSTextField, NSPopUpButton, NSButton;

@interface SyncAnchorMismatchUIController : NSObject {

	SyncUIController* _syncUIController;
	NSPanel* _syncAnchorMismatchPanel;
	NSTextField* syncAnchorMismatchMajorTextField;
	NSTextField* syncAnchorMismatchMinorTextField;
	NSPopUpButton* syncAnchorMismatchPopup;
	NSButton* syncAnchorMismatchOKButton;
	int syncMode;

}
-(bycopy int)runSyncAnchorMismatchDialog:(bycopy id)arg1 forClient:(bycopy id)arg2 ;
-(id)initWithSyncUIController:(id)arg1 ;
-(void)syncAnchorMismatchClosePanel:(id)arg1 ;
-(void)showSyncAnchorMismatchHelp:(id)arg1 ;
@end
