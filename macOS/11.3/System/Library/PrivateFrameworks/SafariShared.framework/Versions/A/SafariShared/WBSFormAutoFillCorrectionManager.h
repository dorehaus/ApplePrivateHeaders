/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/Versions/A/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBSFormAutoFillCorrectionsStore, WBSFormAutoFillCorrectionManagerDelegate;
@class WBSFormAutoFillClassificationToCorrectionsTransformer;

@interface WBSFormAutoFillCorrectionManager : NSObject {

	id<WBSFormAutoFillCorrectionsStore> _correctionsStore;
	WBSFormAutoFillClassificationToCorrectionsTransformer* _classificationToCorrectionsTransformer;
	id<WBSFormAutoFillCorrectionManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WBSFormAutoFillCorrectionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<WBSFormAutoFillCorrectionManagerDelegate>)delegate;
-(void)setDelegate:(id<WBSFormAutoFillCorrectionManagerDelegate>)arg1 ;
-(void)_setCorrections:(id)arg1 forFingerprint:(id)arg2 onDomain:(id)arg3 ;
-(id)_feedbackProcessor;
-(id)initWithCorrectionsStore:(id)arg1 ;
-(void)getCorrectionsForFormFieldFingerprint:(id)arg1 onDomain:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setCorrectionSet:(id)arg1 ;
@end

