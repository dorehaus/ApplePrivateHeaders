/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Shortcut.framework/Versions/A/Shortcut
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HPDQueryDelegate <NSObject>
@optional
-(void)helpQuery:(id)arg1 didReturnSuggestions:(id)arg2;
-(void)helpQuery:(id)arg1 didReturnActions:(id)arg2;
-(void)helpQuery:(id)arg1 didEncounterError:(id)arg2;
-(void)helpQueryDidFinishSearching:(id)arg1;

@required
-(void)helpQuery:(id)arg1 didReturnResults:(id)arg2;

@end

