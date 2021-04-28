/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/SocialUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SocialUI/SocialUI-Structs.h>
#import <SocialUI/SOAddRecipientFieldViewController.h>
#import <libobjc.A.dylib/SOTokenAttachmentCellDelegate.h>
#import <libobjc.A.dylib/SOTokenFieldCellDragDelegate.h>
#import <libobjc.A.dylib/SOTokenFieldDelegate.h>

@class SOTokenField, NSMutableDictionary, NSHashTable, SOHandleMenuController, NSString;

@interface SOTokenFieldController : SOAddRecipientFieldViewController <SOTokenAttachmentCellDelegate, SOTokenFieldCellDragDelegate, SOTokenFieldDelegate> {

	char _wroteToPasteboard;
	char _addTokensFromDrag;
	SOTokenField* _layoutTestTokenField;
	NSMutableDictionary* _cachedTokenFieldHeights;
	NSHashTable* _tokenAttachmentCells;
	char _changingFirstResponder;
	char _suppressErrorDisplay;
	SOHandleMenuController* _handleMenuController;

}

@property (retain) SOHandleMenuController * handleMenuController;                     //@synthesize handleMenuController=_handleMenuController - In the implementation block
@property (nonatomic,readonly) SOTokenField * tokenField; 
@property (assign,nonatomic) double tokenFontSize; 
@property (getter=isChangingFirstResponder) char changingFirstResponder;              //@synthesize changingFirstResponder=_changingFirstResponder - In the implementation block
@property (assign) char suppressErrorDisplay;                                         //@synthesize suppressErrorDisplay=_suppressErrorDisplay - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(char)validateMenuItem:(id)arg1 ;
-(void)controlTextDidEndEditing:(id)arg1 ;
-(void)controlTextDidChange:(id)arg1 ;
-(char)control:(id)arg1 textShouldEndEditing:(id)arg2 ;
-(char)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3 ;
-(void)viewDidLoad;
-(id)tokenField:(id)arg1 displayStringForRepresentedObject:(id)arg2 ;
-(id)tokenField:(id)arg1 editingStringForRepresentedObject:(id)arg2 ;
-(id)tokenField:(id)arg1 representedObjectForEditingString:(id)arg2 ;
-(unsigned long long)tokenField:(id)arg1 styleForRepresentedObject:(id)arg2 ;
-(char)tokenField:(id)arg1 writeRepresentedObjects:(id)arg2 toPasteboard:(id)arg3 ;
-(id)tokenField:(id)arg1 readFromPasteboard:(id)arg2 ;
-(id)tokenField:(id)arg1 menuForRepresentedObject:(id)arg2 ;
-(char)tokenField:(id)arg1 hasMenuForRepresentedObject:(id)arg2 ;
-(id)tokenField:(id)arg1 shouldAddObjects:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(id)tokenField:(id)arg1 setUpTokenAttachmentCell:(id)arg2 forRepresentedObject:(id)arg3 ;
-(SOTokenField *)tokenField;
-(void)selectedResult:(id)arg1 ;
-(void)didSelectResult:(id)arg1 ;
-(void)chatDisplayControllerWillChange:(id)arg1 ;
-(void)chatDisplayControllerDidChange:(id)arg1 ;
-(id)tokenAttachmentCellEffectiveAppearance:(id)arg1 ;
-(char)tokenAttachmentCellHasErrorState:(id)arg1 ;
-(char)tokenAttachmentCellShouldShowDecidingBackground:(id)arg1 ;
-(char)isNewComposeForTokenAttachmentCell:(id)arg1 ;
-(void)tokenAttachmentCell:(id)arg1 willBeDestroyedWithRepresentedObject:(id)arg2 ;
-(char)tokenFieldShouldPreventAdditionalTyping:(id)arg1 ;
-(void)tokenFieldCellDidBeginDropOperation:(id)arg1 ;
-(void)tokenFieldCellDidEndDropOperation:(id)arg1 ;
-(char)tokenAttachmentCell:(id)arg1 doubleClickedInRect:(CGRect)arg2 ofView:(id)arg3 ;
-(void)setTokenFontSize:(double)arg1 ;
-(void)appendIMHandles:(id)arg1 ;
-(unsigned long long)visibleTokenCountForLineCount:(unsigned long long)arg1 width:(double)arg2 ;
-(void)showContactCard:(id)arg1 ;
-(double)tokenFontSize;
-(char)_showContactCardForIMHandle:(id)arg1 ;
-(unsigned long long)_visibleTokenCountWithLineCount:(unsigned long long)arg1 tokenCount:(unsigned long long)arg2 recipients:(id)arg3 tokenFieldHeight:(double)arg4 ;
-(void)_setRecipientTokens:(id)arg1 ;
-(char)suppressErrorDisplay;
-(void)_showErrorMessageForHandle:(id)arg1 ;
-(void)_registerTokenAttachmentCell:(id)arg1 ;
-(void)_updateHandleTokenFromNotification:(id)arg1 ;
-(id)_strippedPboardString:(id)arg1 ;
-(SOHandleMenuController *)handleMenuController;
-(void)setHandleMenuController:(SOHandleMenuController *)arg1 ;
-(void)updateRecipients;
-(id)autocompleteStringForFieldEditor:(id)arg1 ;
-(void)_chatDisplayControllerRecipientsDidChange:(id)arg1 ;
-(void)_newChatDisplayControllerIDSValidationDidChange:(id)arg1 ;
-(void)_updatePlaceholderAttributedString;
-(void)_tokenFormatDidChange:(id)arg1 ;
-(NSRange)rangeForUserCompletionInFieldEditor:(id)arg1 ;
-(char)isChangingFirstResponder;
-(void)setChangingFirstResponder:(char)arg1 ;
-(void)setSuppressErrorDisplay:(char)arg1 ;
@end

