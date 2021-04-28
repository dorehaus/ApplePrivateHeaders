/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/Versions/A/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSDeveloperSettings, VSOptional, VSDeveloperServiceConnection;

@interface VSDeveloperSettingsUpdateOperation : VSAsyncOperation {

	VSDeveloperSettings* _settings;
	VSOptional* _result;
	VSDeveloperServiceConnection* _connection;

}

@property (nonatomic,retain) VSOptional * result;                                    //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) VSDeveloperServiceConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy) VSDeveloperSettings * settings;                           //@synthesize settings=_settings - In the implementation block
-(id)init;
-(VSDeveloperServiceConnection *)connection;
-(void)setConnection:(VSDeveloperServiceConnection *)arg1 ;
-(VSOptional *)result;
-(void)setResult:(VSOptional *)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(VSDeveloperSettings *)settings;
-(void)setSettings:(VSDeveloperSettings *)arg1 ;
-(void)executionDidBegin;
@end

