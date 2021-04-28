/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/Versions/A/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <AppKit/NSTextField.h>
#import <libobjc.A.dylib/NSTextFieldDelegate.h>
#import <libobjc.A.dylib/PKAutocompleteViewControllerDelegate.h>
#import <libobjc.A.dylib/PKAddressSearchModelDelegate.h>

@protocol PKAutocompleteTextFieldDelegate;
@class PKAddressSearchModel, PKAutocompleteViewController, PKAddressSearchResults, NSString;

@interface PKAutocompleteTextField : NSTextField <NSTextFieldDelegate, PKAutocompleteViewControllerDelegate, PKAddressSearchModelDelegate> {

	char _editing;
	char _autocompleting;
	id<PKAutocompleteTextFieldDelegate> _autocompleteDelegate;
	PKAddressSearchModel* _addressSearchModel;
	PKAutocompleteViewController* _autocompleteViewController;
	PKAddressSearchResults* _searchResults;

}

@property (assign,getter=isEditing,nonatomic) char editing;                                                //@synthesize editing=_editing - In the implementation block
@property (assign,getter=isAutocompleting,nonatomic) char autocompleting;                                  //@synthesize autocompleting=_autocompleting - In the implementation block
@property (nonatomic,retain) PKAddressSearchModel * addressSearchModel;                                    //@synthesize addressSearchModel=_addressSearchModel - In the implementation block
@property (nonatomic,retain) PKAutocompleteViewController * autocompleteViewController;                    //@synthesize autocompleteViewController=_autocompleteViewController - In the implementation block
@property (nonatomic,retain) PKAddressSearchResults * searchResults;                                       //@synthesize searchResults=_searchResults - In the implementation block
@property (assign,nonatomic,__weak) id<PKAutocompleteTextFieldDelegate> autocompleteDelegate;              //@synthesize autocompleteDelegate=_autocompleteDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)isEditing;
-(void)controlTextDidBeginEditing:(id)arg1 ;
-(void)controlTextDidEndEditing:(id)arg1 ;
-(void)controlTextDidChange:(id)arg1 ;
-(char)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3 ;
-(void)textDidChange:(id)arg1 ;
-(char)textView:(id)arg1 doCommandBySelector:(SEL)arg2 ;
-(void)setEditing:(char)arg1 ;
-(PKAddressSearchResults *)searchResults;
-(void)setSearchResults:(PKAddressSearchResults *)arg1 ;
-(void)contactsSearchUpdated:(id)arg1 ;
-(void)selectedAddress:(id)arg1 withError:(id)arg2 ;
-(void)mapSearchUpdated:(id)arg1 ;
-(void)setAutocompleteDelegate:(id<PKAutocompleteTextFieldDelegate>)arg1 ;
-(id<PKAutocompleteTextFieldDelegate>)autocompleteDelegate;
-(void)setAutocompleteViewController:(PKAutocompleteViewController *)arg1 ;
-(void)autocompleteViewControllerDidFinish:(id)arg1 ;
-(long long)numberOfSectionsInAutocompleteViewController:(id)arg1 ;
-(long long)autocompleteViewController:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)autocompleteViewController:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)autocompleteViewController:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)autocompleteViewController:(id)arg1 viewForRowAtIndexPath:(id)arg2 ;
-(PKAutocompleteViewController *)autocompleteViewController;
-(void)_beginSearchIfNecessary;
-(char)isAutocompleting;
-(void)_hideAutocomplete;
-(long long)_indexForSection:(long long)arg1 ;
-(PKAddressSearchModel *)addressSearchModel;
-(void)_updateAutocompleteVisibility;
-(void)_showAutocompleteIfNecessary;
-(void)setAutocompleting:(char)arg1 ;
-(char)_isViewOrSubviewFirstResponder:(id)arg1 ;
-(void)setAddressSearchModel:(PKAddressSearchModel *)arg1 ;
@end
