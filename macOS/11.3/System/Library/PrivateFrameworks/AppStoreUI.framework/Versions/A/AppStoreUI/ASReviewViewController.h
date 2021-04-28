/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppStoreUI.framework/Versions/A/AppStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreUI/AppStoreUI-Structs.h>
#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/NSTextFieldDelegate.h>
#import <libobjc.A.dylib/NSControlTextEditingDelegate.h>

@class ASWriteReviewConfiguration, NSAlert, ASWriteReviewBodyView, NSString;

@interface ASReviewViewController : NSViewController <NSTextFieldDelegate, NSControlTextEditingDelegate> {

	char _isReadyToPublish;
	/*^block*/id _completionBlock;
	ASWriteReviewConfiguration* _configuration;
	NSAlert* _alert;
	long long _state;

}

@property (nonatomic,retain) ASWriteReviewConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) ASWriteReviewBodyView * reviewView; 
@property (nonatomic,retain) NSAlert * alert;                                         //@synthesize alert=_alert - In the implementation block
@property (nonatomic,readonly) char hasActiveRequest; 
@property (assign,nonatomic) char isReadyToPublish;                                   //@synthesize isReadyToPublish=_isReadyToPublish - In the implementation block
@property (assign,nonatomic) long long state;                                         //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) id completionBlock;                                        //@synthesize completionBlock=_completionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)queryStringForDictionary:(id)arg1 escapedValues:(char)arg2 ;
+(CGSize)preferredSizeForConfiguration:(id)arg1 ;
+(id)stringByEscapingString:(id)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)loadView;
-(void)controlTextDidChange:(id)arg1 ;
-(char)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3 ;
-(ASWriteReviewConfiguration *)configuration;
-(NSAlert *)alert;
-(void)updateControls;
-(void)setConfiguration:(ASWriteReviewConfiguration *)arg1 ;
-(void)setAlert:(NSAlert *)arg1 ;
-(char)hasActiveRequest;
-(ASWriteReviewBodyView *)reviewView;
-(void)configureDialogView:(id)arg1 ;
-(void)loadReviewMetadata;
-(void)publishReview;
-(void)transitionToLoadingCompleteAndPublishIfNeeded;
-(void)promptForNickNameWithMessage:(id)arg1 ;
-(char)isReadyToPublish;
-(void)setIsReadyToPublish:(char)arg1 ;
@end
