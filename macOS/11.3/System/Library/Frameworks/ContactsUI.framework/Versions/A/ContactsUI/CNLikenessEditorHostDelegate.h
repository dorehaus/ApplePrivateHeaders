/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/Versions/A/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNLikenessEditorHostDelegate
@required
-(void)close;
-(void)save;
-(void)setPreviousButtonAction:(/*^block*/id)arg1;
-(void)setNextButtonAction:(/*^block*/id)arg1;
-(void)setWindowTitle:(id)arg1;
-(void)setReadyToSave;
-(void)setNextButtonEnabled:(char)arg1;
-(void)setNextButtonTitle:(id)arg1;
-(char)isBackwardsNavigationEnabled;
-(void)setPreviousButtonEnabled:(char)arg1;
-(char)isBuddy;
-(void)updateNavigationForReturn;

@end
