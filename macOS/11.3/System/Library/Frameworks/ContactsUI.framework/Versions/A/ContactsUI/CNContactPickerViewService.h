/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/Versions/A/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ViewBridge/NSServiceViewController.h>
#import <libobjc.A.dylib/CNContactPickerViewController.h>
#import <libobjc.A.dylib/CNContactPickerInternalSetup.h>
#import <libobjc.A.dylib/CNContactPickerViewControllerSearch.h>

@class CNContactListController, ABPersonListSearchController, CNContactPickerInProccessViewController, NSWindow, NSString;

@interface CNContactPickerViewService : NSServiceViewController <CNContactPickerViewController, CNContactPickerInternalSetup, CNContactPickerViewControllerSearch> {

	char _needsHostingWindow;
	CNContactPickerInProccessViewController* _inProcessContactPicker;
	NSWindow* _hostingWindow;

}

@property (retain) CNContactPickerInProccessViewController * inProcessContactPicker;              //@synthesize inProcessContactPicker=_inProcessContactPicker - In the implementation block
@property (nonatomic,retain) NSWindow * hostingWindow;                                            //@synthesize hostingWindow=_hostingWindow - In the implementation block
@property (assign,nonatomic) char needsHostingWindow;                                             //@synthesize needsHostingWindow=_needsHostingWindow - In the implementation block
@property (__weak) id<CNContactPickerInternalResponseDelegate> responseDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) CNContactListController * contactListController; 
@property (readonly) ABPersonListSearchController * searchController; 
@property (getter=isSearchFieldVisible) char searchFieldVisible; 
-(id)init;
-(void)setView:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)awakeFromNib;
-(ABPersonListSearchController *)searchController;
-(void)addSection:(id)arg1 ;
-(void)setAccounts:(id)arg1 ;
-(unsigned long long)awakeFromRemoteView;
-(void)setResponseDelegate:(id<CNContactPickerInternalResponseDelegate>)arg1 ;
-(void)pickerDidCreate;
-(void)setDisplayedKeys:(id)arg1 ;
-(void)resetUsageStatistics;
-(void)traceUsageStatistics;
-(void)showSectionWithIdentifier:(id)arg1 ;
-(void)registerSectionsForDraggedTypes:(id)arg1 ;
-(void)setSearchFieldVisible:(char)arg1 ;
-(void)performInitialSelection;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 needsHostingWindow:(char)arg3 ;
-(CNContactPickerInProccessViewController *)inProcessContactPicker;
-(void)attachViewToHostingWindow:(id)arg1 ;
-(char)needsHostingWindow;
-(void)setHostingWindow:(NSWindow *)arg1 ;
-(id<CNContactPickerInternalResponseDelegate>)responseDelegate;
-(CNContactListController *)contactListController;
-(char)isSearchFieldVisible;
-(void)setPickerScope:(id)arg1 ;
-(id)initWithNeedsHostingWindow:(char)arg1 ;
-(void)setInProcessContactPicker:(CNContactPickerInProccessViewController *)arg1 ;
-(NSWindow *)hostingWindow;
-(void)setNeedsHostingWindow:(char)arg1 ;
@end

