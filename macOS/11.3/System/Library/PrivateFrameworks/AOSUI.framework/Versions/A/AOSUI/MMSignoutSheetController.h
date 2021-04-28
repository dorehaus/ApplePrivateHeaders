/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSTableViewDataSource.h>
#import <libobjc.A.dylib/NSTableViewDelegate.h>
#import <libobjc.A.dylib/NSTouchBarProvider.h>

@class ACAccountStore, ACAccount, NSWindow, NSTableView, NSTextField, NSButton, NSMutableArray, iCloudTouchBarController, NSString, NSTouchBar;

@interface MMSignoutSheetController : NSObject <NSTableViewDataSource, NSTableViewDelegate, NSTouchBarProvider> {

	ACAccountStore* _accountStore;
	ACAccount* _account;
	NSWindow* _signoutSheet;
	NSTableView* _serviceTable;
	NSTextField* _messageText;
	NSButton* _continueButton;
	NSButton* _cancelButton;
	NSMutableArray* _serviceInfoList;
	NSWindow* _parentWindow;
	iCloudTouchBarController* _touchBarController;

}

@property (__weak) NSWindow * signoutSheet;                                    //@synthesize signoutSheet=_signoutSheet - In the implementation block
@property (__weak) NSTableView * serviceTable;                                 //@synthesize serviceTable=_serviceTable - In the implementation block
@property (__weak) NSTextField * messageText;                                  //@synthesize messageText=_messageText - In the implementation block
@property (__weak) NSButton * continueButton;                                  //@synthesize continueButton=_continueButton - In the implementation block
@property (__weak) NSButton * cancelButton;                                    //@synthesize cancelButton=_cancelButton - In the implementation block
@property (retain) NSMutableArray * serviceInfoList;                           //@synthesize serviceInfoList=_serviceInfoList - In the implementation block
@property (assign) NSWindow * parentWindow;                                    //@synthesize parentWindow=_parentWindow - In the implementation block
@property (retain) iCloudTouchBarController * touchBarController;              //@synthesize touchBarController=_touchBarController - In the implementation block
@property (nonatomic,readonly) ACAccount * account;                            //@synthesize account=_account - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSTouchBar * touchBar; 
-(NSWindow *)parentWindow;
-(void)setMessageText:(NSTextField *)arg1 ;
-(NSTextField *)messageText;
-(NSTouchBar *)touchBar;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3 ;
-(char)tableView:(id)arg1 shouldSelectRow:(long long)arg2 ;
-(void)setParentWindow:(NSWindow *)arg1 ;
-(NSButton *)cancelButton;
-(void)cancelButtonPressed:(id)arg1 ;
-(void)setCancelButton:(NSButton *)arg1 ;
-(ACAccount *)account;
-(id)initWithAccount:(id)arg1 ;
-(iCloudTouchBarController *)touchBarController;
-(void)setTouchBarController:(iCloudTouchBarController *)arg1 ;
-(void)checkboxClicked:(id)arg1 ;
-(NSButton *)continueButton;
-(void)setContinueButton:(NSButton *)arg1 ;
-(void)showSignoutSheetForDataclassActions:(id)arg1 usingWindow:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setServiceInfoList:(NSMutableArray *)arg1 ;
-(NSMutableArray *)serviceInfoList;
-(NSTableView *)serviceTable;
-(long long)countOfEnabledCheckboxes;
-(NSWindow *)signoutSheet;
-(void)continueButtonPressed:(id)arg1 ;
-(id)enabledServices;
-(void)setSignoutSheet:(NSWindow *)arg1 ;
-(void)setServiceTable:(NSTableView *)arg1 ;
@end

