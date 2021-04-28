/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/SheetWithTableController.h>
#import <libobjc.A.dylib/NSTableViewDataSource.h>
#import <libobjc.A.dylib/NSTableViewDelegate.h>
#import <libobjc.A.dylib/TrackingDataControllerClient.h>

@class NSSearchField, NSButton, NSArray, WBSFaviconRequestsController, NSMutableSet, NSTimer, AcceptedSiteDataDescriptionProvider, NSTextField, NSString;

@interface AcceptedSiteDataSheetController : SheetWithTableController <NSTableViewDataSource, NSTableViewDelegate, TrackingDataControllerClient> {

	NSSearchField* searchField;
	NSButton* doneButton;
	NSArray* _websiteTrackingData;
	NSArray* _unfilteredWebsiteTrackingData;
	WBSFaviconRequestsController* _requestController;
	NSMutableSet* _selectedDisplayNames;
	unique_ptr<Safari::TrackingDataControllerClientObjCAdapter, std::__1::default_delete<Safari::TrackingDataControllerClientObjCAdapter>>* _clientObjCAdapter;
	NSTimer* _updateWebsiteTrackingDataCoalescingTimer;
	NSArray* _latestWebsiteTrackingData;
	AcceptedSiteDataDescriptionProvider* _acceptedSiteDataDescriptionProvider;
	NSTextField* _emptyTablePlaceholderText;

}

@property (assign,nonatomic,__weak) NSTextField * emptyTablePlaceholderText;              //@synthesize emptyTablePlaceholderText=_emptyTablePlaceholderText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)awakeFromNib;
-(void)windowDidChangeOcclusionState:(id)arg1 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(char)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3 ;
-(id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3 ;
-(void)tableViewSelectionDidChange:(id)arg1 ;
-(void)hideSheet:(id)arg1 ;
-(void)_reloadDataAndRestoreSelection;
-(void)_updatePlaceholderTextValueAndVisibility;
-(void)_beginWatchingTrackingData;
-(void)showSheetInWindow:(id)arg1 ;
-(void)_stopWatchingTrackingData;
-(void)_cancelUpdateTrackingDataCoalescingTimer;
-(void)reloadTableData;
-(void)reloadDataAndRestoreSelectedSites;
-(id)filterStringFromSearchField;
-(void)filterTrackingData:(id)arg1 ;
-(char)_confirmRemoveAllItems;
-(void)removeAllItems:(id)arg1 ;
-(void)_updateTrackingDataCoalescingTimerFired;
-(void)didUpdateTrackingData:(id)arg1 ;
-(void)search:(id)arg1 ;
-(void)removeSelectedItems:(id)arg1 ;
-(char)validate_focusContentSearchField:(id)arg1 ;
-(void)focusContentSearchField:(id)arg1 ;
-(NSTextField *)emptyTablePlaceholderText;
-(void)setEmptyTablePlaceholderText:(NSTextField *)arg1 ;
@end

