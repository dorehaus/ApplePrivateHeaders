/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSView.h>
#import <libobjc.A.dylib/NSTableViewDataSource.h>
#import <libobjc.A.dylib/NSTableViewDelegate.h>
#import <libobjc.A.dylib/RolloverActionButtonTableCellViewDelegate.h>
#import <libobjc.A.dylib/AccessibleRolloverActionButtonTableCellViewDelegate.h>

@protocol VisualTabPickerCloudDeviceViewDataSource, VisualTabPickerCloudDeviceViewDelegate;
@class NSTextField, NSTableView, NSString;

@interface VisualTabPickerCloudDeviceView : NSView <NSTableViewDataSource, NSTableViewDelegate, RolloverActionButtonTableCellViewDelegate, AccessibleRolloverActionButtonTableCellViewDelegate> {

	NSTextField* _deviceNameTextField;
	NSTableView* _tableView;
	char _closeRequestSupported;
	id<VisualTabPickerCloudDeviceViewDataSource> _dataSource;
	id<VisualTabPickerCloudDeviceViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<VisualTabPickerCloudDeviceViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<VisualTabPickerCloudDeviceViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char closeRequestSupported;                                                  //@synthesize closeRequestSupported=_closeRequestSupported - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<VisualTabPickerCloudDeviceViewDelegate>)delegate;
-(void)setDelegate:(id<VisualTabPickerCloudDeviceViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(id<VisualTabPickerCloudDeviceViewDataSource>)dataSource;
-(void)setDataSource:(id<VisualTabPickerCloudDeviceViewDataSource>)arg1 ;
-(char)isAccessibilityElement;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3 ;
-(id)tableView:(id)arg1 rowViewForRow:(long long)arg2 ;
-(char)tableView:(id)arg1 shouldSelectRow:(long long)arg2 ;
-(id)tableView:(id)arg1 rowActionsForRow:(long long)arg2 edge:(long long)arg3 ;
-(void)tableViewSelectionDidChange:(id)arg1 ;
-(void)_reloadData;
-(char)closeRequestSupported;
-(id)accessibilityGetDescriptionForAccessibleRolloverActionButtonTableCellView:(id)arg1 ;
-(void)accessibilityPerformPressActionForAccessibleRolloverActionButtonTableCellView:(id)arg1 ;
-(void)actionButtonClickedInTableCellView:(id)arg1 ;
-(void)_createTableView;
-(void)_updateTableAccessibilityLabel;
-(char)_isHeaderRow:(long long)arg1 ;
-(unsigned long long)_cloudTabIndexForRowIndex:(unsigned long long)arg1 ;
-(id)_createTabTitleField;
-(void)_activateTableCellRow:(unsigned long long)arg1 ;
-(void)setCloseRequestSupported:(char)arg1 ;
@end

