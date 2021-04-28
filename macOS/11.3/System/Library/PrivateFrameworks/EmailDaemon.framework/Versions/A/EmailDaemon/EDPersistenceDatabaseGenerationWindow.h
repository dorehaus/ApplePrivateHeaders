/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/Versions/A/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface EDPersistenceDatabaseGenerationWindow : NSObject {

	long long _earliestGeneration;
	long long _latestGeneration;

}

@property (nonatomic,readonly) long long earliestGeneration;              //@synthesize earliestGeneration=_earliestGeneration - In the implementation block
@property (nonatomic,readonly) long long latestGeneration;                //@synthesize latestGeneration=_latestGeneration - In the implementation block
-(id)init;
-(void)insertGeneration:(long long)arg1 ;
-(long long)earliestGeneration;
-(long long)latestGeneration;
@end

