/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _NSFullScreenSpace, NSMutableArray;

@interface _NSFullScreenBackdropController : NSObject {

	_NSFullScreenSpace* _space;
	NSMutableArray* _backgroundWindows;

}

@property (assign,nonatomic) _NSFullScreenSpace * space;              //@synthesize space=_space - In the implementation block
-(void)dealloc;
-(_NSFullScreenSpace *)space;
-(id)backgroundWindowIDs;
-(void)setSpace:(_NSFullScreenSpace *)arg1 ;
-(void)removeBackgroundWindows;
-(id)_createBackgroundWindowOnScreen:(id)arg1 ;
-(void)updateBackgroundWindows;
@end
