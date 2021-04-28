/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AppKit/NSPopUpButton.h>
#import <libobjc.A.dylib/NSAccessibilityStaticText.h>

@protocol ABPopUpButtonDelegate;
@class NSString;

@interface ABPopUpButton : NSPopUpButton <NSAccessibilityStaticText> {

	id<ABPopUpButtonDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ABPopUpButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)cellClass;
-(id<ABPopUpButtonDelegate>)delegate;
-(void)setDelegate:(id<ABPopUpButtonDelegate>)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(id)hitTest:(CGPoint)arg1 ;
-(NSEdgeInsets)alignmentRectInsets;
-(id)accessibilityValue;
-(char)resignFirstResponder;
-(char)needsCardViewBorderDrawing;
@end

