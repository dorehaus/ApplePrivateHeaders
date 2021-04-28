/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/Versions/A/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ABCardCollectionViewControllerDelegate <NSObject>
@required
-(id)delegate;
-(char)isTemplate;
-(char)isEditable;
-(char)isEditing;
-(char)isSelectable;
-(char)isUnified;
-(id)userActionListDataSource;
-(char)editMode;
-(char)importMode;
-(char)suggestedCardMode;
-(char)isPrivateMeEnabled;
-(void)notifyDelegateActionWasPerformed;
-(void)editExistingKey:(id)arg1 identifier:(id)arg2 yOffset:(double)arg3;
-(id)colorForProperty:(id)arg1 identifier:(id)arg2;
-(void)cardViewNoteDidChange;
-(void)cardCollectionViewControllerKeyViewLoopNeedsUpdate:(id)arg1;

@end
