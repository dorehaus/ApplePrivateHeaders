/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/Versions/A/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherFoundation/WFTask.h>

@interface WFFavoriteLocationRequest : WFTask {

	/*^block*/id _resultHandler;

}

@property (nonatomic,readonly) id resultHandler;              //@synthesize resultHandler=_resultHandler - In the implementation block
-(id)resultHandler;
-(void)handleResponse:(id)arg1 ;
-(void)handleError:(id)arg1 forResponseIdentifier:(id)arg2 ;
-(void)startWithService:(id)arg1 ;
-(id)initWithResultHandler:(/*^block*/id)arg1 ;
-(void)handleCancellation;
@end

