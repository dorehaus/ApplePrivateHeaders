/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/Versions/A/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@protocol SiriUIObjectPickerViewControllerDelegate;
@class SAUIDomainObjectPicker;

@interface SiriUIObjectPickerViewController : NSViewController {

	id<SiriUIObjectPickerViewControllerDelegate> _pickerDelegate;
	SAUIDomainObjectPicker* _picker;

}

@property (getter=_picker,nonatomic,readonly) SAUIDomainObjectPicker * picker;                                //@synthesize picker=_picker - In the implementation block
@property (assign,nonatomic,__weak) id<SiriUIObjectPickerViewControllerDelegate> pickerDelegate;              //@synthesize pickerDelegate=_pickerDelegate - In the implementation block
+(id)pickerControllerWithPicker:(id)arg1 ;
-(id)_picker;
-(void)showPicker:(id)arg1 ;
-(id)initWithPicker:(id)arg1 ;
-(id<SiriUIObjectPickerViewControllerDelegate>)pickerDelegate;
-(void)setPickerDelegate:(id<SiriUIObjectPickerViewControllerDelegate>)arg1 ;
@end

