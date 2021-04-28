/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/Versions/A/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ToneKit/ToneKit-Structs.h>
#import <AppKit/NSPopUpButtonCell.h>

@class NSMenuItem;

@interface TKPickerPopUpButtonCell : NSPopUpButtonCell {

	NSMenuItem* _selectedSubmenuItem;

}
-(CGRect)drawTitle:(id)arg1 withFrame:(CGRect)arg2 inView:(id)arg3 ;
-(void)resetSubmenuItemSelection;
-(void)selectSubmenuItem:(id)arg1 ;
@end
