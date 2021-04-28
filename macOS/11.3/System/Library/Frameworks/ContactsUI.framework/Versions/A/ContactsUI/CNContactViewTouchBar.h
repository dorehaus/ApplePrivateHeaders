/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/Versions/A/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <libobjc.A.dylib/CNAddFieldTouchBarDelegate.h>
#import <libobjc.A.dylib/CNUIShareKitTransitionProvider.h>
#import <libobjc.A.dylib/NSTouchBarProvider.h>

@protocol CNContactViewTouchBarDelegate;
@class NSTouchBar, CNContact, CNUIUserActionListDataSource, CNAddFieldTouchBar, NSPopoverTouchBarItem, CNUserActionTouchBar, NSButton, CNUIVCardSharingTask, NSSharingServicePickerTouchBarItem, NSGroupTouchBarItem, NSString;

@interface CNContactViewTouchBar : NSObject <CNAddFieldTouchBarDelegate, CNUIShareKitTransitionProvider, NSTouchBarProvider> {

	CNContact* _contact;
	id<CNContactViewTouchBarDelegate> _delegate;
	CNUIUserActionListDataSource* _userActionListDataSource;
	NSTouchBar* _touchBar;
	CNAddFieldTouchBar* _addFieldTouchBar;
	NSPopoverTouchBarItem* _addFieldPopoverItem;
	CNUserActionTouchBar* _userActionTouchBar;
	NSButton* _editButton;
	CNUIVCardSharingTask* _sharingTask;
	NSSharingServicePickerTouchBarItem* _shareItem;
	NSGroupTouchBarItem* _groupItem;

}

@property (assign,nonatomic,__weak) id<CNContactViewTouchBarDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) CNUIUserActionListDataSource * userActionListDataSource;              //@synthesize userActionListDataSource=_userActionListDataSource - In the implementation block
@property (nonatomic,retain) NSTouchBar * touchBar;                                                       //@synthesize touchBar=_touchBar - In the implementation block
@property (nonatomic,retain) CNAddFieldTouchBar * addFieldTouchBar;                                       //@synthesize addFieldTouchBar=_addFieldTouchBar - In the implementation block
@property (nonatomic,retain) NSPopoverTouchBarItem * addFieldPopoverItem;                                 //@synthesize addFieldPopoverItem=_addFieldPopoverItem - In the implementation block
@property (nonatomic,retain) CNUserActionTouchBar * userActionTouchBar;                                   //@synthesize userActionTouchBar=_userActionTouchBar - In the implementation block
@property (nonatomic,retain) NSButton * editButton;                                                       //@synthesize editButton=_editButton - In the implementation block
@property (nonatomic,retain) CNUIVCardSharingTask * sharingTask;                                          //@synthesize sharingTask=_sharingTask - In the implementation block
@property (nonatomic,retain) NSSharingServicePickerTouchBarItem * shareItem;                              //@synthesize shareItem=_shareItem - In the implementation block
@property (nonatomic,retain) NSGroupTouchBarItem * groupItem;                                             //@synthesize groupItem=_groupItem - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                                         //@synthesize contact=_contact - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CNContactViewTouchBarDelegate>)delegate;
-(void)setDelegate:(id<CNContactViewTouchBarDelegate>)arg1 ;
-(void)setTouchBar:(NSTouchBar *)arg1 ;
-(NSTouchBar *)touchBar;
-(id)initWithDelegate:(id)arg1 ;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(void)addField:(id)arg1 ;
-(void)updateTouchBar;
-(id)initWithDelegate:(id)arg1 userActionListDataSource:(id)arg2 ;
-(void)setupTouchBar;
-(void)setupAddFieldItemAndTouchBar;
-(void)setupUserActionTouchBar;
-(void)setupEditButton;
-(void)setupSharingTaskAndItem;
-(void)setupGroupItem;
-(NSPopoverTouchBarItem *)addFieldPopoverItem;
-(CNUserActionTouchBar *)userActionTouchBar;
-(void)_updateTouchBarIdentifiers;
-(CNAddFieldTouchBar *)addFieldTouchBar;
-(NSButton *)editButton;
-(void)updateShareItem;
-(NSGroupTouchBarItem *)groupItem;
-(CNUIVCardSharingTask *)sharingTask;
-(char)canAddContactOrGroup;
-(char)canAddField;
-(void)addContact;
-(void)addGroup;
-(CGRect)profilePhotoScreenRect;
-(id)profilePhotoImage;
-(id)hostWindowForShareSheet;
-(CNUIUserActionListDataSource *)userActionListDataSource;
-(void)setUserActionListDataSource:(CNUIUserActionListDataSource *)arg1 ;
-(void)setAddFieldTouchBar:(CNAddFieldTouchBar *)arg1 ;
-(void)setAddFieldPopoverItem:(NSPopoverTouchBarItem *)arg1 ;
-(void)setUserActionTouchBar:(CNUserActionTouchBar *)arg1 ;
-(void)setEditButton:(NSButton *)arg1 ;
-(void)setSharingTask:(CNUIVCardSharingTask *)arg1 ;
-(NSSharingServicePickerTouchBarItem *)shareItem;
-(void)setShareItem:(NSSharingServicePickerTouchBarItem *)arg1 ;
-(void)setGroupItem:(NSGroupTouchBarItem *)arg1 ;
@end

