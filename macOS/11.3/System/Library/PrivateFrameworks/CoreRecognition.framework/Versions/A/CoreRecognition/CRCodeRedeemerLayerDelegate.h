/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreRecognition.framework/Versions/A/CoreRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRCodeRedeemerLayerDelegate <NSObject>
@optional
-(void)codeRedeemerLayer:(id)arg1 willRecognizeCodes:(id)arg2;

@required
-(void)codeRedeemerLayerWillFadeStatus:(id)arg1;
-(void)codeRedeemerLayerDidFadeStatus:(id)arg1;
-(void)codeRedeemerLayerCameraDidStart:(id)arg1;
-(void)codeRedeemerLayer:(id)arg1 didSucceedWithCodes:(id)arg2;
-(void)codeRedeemerLayer:(id)arg1 didFailWithError:(id)arg2;
-(void)codeRedeemerLayerDidFindBox:(id)arg1;

@end

