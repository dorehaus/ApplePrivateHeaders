/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppStoreUI.framework/Versions/A/AppStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreUI/AppStoreUI-Structs.h>
#import <AppStoreUI/ASWriteReviewDialogView.h>
#import <libobjc.A.dylib/NSTextFieldDelegate.h>
#import <libobjc.A.dylib/NSControlTextEditingDelegate.h>

@class ASRatingControl, ASTextField, NSString;

@interface ASWriteReviewBodyView : ASWriteReviewDialogView <NSTextFieldDelegate, NSControlTextEditingDelegate> {

	ASRatingControl* _ratingControl;
	ASTextField* _titleTextField;
	ASTextField* _bodyTextField;
	/*^block*/id _titleDidChangeCallback;
	/*^block*/id _bodyDidChangeCallback;

}

@property (nonatomic,readonly) ASRatingControl * ratingControl;              //@synthesize ratingControl=_ratingControl - In the implementation block
@property (nonatomic,readonly) ASTextField * titleTextField;                 //@synthesize titleTextField=_titleTextField - In the implementation block
@property (nonatomic,readonly) ASTextField * bodyTextField;                  //@synthesize bodyTextField=_bodyTextField - In the implementation block
@property (nonatomic,copy) id titleDidChangeCallback;                        //@synthesize titleDidChangeCallback=_titleDidChangeCallback - In the implementation block
@property (nonatomic,copy) id bodyDidChangeCallback;                         //@synthesize bodyDidChangeCallback=_bodyDidChangeCallback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layout;
-(void)viewDidMoveToWindow;
-(void)controlTextDidChange:(id)arg1 ;
-(char)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3 ;
-(ASTextField *)titleTextField;
-(void)applyConfiguration:(id)arg1 ;
-(ASRatingControl *)ratingControl;
-(id)initWithConfiguration:(id)arg1 frame:(CGRect)arg2 ;
-(ASTextField *)bodyTextField;
-(void)setTitleDidChangeCallback:(id)arg1 ;
-(void)setBodyDidChangeCallback:(id)arg1 ;
-(id)titleDidChangeCallback;
-(id)bodyDidChangeCallback;
@end
