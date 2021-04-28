/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSView.h>
#import <libobjc.A.dylib/VisualTabPickerCloudDeviceViewDataSource.h>
#import <libobjc.A.dylib/VisualTabPickerCloudDeviceViewDelegate.h>

@protocol VisualTabPickerCloudTabsViewDataSource, VisualTabPickerCloudTabsViewDelegate;
@class NSMutableArray, NSString;

@interface VisualTabPickerCloudTabsView : NSView <VisualTabPickerCloudDeviceViewDataSource, VisualTabPickerCloudDeviceViewDelegate> {

	NSMutableArray* _deviceViews;
	char _hasDeviceViewsConstraints;
	id<VisualTabPickerCloudTabsViewDataSource> _dataSource;
	id<VisualTabPickerCloudTabsViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<VisualTabPickerCloudTabsViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<VisualTabPickerCloudTabsViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)requiresConstraintBasedLayout;
-(id)initWithCoder:(id)arg1 ;
-(id<VisualTabPickerCloudTabsViewDelegate>)delegate;
-(void)setDelegate:(id<VisualTabPickerCloudTabsViewDelegate>)arg1 ;
-(void)layout;
-(void)updateConstraints;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<VisualTabPickerCloudTabsViewDataSource>)dataSource;
-(void)reloadData;
-(void)setDataSource:(id<VisualTabPickerCloudTabsViewDataSource>)arg1 ;
-(void)_reloadData;
-(unsigned long long)numberOfTabsForVisualTabPickerCloudDeviceView:(id)arg1 ;
-(void)visualTabPickerCloudDeviceView:(id)arg1 didRemoveCloudTabAtIndex:(unsigned long long)arg2 ;
-(id)nameOfDeviceForVisualTabPickerCloudDeviceView:(id)arg1 ;
-(id)visualTabPickerCloudDeviceView:(id)arg1 titleOfTabAtIndex:(unsigned long long)arg2 ;
-(void)didRemoveAllCloudTabsForVisualTabPickerCloudDeviceView:(id)arg1 ;
-(void)visualTabPickerCloudDeviceView:(id)arg1 didSelectCloudTabAtIndex:(unsigned long long)arg2 ;
@end

