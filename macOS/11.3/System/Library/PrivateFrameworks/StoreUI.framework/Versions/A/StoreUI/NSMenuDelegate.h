/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreUI.framework/Versions/A/StoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSMenuDelegate <NSObject>
@optional
-(void)menuNeedsUpdate:(id)arg1;
-(long long)numberOfItemsInMenu:(id)arg1;
-(char)menu:(id)arg1 updateItem:(id)arg2 atIndex:(long long)arg3 shouldCancel:(char)arg4;
-(char)menuHasKeyEquivalent:(id)arg1 forEvent:(id)arg2 target:(id*)arg3 action:(SEL*)arg4;
-(void)menuWillOpen:(id)arg1;
-(void)menuDidClose:(id)arg1;
-(void)menu:(id)arg1 willHighlightItem:(id)arg2;
-(CGRect*)confinementRectForMenu:(id)arg1 onScreen:(id)arg2;

@end

