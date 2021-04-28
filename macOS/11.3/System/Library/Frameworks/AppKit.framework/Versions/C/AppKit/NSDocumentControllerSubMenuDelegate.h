/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSMenuDelegate.h>

@class NSDocumentController, NSString;

@interface NSDocumentControllerSubMenuDelegate : NSObject <NSMenuDelegate> {

	NSDocumentController* _controller;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)updateMenu:(id)arg1 withEvent:(id)arg2 withFlags:(unsigned long long)arg3 ;
-(id)initWithController:(id)arg1 ;
-(void)menuDidClose:(id)arg1 ;
@end

