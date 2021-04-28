/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@interface WKDateTimePicker : NSObject {

	WeakPtr<WebKit::WebDateTimePickerMac, WTF::EmptyCounter>* _picker;
	DateTimeChooserParameters* _params;
	WeakObjCPtr<NSView> _presentingView;
	RetainPtr<WKDateTimePickerWindow>* _enclosingWindow;
	RetainPtr<NSDatePicker>* _datePicker;
	RetainPtr<NSDateFormatter>* _dateFormatter;

}
-(void)invalidate;
-(void)updatePicker:(DateTimeChooserParameters*)arg1 ;
-(id)initWithParams:(DateTimeChooserParameters*)arg1 inView:(id)arg2 ;
-(void)showPicker:(WebDateTimePickerMac*)arg1 ;
-(void)didChooseDate:(id)arg1 ;
-(id)dateFormatStringForType:(id)arg1 ;
-(id)initialDateForEmptyValue;
@end

