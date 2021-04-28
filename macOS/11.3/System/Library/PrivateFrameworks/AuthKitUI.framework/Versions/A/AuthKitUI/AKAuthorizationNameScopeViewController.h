/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/Versions/A/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/AKNameTextFieldDelegate.h>
#import <libobjc.A.dylib/NSTextFieldDelegate.h>

@protocol AKAuthorizationNameScopeViewControllerDelegate;
@class NSTextField, NSButton, NSLayoutConstraint, NSArray, NSString;

@interface AKAuthorizationNameScopeViewController : NSViewController <AKNameTextFieldDelegate, NSTextFieldDelegate> {

	char _hasClearButton;
	char _internalIsEditingName;
	id<AKAuthorizationNameScopeViewControllerDelegate> _delegate;
	unsigned long long _fieldType;
	unsigned long long _selectionStyle;
	double _valueLeadingInset;
	NSTextField* _scopeLabel;
	NSTextField* _valueLabel;
	NSButton* _clearButton;
	NSLayoutConstraint* _viewHeightConstraint;
	NSArray* _editValueLabels;
	NSString* _internalScopeString;
	NSString* _internalValueString;

}

@property (copy) NSString * internalScopeString;                                             //@synthesize internalScopeString=_internalScopeString - In the implementation block
@property (copy) NSString * internalValueString;                                             //@synthesize internalValueString=_internalValueString - In the implementation block
@property (assign) char internalIsEditingName;                                               //@synthesize internalIsEditingName=_internalIsEditingName - In the implementation block
@property (__weak) id<AKAuthorizationNameScopeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) unsigned long long fieldType;                                             //@synthesize fieldType=_fieldType - In the implementation block
@property (assign) char hasClearButton;                                                      //@synthesize hasClearButton=_hasClearButton - In the implementation block
@property (assign) unsigned long long selectionStyle;                                        //@synthesize selectionStyle=_selectionStyle - In the implementation block
@property (assign) double valueLeadingInset;                                                 //@synthesize valueLeadingInset=_valueLeadingInset - In the implementation block
@property (copy) NSString * scopeString; 
@property (copy) NSString * valueString; 
@property (readonly) NSTextField * scopeLabel;                                               //@synthesize scopeLabel=_scopeLabel - In the implementation block
@property (readonly) NSTextField * valueLabel;                                               //@synthesize valueLabel=_valueLabel - In the implementation block
@property (readonly) NSButton * clearButton;                                                 //@synthesize clearButton=_clearButton - In the implementation block
@property (readonly) NSLayoutConstraint * viewHeightConstraint;                              //@synthesize viewHeightConstraint=_viewHeightConstraint - In the implementation block
@property (assign,getter=isEditingName,nonatomic) char editingName; 
@property (readonly) NSArray * editValueLabels;                                              //@synthesize editValueLabels=_editValueLabels - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<AKAuthorizationNameScopeViewControllerDelegate>)delegate;
-(void)setDelegate:(id<AKAuthorizationNameScopeViewControllerDelegate>)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(unsigned long long)selectionStyle;
-(void)setSelectionStyle:(unsigned long long)arg1 ;
-(void)loadView;
-(NSTextField *)valueLabel;
-(void)controlTextDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(NSString *)valueString;
-(void)setValueString:(NSString *)arg1 ;
-(void)setFieldType:(unsigned long long)arg1 ;
-(void)setScopeString:(NSString *)arg1 ;
-(void)setHasClearButton:(char)arg1 ;
-(char)isEditingName;
-(NSArray *)editValueLabels;
-(void)setEditingName:(char)arg1 animated:(char)arg2 ;
-(void)_transitionToEditingNameAnimated:(char)arg1 ;
-(void)_transitionFromEditingNameAnimated:(char)arg1 ;
-(void)setEditingName:(char)arg1 ;
-(id)_newTextField;
-(NSString *)internalScopeString;
-(NSTextField *)scopeLabel;
-(void)setInternalScopeString:(NSString *)arg1 ;
-(NSString *)scopeString;
-(void)textFieldDidBecomeFirstResponder:(id)arg1 ;
-(unsigned long long)fieldType;
-(void)_setupValueLabelEditable:(char)arg1 ;
-(void)_setupEditValueLabels:(unsigned long long)arg1 ;
-(double)valueLeadingInset;
-(char)hasClearButton;
-(id)_newClearTextButton;
-(void)_setEditingNameAlphaValue:(double)arg1 animated:(char)arg2 ;
-(NSString *)internalValueString;
-(void)setInternalValueString:(NSString *)arg1 ;
-(void)_delegate_didSelectEditClear:(char)arg1 ;
-(void)_initTextField:(id)arg1 ;
-(id)_newValueLabelEditable:(char)arg1 ;
-(void)_handleReturnInTextField:(id)arg1 ;
-(id)_newNameTextField;
-(void)handleClearText:(id)arg1 ;
-(char)internalIsEditingName;
-(void)setInternalIsEditingName:(char)arg1 ;
-(NSButton *)clearButton;
-(unsigned long long)_indexOfEditableField:(id)arg1 ;
-(void)_delegate_didChangeEditableFieldAtIndex:(unsigned long long)arg1 ;
-(void)_delegate_didEndEditingFieldAtIndex:(unsigned long long)arg1 ;
-(void)setValueLeadingInset:(double)arg1 ;
-(NSLayoutConstraint *)viewHeightConstraint;
@end

