/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/TableViewPlusDelegate.h>
#import <libobjc.A.dylib/NSTableViewDataSource.h>

@class WBSPerSitePreference, NSButton, NSTextField, TableViewPlus, NSArray, NSString;

@interface NotificationPreferencesController : NSViewController <TableViewPlusDelegate, NSTableViewDataSource> {

	WBSPerSitePreference* _notificationsPreference;
	NSButton* _removeButton;
	NSTextField* _emptyTablePlaceholderText;
	NSButton* _canPromptForPushNotificationsCheckbox;
	TableViewPlus* _policyTableView;
	NSArray* _permissionData;

}

@property (assign,nonatomic,__weak) NSButton * removeButton;                                       //@synthesize removeButton=_removeButton - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * emptyTablePlaceholderText;                       //@synthesize emptyTablePlaceholderText=_emptyTablePlaceholderText - In the implementation block
@property (assign,nonatomic,__weak) NSButton * canPromptForPushNotificationsCheckbox;              //@synthesize canPromptForPushNotificationsCheckbox=_canPromptForPushNotificationsCheckbox - In the implementation block
@property (assign,nonatomic,__weak) TableViewPlus * policyTableView;                               //@synthesize policyTableView=_policyTableView - In the implementation block
@property (nonatomic,retain) NSArray * permissionData;                                             //@synthesize permissionData=_permissionData - In the implementation block
@property (nonatomic,readonly) WBSPerSitePreference * notificationsPreference;                     //@synthesize notificationsPreference=_notificationsPreference - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(id)init;
-(void)awakeFromNib;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3 ;
-(id)tableView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2 ;
-(double)tableView:(id)arg1 heightOfRow:(long long)arg2 ;
-(char)tableView:(id)arg1 isGroupRow:(long long)arg2 ;
-(void)tableViewSelectionDidChange:(id)arg1 ;
-(void)viewWillAppear;
-(void)viewWillDisappear;
-(NSButton *)removeButton;
-(void)setRemoveButton:(NSButton *)arg1 ;
-(void)removeSelectedItems:(id)arg1 ;
-(NSTextField *)emptyTablePlaceholderText;
-(void)setEmptyTablePlaceholderText:(NSTextField *)arg1 ;
-(char)tableView:(id)arg1 shouldEditOnSingleClick:(id)arg2 inRow:(long long)arg3 tableColumn:(id)arg4 ;
-(char)tableView:(id)arg1 keyDown:(id)arg2 ;
-(void)_updateVisibilityOfPlaceholderText;
-(void)_reloadTableData;
-(char)_canRemoveSelectedItems;
-(void)_notificationPermissionsChanged:(id)arg1 ;
-(void)_updatePermissionDataAndReloadTable;
-(void)_updateRemoveButtonState;
-(NSArray *)permissionData;
-(void)_processRemotePermissions:(id)arg1 withLocalPermissions:(id)arg2 intoCombinedPermissionData:(id)arg3 ;
-(void)setPermissionData:(NSArray *)arg1 ;
-(void)toggleCanPromptForPushNotifications:(id)arg1 ;
-(WBSPerSitePreference *)notificationsPreference;
-(NSButton *)canPromptForPushNotificationsCheckbox;
-(void)setCanPromptForPushNotificationsCheckbox:(NSButton *)arg1 ;
-(TableViewPlus *)policyTableView;
-(void)setPolicyTableView:(TableViewPlus *)arg1 ;
@end

