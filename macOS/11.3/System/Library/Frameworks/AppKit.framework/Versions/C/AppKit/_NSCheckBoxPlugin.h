/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/_NSValueBinderPlugin.h>

@interface _NSCheckBoxPlugin : _NSValueBinderPlugin {

	struct {
		unsigned _allowsMixedState : 1;
		unsigned _testedMixedState : 1;
		unsigned _reservedCheckBoxPlugin : 30;
	}  _checkBoxPluginFlags;

}
+(char)isUsableWithObject:(id)arg1 ;
-(id)initWithBinder:(id)arg1 object:(id)arg2 ;
-(void)connectionWasEstablished:(id)arg1 ;
-(char)acceptsMarker:(id)arg1 binding:(id)arg2 overrideWithPlaceholderIfDefined:(char*)arg3 ;
-(char)isBooleanValueBindingForObject:(id)arg1 ;
-(void)showValue:(id)arg1 inObject:(id)arg2 ;
-(id)shownValueInObject:(id)arg1 ;
-(char)shouldAlwaysUpdateDisplayValue;
-(id)objectMechanismsRequired;
-(Class)_valueClass:(id)arg1 ;
@end

