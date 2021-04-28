/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DataDetectors.framework/Versions/A/DataDetectors
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectors/DataDetectors-Structs.h>
#import <AppKit/NSView.h>

@class NSString, NSMutableDictionary;

@interface DDLargeTypeView : NSView {

	CGRect _windowRect;
	CGRect _textRect;
	NSString* _string;
	NSMutableDictionary* _attributes;

}
-(char)acceptsFirstResponder;
-(void)mouseDown:(id)arg1 ;
-(id)makeBackingLayer;
-(char)becomeFirstResponder;
-(void)viewDidChangeBackingProperties;
-(CGRect)windowRect;
-(id)initWithString:(id)arg1 onScreen:(id)arg2 ;
@end
