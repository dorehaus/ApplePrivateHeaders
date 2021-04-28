/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/Versions/A/SiriSpeechSynthesis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Osprey/OspreyChannel.h>

@class NSString;

@interface SFSSOspreyTTSClient : OspreyChannel {

	NSString* _deviceId;

}

@property (nonatomic,retain) NSString * deviceId;              //@synthesize deviceId=_deviceId - In the implementation block
+(id)sharedInstance;
-(void)streamTTS:(id)arg1 beginHandler:(/*^block*/id)arg2 chunkHandler:(/*^block*/id)arg3 endHandler:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(NSString *)deviceId;
-(void)setDeviceId:(NSString *)arg1 ;
-(void)prewarm;
@end

