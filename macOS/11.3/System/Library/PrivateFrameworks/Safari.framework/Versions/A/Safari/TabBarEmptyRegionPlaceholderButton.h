/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/TabButton.h>
#import <libobjc.A.dylib/ButtonInTabSyncGroup.h>

@protocol ButtonInTabSyncGroupDelegate;
@class NSString;

@interface TabBarEmptyRegionPlaceholderButton : TabButton <ButtonInTabSyncGroup> {

	char _syncedWithOtherButton;
	id<ButtonInTabSyncGroupDelegate> _buttonInTabSyncGroupDelegate;

}

@property (assign,nonatomic,__weak) id<ButtonInTabSyncGroupDelegate> buttonInTabSyncGroupDelegate;              //@synthesize buttonInTabSyncGroupDelegate=_buttonInTabSyncGroupDelegate - In the implementation block
@property (assign,getter=isSyncedWithOtherButton,nonatomic) char syncedWithOtherButton;                         //@synthesize syncedWithOtherButton=_syncedWithOtherButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 tabBarViewItem:(id)arg2 ;
-(id<ButtonInTabSyncGroupDelegate>)buttonInTabSyncGroupDelegate;
-(void)setButtonInTabSyncGroupDelegate:(id<ButtonInTabSyncGroupDelegate>)arg1 ;
-(char)isSyncedWithOtherButton;
-(void)setSyncedWithOtherButton:(char)arg1 ;
-(void)setTabButtonState:(unsigned long long)arg1 animated:(char)arg2 notifyButtonInTabSyncGroupDelegate:(char)arg3 ;
-(void)setTabButtonState:(unsigned long long)arg1 animated:(char)arg2 ;
@end
