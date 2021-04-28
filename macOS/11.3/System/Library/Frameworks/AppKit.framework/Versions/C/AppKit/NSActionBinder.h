/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSEditorBinder.h>

@interface NSActionBinder : NSEditorBinder {

	SEL _selector;
	struct {
		unsigned _allSeparateArrayArgumentsBoundToIdenticalController : 1;
		unsigned _reservedActionBinder : 31;
	}  _actionBinderFlags;

}
+(id)_enumeratedArgumentBindings:(unsigned long long)arg1 ;
+(id)_targetBinding;
+(id)_enumerationBinding;
+(id)_pluginProtocol;
+(id)bindingsForObject:(id)arg1 ;
+(id)bindingCategory;
-(SEL)selector;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSelector:(SEL)arg1 ;
-(void)_init;
-(void)performAction:(id)arg1 ;
-(void)_copyDetailsFromBinder:(id)arg1 ;
-(void)_connectionWasEstablished;
-(unsigned long long)_argumentBindingCount;
-(char)isBindingReadOnly:(id)arg1 ;
-(char)bindingRunsAlerts:(id)arg1 ;
-(char)targetAndArgumentsAcceptable;
-(char)canApplyValueTransformer:(id)arg1 toBinding:(id)arg2 ;
-(void)removeBinding:(id)arg1 ;
-(id)availableBindings;
-(void)_setParameter:(id)arg1 forOption:(id)arg2 withBindingInfo:(id)arg3 ;
-(id)_optionsForBinding:(id)arg1 specifyOnlyIfDifferentFromDefault:(char)arg2 ;
-(char)allowsNullArgumentWithBinding:(id)arg1 ;
-(char)invokesSeparatelyWithArrayObjectsWithBinding:(id)arg1 ;
-(char)_targetBindingBound;
-(char)_targetAndArgumentsAcceptableForMode:(_NSKeyValueCodingControllerModeType)arg1 ;
-(void)_invokeSelector:(SEL)arg1 withArguments:(id)arg2 forBinding:(id)arg3 ;
-(void)_performActionWithCommitEditing:(id)arg1 didCommit:(char)arg2 contextInfo:(id)arg3 ;
-(void)_executePerformAction;
-(char)_performActionWithCommitEditing;
-(void)updateOutlineColumnDataCell:(id)arg1 forDisplayAtIndexPath:(id)arg2 ;
-(void)updateTableColumnDataCell:(id)arg1 forDisplayAtIndex:(unsigned long long)arg2 ;
-(char)selectionSupportsEnabledState;
-(id)_referenceBinding;
-(void)setAllowsNullArgument:(char)arg1 withBinding:(id)arg2 ;
-(void)setInvokesSeparatelyWithArrayObjects:(char)arg1 withBinding:(id)arg2 ;
-(char)targetAndArgumentsAcceptableAtIndex:(unsigned long long)arg1 ;
-(char)targetAndArgumentsAcceptableAtIndexPath:(id)arg1 ;
-(void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 context:(void*)arg3 ;
@end

