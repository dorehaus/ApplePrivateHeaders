/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DataDetectors.framework/Versions/A/DataDetectors
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSView.h>

@class DDActionViewController;

@interface DDButtonBar : NSView {

	DDActionViewController* target;

}

@property (__weak) DDActionViewController * target; 
-(void)setTarget:(DDActionViewController *)arg1 ;
-(DDActionViewController *)target;
-(void)setControls:(id)arg1 ;
-(void)buttonClicked:(id)arg1 ;
@end
