/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/Versions/A/CoreAudioKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreAudioKit/CoreAudioKit-Structs.h>
#import <CoreAudioKit/AUNSFlippedView.h>

@class NSTextField, NSPopUpButton;

@interface AUChannelLayoutPopUp : AUNSFlippedView {

	NSTextField* mTitle;
	NSTextField* mLayoutField;
	NSPopUpButton* mPopUpButton;
	ComponentInstanceRecord* mAudioUnit;
	AUListenerBaseRef mEventListener;
	char hasEventListener;

}
+(char)channelLayoutSupportedForAU:(ComponentInstanceRecord*)arg1 ;
-(void)dealloc;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 au:(ComponentInstanceRecord*)arg2 listener:(AUListenerBaseRef)arg3 localizationBundle:(id)arg4 ;
-(void)synchronizeUI;
-(void)rebuildUI;
-(void)addEventListener;
-(void)removeEventListener;
-(void)privUIWasAdjusted:(id)arg1 ;
@end

