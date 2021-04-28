/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CharacterPicker.framework/Versions/A/CharacterPicker
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@protocol CPKEmojiIMViewControllerDelegate;
@interface CPKEmojiIMViewController : NSViewController {

	id<CPKEmojiIMViewControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<CPKEmojiIMViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)startDataPreparation;
+(id)createAssociatedWindowsOverWindowLevel:(long long)arg1 ;
-(id<CPKEmojiIMViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CPKEmojiIMViewControllerDelegate>)arg1 ;
-(void)reset;
-(id)initWithState:(id)arg1 ;
-(void)setSearchResults:(id)arg1 ;
-(id)getStateInfo;
-(void)willOpenedForSearching;
-(void)setAssociatedWindows:(id)arg1 withLocationProvider:(/*^block*/id)arg2 ;
-(void)setPreviewWindowLocationProvider:(/*^block*/id)arg1 ;
@end

