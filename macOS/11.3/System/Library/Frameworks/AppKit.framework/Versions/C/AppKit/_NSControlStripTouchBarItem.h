/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSCustomTouchBarItem.h>

@interface _NSControlStripTouchBarItem : NSCustomTouchBarItem {

	CGSize _minSize;
	CGSize _preferredSize;
	CGSize _maxSize;

}

@property (assign) CGSize minSize;                    //@synthesize minSize=_minSize - In the implementation block
@property (assign) CGSize preferredSize;              //@synthesize preferredSize=_preferredSize - In the implementation block
@property (assign) CGSize maxSize;                    //@synthesize maxSize=_maxSize - In the implementation block
-(CGSize)minSize;
-(CGSize)maxSize;
-(CGSize)preferredSize;
-(void)setMinSize:(CGSize)arg1 ;
-(void)setMaxSize:(CGSize)arg1 ;
-(void)_itemViewMinSize:(CGSize*)arg1 maxSize:(CGSize*)arg2 preferredSize:(CGSize*)arg3 ;
-(void)setPreferredSize:(CGSize)arg1 ;
@end

