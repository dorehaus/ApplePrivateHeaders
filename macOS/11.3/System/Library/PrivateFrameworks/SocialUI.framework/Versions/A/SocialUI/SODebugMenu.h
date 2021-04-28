/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/SocialUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SocialUI/SODebugMenuItem.h>

@class NSMutableArray;

@interface SODebugMenu : SODebugMenuItem {

	NSMutableArray* _menuItems;

}
-(id)initWithTitle:(id)arg1 ;
-(void)removeAllItems;
-(char)validateMenuItem:(id)arg1 ;
-(void)addMenuItem:(id)arg1 ;
-(void)handleMenuAction:(id)arg1 ;
-(void)addSeperator;
-(void)addMenuItemWithWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 validate:(SEL)arg4 keyEquivalent:(id)arg5 ;
@end
