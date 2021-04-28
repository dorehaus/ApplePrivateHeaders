/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ConsoleKit.framework/Versions/A/ConsoleKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@class NSStackView;

@interface CSKStatusViewController : NSViewController {

	NSStackView* _stackView;

}

@property (assign,nonatomic,__weak) NSStackView * stackView;              //@synthesize stackView=_stackView - In the implementation block
-(id)init;
-(void)viewDidLoad;
-(NSStackView *)stackView;
-(void)setStackView:(NSStackView *)arg1 ;
-(void)removeTrailingView;
-(void)addTrailingView:(id)arg1 ;
@end
