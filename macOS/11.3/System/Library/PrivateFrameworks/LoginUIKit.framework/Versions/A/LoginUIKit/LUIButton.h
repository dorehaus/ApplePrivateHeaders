/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/LoginUIKit.framework/Versions/A/LoginUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LoginUIKit/LoginUIKit-Structs.h>
#import <AppKit/NSButton.h>

@class NSDictionary;

@interface LUIButton : NSButton {

	NSDictionary* _images;

}
+(id)imagesForIdentifier:(id)arg1 style:(int)arg2 ;
+(void)initialize;
-(void)_updateImages:(char)arg1 ;
-(void)dealloc;
-(void)setEnabled:(char)arg1 ;
-(void)setTitle:(id)arg1 ;
-(void)setStyle:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)sizeToFit;
-(id)_appearance;
-(char)resignFirstResponder;
-(char)becomeFirstResponder;
-(unsigned long long)focusRingType;
-(void)setImages:(id)arg1 ;
@end
