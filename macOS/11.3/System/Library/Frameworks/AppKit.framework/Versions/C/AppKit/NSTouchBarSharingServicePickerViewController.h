/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@protocol NSSharingServicePickerTouchBarItemDelegate;
@class NSSharingServicePicker, NSStackView;

@interface NSTouchBarSharingServicePickerViewController : NSViewController {

	id<NSSharingServicePickerTouchBarItemDelegate> _delegate;
	NSSharingServicePicker* _picker;
	NSStackView* _stackView;

}

@property (__weak) id<NSSharingServicePickerTouchBarItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id<NSSharingServicePickerTouchBarItemDelegate>)delegate;
-(void)setDelegate:(id<NSSharingServicePickerTouchBarItemDelegate>)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(char)_viewControllerSupports10_10Features;
-(void)viewWillAppear;
-(void)_showAppExtensionsPref:(id)arg1 ;
-(void)_loadContents;
@end

