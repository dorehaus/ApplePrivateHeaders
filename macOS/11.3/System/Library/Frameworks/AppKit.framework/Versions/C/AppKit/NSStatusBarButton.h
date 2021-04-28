/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSButton.h>

@interface NSStatusBarButton : NSButton

@property (assign) char appearsDisabled; 
+(void)initialize;
-(void)setImage:(id)arg1 ;
-(void)rightMouseDown:(id)arg1 ;
-(SEL)doubleAction;
-(void)setDoubleAction:(SEL)arg1 ;
-(void)setBackgroundStyle:(long long)arg1 ;
-(id)_statusItem;
-(id)initWithFrame:(CGRect)arg1 inStatusBar:(id)arg2 ;
-(id)statusMenu;
-(void)setStatusMenu:(id)arg1 ;
-(char)looksDisabled;
-(void)setLooksDisabled:(char)arg1 ;
-(char)appearsDisabled;
-(void)setAppearsDisabled:(char)arg1 ;
-(void)setSelectionInset:(NSEdgeInsets)arg1 ;
-(NSEdgeInsets)selectionInset;
@end
