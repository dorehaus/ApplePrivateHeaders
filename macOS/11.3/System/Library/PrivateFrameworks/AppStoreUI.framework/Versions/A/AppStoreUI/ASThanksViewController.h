/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppStoreUI.framework/Versions/A/AppStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreUI/AppStoreUI-Structs.h>
#import <AppKit/NSViewController.h>

@class ASWriteReviewConfiguration, ASWriteReviewThanksView;

@interface ASThanksViewController : NSViewController {

	/*^block*/id _completionBlock;
	ASWriteReviewConfiguration* _configuration;

}

@property (nonatomic,retain) ASWriteReviewConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) ASWriteReviewThanksView * thanksView; 
@property (nonatomic,copy) id completionBlock;                                        //@synthesize completionBlock=_completionBlock - In the implementation block
+(CGSize)preferredSizeForConfiguration:(id)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)loadView;
-(ASWriteReviewConfiguration *)configuration;
-(void)setConfiguration:(ASWriteReviewConfiguration *)arg1 ;
-(void)configureDialogView:(id)arg1 ;
-(ASWriteReviewThanksView *)thanksView;
@end

