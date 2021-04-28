/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/Versions/A/SpotlightDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CSReceiverServerPreferences;

@interface SpotlightSenderState : NSObject {

	CSReceiverServerPreferences* _serverPreferences;

}

@property (nonatomic,readonly) CSReceiverServerPreferences * serverPreferences;              //@synthesize serverPreferences=_serverPreferences - In the implementation block
-(id)init;
-(void)_updateFromPreferences;
-(char)clientDisabled:(long long)arg1 ;
-(CSReceiverServerPreferences *)serverPreferences;
@end

