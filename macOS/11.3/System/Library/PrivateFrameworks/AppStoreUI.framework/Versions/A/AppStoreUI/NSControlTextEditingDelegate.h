/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppStoreUI.framework/Versions/A/AppStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSControlTextEditingDelegate <NSObject>
@optional
-(void)controlTextDidBeginEditing:(id)arg1;
-(void)controlTextDidEndEditing:(id)arg1;
-(void)controlTextDidChange:(id)arg1;
-(char)control:(id)arg1 textShouldBeginEditing:(id)arg2;
-(char)control:(id)arg1 textShouldEndEditing:(id)arg2;
-(char)control:(id)arg1 didFailToFormatString:(id)arg2 errorDescription:(id)arg3;
-(void)control:(id)arg1 didFailToValidatePartialString:(id)arg2 errorDescription:(id)arg3;
-(char)control:(id)arg1 isValidObject:(id)arg2;
-(char)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
-(id)control:(id)arg1 textView:(id)arg2 completions:(id)arg3 forPartialWordRange:(NSRange)arg4 indexOfSelectedItem:(long long*)arg5;

@end

