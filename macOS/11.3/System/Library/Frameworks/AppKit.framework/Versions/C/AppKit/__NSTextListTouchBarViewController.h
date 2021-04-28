/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@class NSTextList;

@interface __NSTextListTouchBarViewController : NSViewController {

	NSTextList* _textList;
	id _target;

}

@property (retain) NSTextList * textList; 
@property (__weak) id target;                          //@synthesize target=_target - In the implementation block
+(id)textListFormats;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(char)_viewControllerSupports10_10Features;
-(NSTextList *)textList;
-(void)setTextList:(NSTextList *)arg1 ;
-(void)_updateSelections;
-(void)_selectList:(id)arg1 ;
@end

