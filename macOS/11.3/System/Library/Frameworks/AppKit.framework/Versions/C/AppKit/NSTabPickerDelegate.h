/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSTabPickerDelegate <NSObject>
@required
-(void)tabPicker:(id)arg1 didSelectTabItemWhenClosing:(id)arg2;
-(void)tabPicker:(id)arg1 closeTabBarItem:(id)arg2;
-(id)tabPicker:(id)arg1 nextTabPickerItemAfterClosingItem:(id)arg2;
-(id)tabPickerCreatingNewTabItem:(id)arg1;
-(id)tabPickerCurrentlySelectedTabItem:(id)arg1;
-(id)tabPickerItemsForTabPicker:(id)arg1;
-(id)tabBarSnapshotForTabPicker:(id)arg1;
-(id)tabPicker:(id)arg1 thumbnailViewForTabItem:(id)arg2;
-(id)tabPicker:(id)arg1 imageForTabItem:(id)arg2;
-(CGRect*)tabPickerFrameForWindowContentAnimation:(id)arg1;
-(char)tabPicker:(id)arg1 highlightStateForTabItem:(id)arg2;
-(void)tabPickerWillOpen:(id)arg1;
-(void)tabPickerDidOpen:(id)arg1;
-(void)tabPickerWillClose:(id)arg1;
-(void)tabPickerDidClose:(id)arg1;

@end
