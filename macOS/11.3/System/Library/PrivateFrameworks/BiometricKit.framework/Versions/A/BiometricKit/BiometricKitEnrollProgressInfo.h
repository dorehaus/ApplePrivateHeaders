/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/Versions/A/BiometricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface BiometricKitEnrollProgressInfo : NSObject {

	int _message;
	long long _progress;
	long long _currentPrimaryComponentID;
	NSDictionary* _captureImage;
	NSDictionary* _renderedImage;
	NSDictionary* _messageDetails;

}

@property (assign,nonatomic) long long progress;                               //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) long long currentPrimaryComponentID;              //@synthesize currentPrimaryComponentID=_currentPrimaryComponentID - In the implementation block
@property (nonatomic,retain) NSDictionary * captureImage;                      //@synthesize captureImage=_captureImage - In the implementation block
@property (nonatomic,retain) NSDictionary * renderedImage;                     //@synthesize renderedImage=_renderedImage - In the implementation block
@property (assign,nonatomic) int message;                                      //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSDictionary * messageDetails;                    //@synthesize messageDetails=_messageDetails - In the implementation block
-(void)dealloc;
-(id)init;
-(int)message;
-(void)setMessage:(int)arg1 ;
-(long long)progress;
-(void)setProgress:(long long)arg1 ;
-(NSDictionary *)renderedImage;
-(NSDictionary *)captureImage;
-(NSDictionary *)messageDetails;
-(long long)currentPrimaryComponentID;
-(void)setMessageDetails:(NSDictionary *)arg1 ;
-(void)setCaptureImage:(NSDictionary *)arg1 ;
-(void)setRenderedImage:(NSDictionary *)arg1 ;
-(void)setCurrentPrimaryComponentID:(long long)arg1 ;
@end

