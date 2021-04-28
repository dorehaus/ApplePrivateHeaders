/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UniversalAccess.framework/Versions/A/UniversalAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSButton, NSComboBox, UAModifiersController;

@interface UAScrollZoomSimpleController : NSObject {

	NSButton* ScrollZoomCheckBox;
	NSComboBox* ModifiersComboBox;
	char _didAwakeFromNib;
	UAModifiersController* _modifiersController;

}
-(void)dealloc;
-(void)_update;
-(void)awakeFromNib;
-(void)_handlePreferencesChange:(id)arg1 ;
-(void)_registerForNotifiations;
-(void)scrollZoomCheckBoxPressed:(id)arg1 ;
-(id)fieldEditorToObject:(id)arg1 ;
-(id)initWithCheckBox:(id)arg1 andComboBox:(id)arg2 ;
@end

